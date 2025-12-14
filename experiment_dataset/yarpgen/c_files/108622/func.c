/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108622
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
    var_18 &= ((/* implicit */unsigned short) var_1);
    var_19 *= (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)171)))), (((long long int) 18446744073709551615ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)126)) >> (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)171)))) - (171)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1] = (+(((/* implicit */int) arr_4 [i_0])));
                        arr_12 [i_0] [i_1] [(unsigned char)11] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(arr_3 [i_2] [i_2] [i_2])));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_2] [i_2] = ((((/* implicit */int) var_17)) + (((/* implicit */int) (unsigned char)84)));
                            var_20 = ((/* implicit */long long int) var_14);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 2650183275U))));
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)84))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)126)) * (((/* implicit */int) (unsigned short)65410)))) - (((/* implicit */int) (unsigned char)171))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [(short)8] |= ((/* implicit */unsigned short) ((_Bool) var_1));
                            var_24 -= ((/* implicit */signed char) (-(arr_17 [i_5] [i_3] [i_2] [(signed char)7] [i_0])));
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(1303869945)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)48052))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] = var_6;
                            var_26 = ((/* implicit */unsigned short) 74521334U);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_6 [i_2] [i_2] [i_2])));
                        }
                        var_28 = ((/* implicit */_Bool) min((var_28), ((!(arr_4 [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) (unsigned short)21127);
                        arr_28 [i_0] [i_7] [i_1] [i_1] [i_0] [i_7] &= ((/* implicit */int) ((unsigned int) var_13));
                        arr_29 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_11)))));
                    }
                    arr_30 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 4220445962U);
                    var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_0] [2LL] [i_0])) + (((/* implicit */int) arr_9 [i_0] [(unsigned short)14] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_3)))))) : ((~(((arr_26 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) var_15))))))));
                }
            } 
        } 
    } 
}
