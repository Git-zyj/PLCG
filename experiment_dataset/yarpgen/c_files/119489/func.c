/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119489
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
    var_20 = ((/* implicit */unsigned long long int) ((((var_10) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)28958)) == (((/* implicit */int) (unsigned short)28981)))))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (unsigned short)0)), (var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 3] [i_1] [i_0] = arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1];
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((arr_8 [i_1 - 1] [i_1 - 1] [i_2]) << (((arr_8 [i_0] [i_1] [i_2]) - (9027029830628928468ULL))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_1 - 2] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(arr_8 [i_3 - 1] [i_1 - 1] [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_17 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-22656)) < (((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 2] [i_0]))))) >> (((((13442317992774508685ULL) << (((((/* implicit */int) arr_1 [i_3])) + (23017))))) - (8442736978910248933ULL)))));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_3 + 1] [i_4])) * ((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_1 - 3] [i_2] [i_3] [i_4]))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)4))) ? (((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_1 + 1] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -2131366039)) ? (5004426080935042931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3 + 1])))))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 - 1]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_4 [i_1] [i_1] [i_3 - 2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 1]))) - (18446744073709551615ULL))))))));
                            arr_22 [i_1] [i_2] [i_3] [i_5] = (~(13442317992774508690ULL));
                            arr_23 [i_3] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_5] [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_3 [i_0])))) == (((/* implicit */int) arr_12 [i_0] [i_3 - 1]))));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59074))))) || (((/* implicit */_Bool) ((arr_5 [i_0] [i_1 - 2] [i_0]) - (arr_21 [i_6 - 1] [i_6 + 2] [i_2] [i_1 - 3] [i_1] [i_1 + 1] [i_0]))))));
                        arr_27 [i_2] [i_2] [i_1] = arr_11 [i_1] [i_1] [i_1] [i_0];
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_30 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [i_6 + 3] [i_6 + 2] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_6 + 3]))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9)) & (((/* implicit */int) (_Bool)0))));
                            arr_31 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) arr_15 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 2] [i_1 - 2])) * (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                        }
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_6 + 1] [i_6 + 1] [i_2] [i_6 + 1])) >> (((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2])) + (83)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)185))));
                        arr_37 [i_8] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)44338);
                        arr_38 [i_0] [i_0] |= (((_Bool)0) || (((/* implicit */_Bool) arr_3 [i_1 + 1])));
                        arr_39 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 3])) > (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1 - 3] [i_1 + 1]))));
                    }
                }
                var_27 = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
}
