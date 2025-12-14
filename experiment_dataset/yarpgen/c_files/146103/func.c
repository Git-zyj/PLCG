/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146103
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0] [i_3] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) arr_7 [i_0] [i_3] [i_4])))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(2124863676))))));
                                arr_14 [i_0] [i_0] [i_0] [7ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) (+((~(((/* implicit */int) var_2)))))))));
                                arr_15 [i_0] [2U] [i_0] [i_1] [i_1] |= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_20 [(short)2] [i_2] [i_0] [(unsigned short)5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_5])), (var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (max((var_3), (((/* implicit */unsigned short) var_1))))))) : ((-((+(((/* implicit */int) var_9))))))));
                                var_16 = ((/* implicit */signed char) ((min((((var_7) / (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (+(arr_0 [i_5] [i_0])))))) ^ (((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))), (((/* implicit */long long int) var_0))))))))));
}
