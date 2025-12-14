/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141714
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)60)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2]))) ^ (max((arr_12 [(unsigned short)4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4]), (((/* implicit */unsigned int) 2147483647))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) min((((/* implicit */int) var_9)), ((-2147483647 - 1))))) | (arr_4 [i_0] [i_4 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(2147483623)))))) ? (min((((((/* implicit */int) var_2)) / (((/* implicit */int) var_15)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (arr_15 [(unsigned char)11] [i_6 + 1])))))) : ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_6 + 2]))))))));
                arr_20 [i_6 - 1] [i_6] [9ULL] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_5) ? (arr_19 [i_5] [i_5]) : (var_11)))) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_1)))))));
            }
        } 
    } 
}
