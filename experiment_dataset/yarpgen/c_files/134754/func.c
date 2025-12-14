/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134754
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_7)))))) ? ((-(min((((/* implicit */long long int) var_4)), (var_2))))) : (arr_1 [i_1])));
                var_18 = ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) == (max((var_5), (((/* implicit */long long int) 1413083594U)))))))) : (-7566503274625878440LL));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-23233))))) ? (9541460482996744597ULL) : (((/* implicit */unsigned long long int) 1174808405))));
                                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_4 - 2])))) || (((/* implicit */_Bool) max((arr_1 [i_4 - 1]), (arr_1 [i_4 - 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = var_3;
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(arr_5 [i_6] [i_5])))), (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_1 [i_5]) : (((/* implicit */long long int) arr_5 [i_5] [i_5]))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
                        {
                            arr_28 [i_5] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_5] [15]))));
                            arr_29 [i_7] [i_8] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */int) arr_14 [(unsigned short)18] [i_6] [(unsigned short)18] [(unsigned short)18] [i_7]);
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_33 [i_5] [i_6] [(signed char)5] [i_5] [(signed char)5] = ((/* implicit */unsigned char) (+(min((arr_20 [i_8 - 1] [i_8 + 2]), (((/* implicit */long long int) arr_10 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 + 1]))))));
                            var_23 = ((/* implicit */long long int) (-2147483647 - 1));
                            var_24 = ((int) arr_32 [i_5] [i_6] [(unsigned short)17] [(signed char)1] [i_5]);
                            var_25 = ((/* implicit */signed char) var_10);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 17; i_11 += 4) 
                        {
                            var_26 += ((/* implicit */unsigned short) (+(-4337279231007166764LL)));
                            arr_37 [i_5] [i_11] [(unsigned short)6] = ((/* implicit */unsigned int) (unsigned short)988);
                        }
                        arr_38 [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_5] [i_6] [i_5] [i_5] [i_7])) ? (min((((/* implicit */long long int) var_14)), (var_11))) : (((-4512036359470496469LL) + (((/* implicit */long long int) arr_8 [i_5] [i_6] [i_5])))))) - (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-97)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_36 [i_5] [i_5] [i_5] [i_6] [i_6])))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8905283590712807019ULL)) || (((/* implicit */_Bool) arr_22 [i_5])))))))) || ((!(((/* implicit */_Bool) arr_17 [i_5]))))));
        }
        for (long long int i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            arr_41 [i_5] [i_12] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
            var_29 = ((/* implicit */unsigned int) var_4);
            arr_42 [16ULL] = ((/* implicit */unsigned short) var_11);
        }
        for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_8))));
                var_31 = ((/* implicit */unsigned short) min((var_31), (arr_47 [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1])));
            }
            arr_48 [i_13] [i_13] [i_5] = var_12;
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                var_32 += ((/* implicit */unsigned long long int) ((short) arr_24 [(short)14] [(short)14]));
                arr_51 [i_13] [i_5] [i_5] [i_13] = (i_13 % 2 == 0) ? (((/* implicit */unsigned short) ((var_8) << (((((((/* implicit */int) arr_10 [9LL] [i_13] [i_5] [i_5])) & (((/* implicit */int) arr_14 [i_5] [i_13 + 2] [i_5] [i_15] [i_13])))) - (14)))))) : (((/* implicit */unsigned short) ((var_8) << (((((((((((/* implicit */int) arr_10 [9LL] [i_13] [i_5] [i_5])) & (((/* implicit */int) arr_14 [i_5] [i_13 + 2] [i_5] [i_15] [i_13])))) - (14))) + (33))) - (20))))));
                var_33 = ((((/* implicit */_Bool) arr_50 [i_13 + 1] [14LL])) ? (((/* implicit */int) arr_18 [i_13 - 1])) : (arr_40 [i_13 + 2]));
                arr_52 [8] [15U] [i_13] [8] = ((/* implicit */short) var_5);
            }
            for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    var_34 = ((/* implicit */int) 32767LL);
                    arr_58 [i_5] [0LL] [i_16] [i_13] = (i_13 % 2 == zero) ? (((/* implicit */unsigned short) (~((~(((((arr_36 [(unsigned short)5] [i_16] [(unsigned short)5] [i_13] [i_16]) + (9223372036854775807LL))) << (((arr_54 [i_5] [i_13] [i_13] [i_13]) - (3270876801U)))))))))) : (((/* implicit */unsigned short) (~((~(((((arr_36 [(unsigned short)5] [i_16] [(unsigned short)5] [i_13] [i_16]) + (9223372036854775807LL))) << (((((arr_54 [i_5] [i_13] [i_13] [i_13]) - (3270876801U))) - (4262201627U))))))))));
                }
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    arr_63 [i_5] [i_5] [i_13] [i_13 - 1] [i_13] [i_18] = ((/* implicit */int) arr_34 [15LL] [i_13]);
                    var_35 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (9541460482996744596ULL))));
                    arr_64 [i_13] [i_16] [(unsigned short)2] [i_13] = ((/* implicit */signed char) arr_50 [i_5] [18LL]);
                }
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    for (long long int i_20 = 2; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_13 - 1] [i_13 + 2] [i_20 + 1])) || (((/* implicit */_Bool) arr_9 [i_13 - 1] [i_13 + 2] [i_20 + 1]))))), (((int) arr_9 [i_13 - 1] [i_13 + 2] [i_20 + 1]))));
                            arr_69 [i_13] [i_16] = max((((long long int) var_3)), (var_11));
                            arr_70 [i_13] [i_20 - 2] [9LL] [i_16] [(signed char)4] [i_5] [i_13] = ((/* implicit */unsigned short) min((max((((long long int) (unsigned short)0)), (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_20] [13U] [6LL] [13U]))) : (arr_1 [i_16]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) == (var_17))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    arr_73 [i_5] [i_5] [i_5] [i_13] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [(unsigned char)14] [11ULL] [(unsigned char)14] [i_13 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_47 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [3ULL])) ? (((var_2) ^ (arr_60 [i_5] [i_5] [i_16] [i_5]))) : (arr_2 [i_5])));
                }
                for (signed char i_22 = 2; i_22 < 18; i_22 += 1) 
                {
                    var_38 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_62 [i_13 + 2] [i_13 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (-(arr_32 [0U] [i_22 + 1] [i_16] [(unsigned short)9] [i_5]))))));
                        var_40 = var_17;
                        var_41 = ((/* implicit */unsigned short) ((arr_57 [i_13 + 2] [i_13 - 1] [i_13] [i_22 + 1] [i_22 - 2]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14652)))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        arr_82 [i_13] [i_13] [i_22] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 - 1] [i_13] [i_13 + 2])) ? (arr_34 [i_5] [i_24]) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)7))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (arr_75 [(short)2] [(short)2] [(unsigned char)9]))))) : (((((/* implicit */_Bool) var_7)) ? (-4337279231007166773LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        var_42 = var_17;
                        var_43 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_57 [i_13] [i_13 - 1] [i_5] [i_22 - 1] [i_22]) : (8755312949512457681LL))));
                    }
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [0ULL])) ? (((/* implicit */long long int) arr_53 [i_5] [i_13 + 1] [i_13 + 1] [i_13])) : (((long long int) max((var_8), (((/* implicit */long long int) var_15)))))));
                }
                arr_83 [i_5] [i_13] = ((/* implicit */unsigned short) arr_31 [i_5] [12LL] [i_16]);
            }
        }
        var_45 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [5U])) & (((/* implicit */int) arr_30 [i_5] [i_5] [15] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [14ULL]))) >= (arr_36 [i_5] [i_5] [0LL] [i_5] [i_5])))) : ((+(((/* implicit */int) arr_74 [i_5]))))));
        /* LoopSeq 2 */
        for (unsigned short i_25 = 1; i_25 < 18; i_25 += 3) 
        {
            arr_86 [0LL] = arr_78 [i_25] [i_5] [i_5] [i_5] [i_5] [i_5] [(short)17];
            arr_87 [14U] [14U] [(unsigned short)4] = ((/* implicit */int) var_15);
            arr_88 [i_25] [i_5] [i_5] = ((/* implicit */signed char) (((+(((/* implicit */int) var_1)))) & (((/* implicit */int) var_12))));
        }
        for (unsigned long long int i_26 = 4; i_26 < 19; i_26 += 4) 
        {
            var_46 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8755312949512457672LL)))))) % (((((/* implicit */_Bool) arr_75 [i_26 - 2] [i_5] [i_26 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_5] [i_5] [i_5] [i_26 - 4]))) : ((+(arr_77 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
            var_47 = ((/* implicit */int) var_4);
            arr_92 [i_5] = ((/* implicit */unsigned long long int) ((short) ((short) arr_0 [i_26 - 1])));
        }
    }
}
