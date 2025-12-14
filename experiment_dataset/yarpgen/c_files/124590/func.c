/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124590
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_1 [i_0 - 1] [i_0 - 2]) | (((/* implicit */int) arr_0 [i_0 - 2])))) : (-385989304)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max(((~(((-385989304) | (arr_1 [i_0] [i_0]))))), (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_1 - 1]));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(unsigned short)22] [i_1 + 2]))))) || (((/* implicit */_Bool) ((signed char) arr_4 [i_1] [i_1 + 1])))));
                                var_17 = (i_4 % 2 == 0) ? (((/* implicit */unsigned int) ((((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) + (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]))) == (((((/* implicit */int) arr_4 [8U] [i_1 + 2])) % (((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_4 + 1] [i_2] [i_1 + 2]))))))) : (((/* implicit */unsigned int) ((((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) - (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]))) == (((((/* implicit */int) arr_4 [8U] [i_1 + 2])) % (((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_4 + 1] [i_2] [i_1 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((int) arr_6 [i_1 + 1] [i_1 + 2]));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) 2010188706U)) & (arr_20 [i_1 - 1] [i_1 + 2] [(signed char)23]))) << (((arr_20 [i_1 + 2] [i_1 + 2] [i_1]) ^ (arr_20 [i_1 + 2] [i_1 + 2] [i_1])))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-16491))) - (8388592U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1561140808)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_1 - 1] [i_2] [i_3] [i_6] [i_7] [15] [15] = (+(min((arr_19 [i_1 - 1] [i_1 - 1] [i_1 + 2]), (arr_19 [4ULL] [i_2] [i_1 + 1]))));
                            var_21 = ((4294967283U) / (((/* implicit */unsigned int) -1561140808)));
                        }
                        for (signed char i_8 = 1; i_8 < 23; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 762660860U))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (-(arr_18 [i_8] [i_3] [i_2])))) && (((/* implicit */_Bool) arr_5 [i_8 + 1] [i_1 - 1])))))))));
                            arr_30 [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_8 - 1])) ? (arr_20 [i_1 - 1] [i_1 + 1] [i_8 + 2]) : (arr_20 [i_1 - 1] [i_1 + 2] [i_8 + 2]))), (((/* implicit */long long int) (-(((/* implicit */int) (short)16496)))))));
                            var_24 = ((/* implicit */unsigned long long int) max((arr_16 [i_1] [i_1] [(unsigned char)7]), (min((((/* implicit */signed char) arr_28 [i_3] [i_1 - 1] [i_1] [i_1])), (arr_12 [i_1] [i_2] [i_3] [i_2] [i_8])))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */short) ((arr_20 [i_1 - 1] [i_1 + 1] [i_9 - 1]) - (arr_20 [i_1 - 1] [i_1 + 1] [i_9 - 1])));
                        arr_35 [i_9] [i_9] = ((/* implicit */long long int) ((unsigned char) arr_4 [i_1] [(short)20]));
                    }
                }
            } 
        } 
    } 
}
