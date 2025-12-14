/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136171
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
    var_19 = ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned long long int) var_3))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_7))))) < (var_1)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_2 + 1] [i_1] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_0] [i_2 + 2])) < (((/* implicit */int) var_4))));
                        arr_11 [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [(short)8] [i_1] [i_2] [i_3] [i_2 + 2]))));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_2 + 2] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))) % (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_0] [i_1] [i_0] [i_4])))));
                                arr_20 [i_5] [i_1] [i_4] [i_5] = ((/* implicit */signed char) ((((arr_0 [i_2 + 1]) - (var_1))) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_2 + 1])), (var_17)))))));
                                arr_21 [i_5] [i_4] [i_2 - 1] [i_4] [i_0] = ((/* implicit */unsigned int) var_18);
                                arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_0] [(_Bool)1] [i_1] [i_2] [(unsigned short)2] [i_4] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_5]))))))) ? (((11937738791303195048ULL) % (((/* implicit */unsigned long long int) 801260320)))) : (((/* implicit */unsigned long long int) min((min((arr_18 [(unsigned char)0] [(unsigned char)0] [i_5] [i_4] [i_5]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(_Bool)1] [i_4] [i_2] [i_0] [i_0]))))))))));
                                arr_23 [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)98);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
}
