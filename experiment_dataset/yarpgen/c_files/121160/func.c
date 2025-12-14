/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121160
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((arr_4 [i_1]), (arr_1 [i_1])));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (unsigned char)203)))), (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_4 [i_0])))))) : ((-(max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_12))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [i_1] [(unsigned short)10] [i_4] [i_3] [i_4]))) ? (((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_8 [i_1] [i_1] [i_2 + 1])))));
                                arr_15 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1]);
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_18 -= ((arr_2 [i_2 + 1]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2 - 2]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) ^ ((-(arr_6 [(unsigned char)14] [i_1] [16ULL])))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                            {
                                arr_23 [i_1] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_3] [i_6])) ? (arr_22 [i_0] [i_1] [i_2 - 2]) : (arr_22 [i_3] [i_3] [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                                var_20 = ((/* implicit */signed char) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52171)))));
                            }
                            var_21 &= arr_8 [i_0] [i_0] [i_0];
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    var_24 = var_9;
}
