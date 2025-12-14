/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102625
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)15]))) : (((unsigned int) (unsigned short)60252))));
                    var_10 = var_3;
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)14]))) / (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0)))))))) : (((long long int) var_8))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) ((_Bool) arr_13 [i_3 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min(((~(min((((/* implicit */unsigned long long int) var_4)), (arr_12 [i_5] [i_5]))))), (arr_12 [i_5] [i_3 - 2]))))));
                    var_13 = ((/* implicit */long long int) arr_14 [i_3 - 2] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [i_3] [i_6])) ? (arr_15 [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (91614853) : (((/* implicit */int) arr_11 [i_3] [i_3])))))));
                                arr_21 [i_7] [i_6] [i_3] [(signed char)9] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_7] [(_Bool)1] [i_7] [i_6]);
                                arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10596)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                                var_15 -= ((/* implicit */unsigned int) max((max(((unsigned short)6367), (((/* implicit */unsigned short) arr_18 [i_3 - 1] [i_3 - 1] [i_4] [i_5] [i_6 + 1] [i_7])))), (((/* implicit */unsigned short) ((_Bool) var_9)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
