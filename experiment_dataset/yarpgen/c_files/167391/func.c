/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167391
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_12))))), (max((((/* implicit */unsigned long long int) var_17)), (var_10))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 *= ((unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((signed char) arr_9 [i_0] [i_1 - 1] [i_1 - 1]));
                        var_23 ^= ((/* implicit */long long int) arr_6 [i_3] [i_2] [i_1] [i_0]);
                        var_24 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_3]))));
                        var_25 |= ((/* implicit */long long int) arr_6 [i_3] [i_2] [i_1] [i_0]);
                    }
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        var_26 -= ((/* implicit */short) var_6);
                        var_27 = ((/* implicit */long long int) (~((+(arr_12 [i_4] [i_1] [i_0])))));
                        arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_28 |= ((/* implicit */_Bool) max(((unsigned char)128), (((/* implicit */unsigned char) (signed char)-15))));
        arr_18 [i_5] = arr_17 [i_5] [i_5];
        var_29 = ((/* implicit */_Bool) min((arr_16 [i_5]), (((/* implicit */unsigned short) var_17))));
        var_30 = ((/* implicit */unsigned short) min((min((-1LL), (((/* implicit */long long int) (signed char)-15)))), (((/* implicit */long long int) max((var_13), (arr_15 [i_5]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_20 [i_6] [i_6]), (((/* implicit */signed char) arr_22 [i_6])))))))), (min((((int) arr_20 [i_6] [i_6])), ((~(((/* implicit */int) arr_17 [i_6] [i_6]))))))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) max((((/* implicit */int) arr_20 [i_6] [i_6])), ((-(((/* implicit */int) arr_16 [i_6])))))))));
    }
    var_32 = ((/* implicit */unsigned char) var_9);
}
