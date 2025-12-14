/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152385
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_12)), (var_13)))))) ? (((/* implicit */int) var_12)) : (((int) 3437981574273119641ULL))));
    var_20 += ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_3] [i_0] = (((_Bool)1) ? (2177383932154545388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] [0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2]);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */unsigned long long int) 0))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 3609835632U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4519021954240437563LL)));
                            var_24 -= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_12 [i_0] [i_1] [i_2] [8U] [i_5]));
                            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1] [i_3]) != (((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_0 + 2])))))) : (var_2)));
                        }
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            arr_21 [i_0 - 1] [i_2] [i_1] [i_0 - 1] [i_2] [i_3] [i_6 + 1] |= ((/* implicit */long long int) arr_6 [i_0 + 2] [(unsigned short)7] [i_3 - 1] [i_6 - 1]);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_0 + 2] [i_3 - 1] [i_3 - 3] [i_6 + 1])) ? (2292282042060775661LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-25736))))))));
                            arr_22 [i_0] [i_0 + 2] [i_2] [i_2] [i_3] [i_3] [i_0] |= ((/* implicit */signed char) arr_8 [i_3 + 1] [i_2]);
                        }
                        arr_23 [i_0 + 2] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_7 [i_0 + 1] [11U]) : (arr_9 [i_0] [i_0])))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_26 -= ((/* implicit */unsigned int) 22ULL);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))));
                        var_28 += arr_6 [i_0 + 1] [i_1] [i_2] [i_7];
                        arr_26 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2])) ? (arr_24 [i_0 + 1] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_2])))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_7] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) arr_27 [9ULL] [(signed char)7] [i_7] [i_2] [i_2] [i_1] [i_0]);
                            var_29 = ((/* implicit */unsigned int) var_14);
                            var_30 = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((unsigned char) 3013777894U)))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_2))));
                            arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) (_Bool)1);
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9476))) & (3705251562U)))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_3)))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_35 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) max(((short)-18991), (((/* implicit */short) var_6))))) : (((/* implicit */int) (short)19003))))) >= (((arr_37 [i_0 + 1] [i_2] [i_0 + 1] [i_11] [i_0 + 1] [i_11]) % (arr_37 [i_0 - 1] [i_0 - 1] [i_11] [i_11] [i_11] [i_11])))));
                        var_36 = ((/* implicit */unsigned long long int) var_9);
                    }
                    for (unsigned int i_12 = 2; i_12 < 11; i_12 += 2) 
                    {
                        arr_46 [i_0] = min((((/* implicit */unsigned long long int) var_6)), (((arr_41 [6U] [i_1] [i_1] [i_12 + 2] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) -3037505916760686281LL);
                            var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18977)) ^ (((/* implicit */int) (short)-18977))))) ? (((/* implicit */unsigned int) ((int) var_0))) : (var_10)));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 3; i_14 < 11; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_14] [i_14 - 3] [i_14] [i_12 + 2] [i_0 + 2])) || (((/* implicit */_Bool) 2292282042060775644LL))));
                            arr_54 [i_0] [i_0] [i_1] [i_2] [i_2] [i_12] [i_14] = ((/* implicit */long long int) ((arr_51 [i_0 - 1] [i_0 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (arr_24 [i_0] [i_12 + 2] [i_2])));
                        }
                        arr_55 [i_12] [i_12] [i_2] |= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_42 [i_12 - 1] [i_2] [(_Bool)1] [i_0 - 1] [(_Bool)1] [i_0])))), (((/* implicit */int) arr_42 [i_12 - 2] [12ULL] [i_1] [i_0 + 1] [i_0] [i_0]))));
                    }
                    var_40 ^= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) min((((short) (_Bool)1)), (var_14))))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)40)), (19148863120610662ULL)));
}
