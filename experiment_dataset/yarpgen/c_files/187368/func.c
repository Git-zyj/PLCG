/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187368
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
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (arr_1 [i_0] [i_0 - 3])))), (((unsigned char) arr_0 [i_0] [i_0 + 3]))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 3])) || (((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 + 3])))) ? (((/* implicit */int) min(((short)9557), ((short)3805)))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((short) (short)32759))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_0 [i_0] [10]))))) : ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_5 [4LL] [(short)12]))))));
            var_20 -= ((/* implicit */long long int) (-(arr_1 [(unsigned short)0] [i_0 + 3])));
            /* LoopSeq 4 */
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) -1541833810)))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_11))));
            }
            for (short i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 3])) - (15526)))));
                arr_14 [i_0] [4U] [i_3 - 2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3]);
            }
            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                arr_17 [0ULL] [i_0] [i_4] = ((/* implicit */unsigned int) ((arr_1 [i_0] [(unsigned short)10]) - (((/* implicit */int) var_2))));
                arr_18 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */long long int) var_15);
                arr_19 [i_0] [i_1] [i_4] = ((/* implicit */long long int) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_0] [7LL] [i_6] [i_0] = ((/* implicit */short) arr_22 [i_0] [i_0 - 4] [i_5 + 1] [i_0]);
                            arr_27 [5ULL] [i_1] [i_0] [i_0] [i_1] [(short)0] [(short)0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? ((~(-1541833810))) : (((/* implicit */int) (unsigned short)59289)));
                        }
                    } 
                } 
            }
            for (short i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                arr_31 [i_0] = ((/* implicit */short) (((~(((/* implicit */int) var_1)))) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_7]))));
                /* LoopSeq 1 */
                for (long long int i_8 = 3; i_8 < 14; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_8 + 1] [i_9] [i_8] [i_8 + 1] [i_8 - 3] [i_8 - 1])) ? (arr_36 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]) : (((/* implicit */int) arr_35 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_9])))))));
                        var_24 = ((/* implicit */unsigned int) var_11);
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) arr_15 [i_9] [i_7 + 3] [i_8 - 2])))));
                        var_26 = ((((/* implicit */_Bool) (short)29946)) ? (13254522935533619231ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9883))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_7 + 2] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0 + 1] [i_9] [i_7] [i_8] [i_7] [14ULL]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7])) ? (arr_8 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        arr_39 [i_0] [i_10] = ((/* implicit */unsigned char) ((7245100483756018907LL) | (-9223372036854775794LL)));
                        arr_40 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) var_7);
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_0] [9U] [i_7 + 2] [i_7 + 2] [4U]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) var_15))))) : (((int) arr_8 [10U] [i_1] [(unsigned char)10]))));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    arr_43 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))))));
                    var_29 = ((int) arr_1 [14ULL] [i_0 - 4]);
                    arr_44 [i_11] [i_7 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_45 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1057))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_11 - 1])))));
                }
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    arr_48 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_35 [i_0] [i_1] [i_7] [1] [i_0])));
                    arr_49 [i_0] [10U] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1]);
                    var_30 = ((/* implicit */int) 13254522935533619231ULL);
                }
                var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [14U] [(short)6] [i_1] [(short)6] [i_7 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 3] [i_1] [i_7])) : (((/* implicit */int) arr_16 [i_7 + 1] [i_1] [i_7] [i_7]))));
                var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21044)) ? (arr_12 [i_1] [i_7 + 2] [i_7] [12U]) : (arr_12 [i_7] [i_7 + 3] [i_7] [8])));
            }
        }
        for (unsigned int i_13 = 2; i_13 < 14; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                arr_55 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_20 [i_14] [i_13 - 2] [i_13] [i_0 - 3])) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_13] [i_14 - 1] [i_14 + 1])) : (((/* implicit */int) arr_24 [15ULL])))));
                arr_56 [i_0] [i_13 + 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15444)) || (((/* implicit */_Bool) arr_37 [i_14] [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14]))))), (min((((/* implicit */long long int) -1048247130)), (-2145832479649827266LL)))));
                arr_57 [i_0] [i_0] [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_28 [i_13] [i_13 - 2]), (arr_28 [(unsigned short)13] [i_13 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_13 - 1] [i_14])) << (((((/* implicit */int) var_4)) - (28557)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7))))) : (arr_42 [i_0] [i_0] [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_20 [4LL] [4LL] [4LL] [i_13]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (short)0)))))));
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 13; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_22 [i_0 - 1] [i_13] [i_15] [i_15]))));
                            arr_66 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_61 [i_13 - 1] [i_15] [i_16 + 3] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59289))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_16 + 3])) ? (((/* implicit */int) arr_15 [i_0] [i_13] [i_16 + 3])) : (((/* implicit */int) arr_15 [i_0] [3LL] [i_16 + 3]))))));
                            arr_67 [i_0] [15U] [(_Bool)1] [i_16] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_13 + 1] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32759))))) : (max((var_8), (((/* implicit */unsigned long long int) (short)12))))))) ? (min((arr_65 [i_0 - 4] [i_16 - 1] [i_0]), (arr_65 [i_0 + 3] [i_16 - 1] [i_0]))) : (((/* implicit */unsigned long long int) (+(((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_13] [i_15] [i_16] [i_0]))))))))));
                        }
                    } 
                } 
            } 
            arr_68 [i_0] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]);
            arr_69 [i_0] [i_0] [i_0] = ((short) arr_8 [i_13] [i_0] [i_0]);
        }
    }
    var_34 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_35 = ((/* implicit */_Bool) var_10);
}
