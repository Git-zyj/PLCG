/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159431
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
    var_20 = ((/* implicit */unsigned long long int) (-(var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((((/* implicit */_Bool) ((unsigned int) 8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (0ULL))) : (max((((/* implicit */unsigned long long int) (unsigned char)235)), (((((/* implicit */_Bool) 28672)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (0ULL)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2 - 3] [i_1] [i_0] = (-((+(((/* implicit */int) (_Bool)1)))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [0LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (~(arr_0 [i_2])))))));
                                var_22 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_1 [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [2LL])))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_4] = ((/* implicit */unsigned int) var_18);
                                var_23 = ((/* implicit */signed char) ((unsigned char) (+(arr_8 [i_0] [i_1] [i_2] [i_1 - 1]))));
                            }
                            for (short i_5 = 4; i_5 < 10; i_5 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((int) ((unsigned long long int) ((long long int) arr_0 [i_2])))))));
                                var_25 += ((/* implicit */unsigned char) arr_13 [(signed char)7] [8LL] [i_3] [i_2] [i_1] [6U] [i_0]);
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                            {
                                var_26 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [0] [i_2] [i_2] [i_6]))) : (arr_20 [i_0] [8ULL] [i_6] [i_6] [i_0] [i_3] [(unsigned char)4]))));
                                arr_22 [i_1] [9U] [i_2] = ((/* implicit */signed char) arr_12 [i_1] [i_1 + 1] [i_2] [i_2] [i_3 + 2] [(signed char)4]);
                                var_27 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
