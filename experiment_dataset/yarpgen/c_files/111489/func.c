/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111489
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
    var_17 *= ((/* implicit */_Bool) min((max((994288615U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((min((1340499276U), (((/* implicit */unsigned int) (short)-32761)))), (((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_10 [i_3] [i_3 - 2] [i_1] [i_3 + 2])))) ? (((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_2] [2] [i_4] [i_0])) ? (arr_13 [i_3 + 1] [(unsigned char)8] [i_2] [i_3] [i_4] [i_3]) : (arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_1]))) : (((/* implicit */unsigned int) var_6)))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_3 - 1] [(unsigned char)21] [i_2] [(short)20] [(unsigned char)21])), (916987548U)))) ? (((((/* implicit */_Bool) var_5)) ? (5276952418923838873ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((arr_11 [i_3 + 2] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_11 [i_3 - 1] [(short)21] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_3 - 1] [12] [(_Bool)1] [i_3]))))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [(unsigned char)22] [i_4] &= ((/* implicit */unsigned short) min((max((916987548U), (((/* implicit */unsigned int) (signed char)-10)))), (((/* implicit */unsigned int) var_0))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) var_6);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_3);
}
