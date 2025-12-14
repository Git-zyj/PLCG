/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101233
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [20ULL] [i_3] [i_2] [(unsigned char)13] [i_4] = ((/* implicit */_Bool) -2147483642);
                                var_16 = ((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535)));
                                var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) >= (9126633640058160366LL)))) == (((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((short) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 + 2] [i_1 + 2]))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */int) max((((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1])))), ((_Bool)0)));
                        /* LoopSeq 3 */
                        for (short i_6 = 4; i_6 < 19; i_6 += 3) 
                        {
                            arr_20 [7] [i_6] [i_1] [i_1] [i_6] [i_0 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 - 1])))));
                            arr_21 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */int) arr_0 [(_Bool)1])) >= (((/* implicit */int) arr_3 [i_2]))))))) < ((+(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                        }
                        for (int i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            arr_24 [(unsigned char)6] [(unsigned char)6] [(unsigned char)18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0] [i_0])), (var_3))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_12 [i_0 + 3] [i_5] [i_1] [i_2] [(unsigned char)6] [i_0 + 3])), (arr_18 [i_0 - 2] [(_Bool)1] [i_2] [(_Bool)1] [20ULL])))) ? (((unsigned long long int) arr_7 [i_0 + 2] [i_0 - 2])) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)0)), (9126633640058160364LL))), (arr_9 [i_7 + 1] [i_1 + 3] [i_1 + 1] [i_0 + 1])))))))));
                            arr_25 [i_1 + 1] [i_2] = ((/* implicit */int) arr_16 [i_0] [i_0] [i_5] [i_0]);
                            var_20 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) arr_6 [i_2] [i_1 + 2]))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_12)), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (arr_1 [i_0 + 1] [i_0 - 2])))));
                            var_22 = ((/* implicit */_Bool) (-((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-23428)), ((unsigned short)0))))))));
                            var_23 = ((/* implicit */short) arr_3 [0LL]);
                            var_24 = ((/* implicit */_Bool) arr_0 [i_0]);
                        }
                        var_25 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_5] [i_0 + 2])), ((unsigned short)0)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-30869)))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        var_27 |= ((/* implicit */unsigned long long int) 9126633640058160366LL);
                        var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_8 [i_9] [i_2] [i_2] [i_1 + 3] [i_2] [i_0]))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_34 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                        arr_35 [i_0] [(unsigned short)1] [(unsigned short)1] [i_10] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (max((((/* implicit */int) arr_30 [i_0] [i_0] [i_2] [i_2])), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1 - 1] [i_2] [i_10])) ? (((/* implicit */int) arr_16 [(unsigned char)16] [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) var_2))));
                        var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_27 [i_0 - 2] [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_1 + 2]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        arr_39 [i_0] [i_11] [12ULL] [i_1] = ((/* implicit */short) arr_5 [i_0 + 1] [i_1 - 1] [i_11 - 1]);
                        arr_40 [i_0 - 2] [i_1 + 1] [i_0 - 2] [(_Bool)0] [i_1] [i_11 - 1] = (+(((/* implicit */int) (short)-30193)));
                        var_30 = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) ((262143) < (((/* implicit */int) (unsigned short)65521)))))))));
}
