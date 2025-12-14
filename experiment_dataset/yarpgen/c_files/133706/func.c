/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133706
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)2))) % (47218297742257366LL))))))));
                        arr_10 [(signed char)7] [12LL] [13] = ((/* implicit */int) (+(arr_4 [i_2 - 2])));
                        var_15 += ((/* implicit */long long int) (-(((var_5) * (((/* implicit */int) (unsigned short)0))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((arr_1 [i_1]) == (arr_1 [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((signed char) var_0))));
                    arr_16 [i_4] [(unsigned char)8] [12U] [(unsigned short)13] = ((/* implicit */short) ((_Bool) arr_1 [i_4 + 1]));
                    var_18 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) arr_14 [(short)4] [(short)4])) * (arr_4 [(short)9])))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */long long int) 1722657125)) <= (47218297742257338LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */int) ((arr_17 [12ULL] [i_4] [(signed char)15] [5U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19374)))));
                            var_21 += ((/* implicit */unsigned long long int) (+(arr_18 [i_4 + 1] [14ULL] [10ULL] [i_4 - 1])));
                        }
                    }
                    for (short i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (unsigned short)45049);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))));
                    }
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        arr_28 [(unsigned char)15] = ((/* implicit */signed char) var_8);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [5ULL] [i_10] [i_10] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [(_Bool)1] [(unsigned char)2] [i_9])) ? (((/* implicit */int) arr_31 [(signed char)1] [17] [10] [(unsigned char)19])) : (((/* implicit */int) arr_31 [(short)4] [(unsigned short)0] [(signed char)5] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_39 [(signed char)1] [6ULL] [0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 1004858255624480111LL)), (((unsigned long long int) ((arr_36 [0ULL] [(unsigned short)6] [19]) != (arr_36 [(short)15] [(signed char)20] [(_Bool)1]))))));
                            arr_40 [(short)2] [17] [(signed char)1] [(signed char)9] [(signed char)7] [3] = ((/* implicit */unsigned int) var_9);
                            arr_41 [1U] = ((/* implicit */int) arr_29 [(_Bool)1]);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_14 = 3; i_14 < 18; i_14 += 2) 
            {
                for (long long int i_15 = 3; i_15 < 17; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) arr_48 [8ULL] [i_16] [i_15 + 1] [(short)10] [i_15 + 3] [20] [2])) << (((((-47218297742257366LL) + (47218297742257392LL))) - (15LL))))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((var_0) / (((/* implicit */unsigned long long int) var_1)))) / (arr_34 [15] [i_14 + 1] [19ULL] [i_16]))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((((arr_37 [(signed char)10] [1] [(unsigned char)16] [(signed char)18] [12LL] [0ULL]) / (arr_45 [11ULL] [10] [1LL] [18ULL] [17U]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [19ULL] [(_Bool)1] [8ULL])) ? (arr_27 [(signed char)16] [2ULL]) : (arr_30 [(unsigned short)3] [(unsigned short)9] [19])))))))))));
            var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((1703736343U), (((/* implicit */unsigned int) arr_48 [12LL] [i_10] [8] [(signed char)8] [(signed char)12] [(_Bool)1] [(unsigned short)14]))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_12))))));
        }
    }
    for (long long int i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                {
                    arr_59 [(unsigned char)2] [i_17] [11ULL] [14] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) arr_47 [17U] [(signed char)11] [i_17] [6ULL] [(unsigned short)18] [(unsigned char)0] [i_17])))) + ((+(((/* implicit */int) min(((short)-19375), (var_9))))))));
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 17; i_20 += 1) 
                    {
                        for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(var_10))))));
                                arr_64 [(_Bool)1] [i_17] [10] [(_Bool)1] [16LL] [i_17] [6ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1004858255624480111LL)) && (((/* implicit */_Bool) -472520404)))))) + (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) arr_54 [(unsigned short)14]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 3; i_22 < 18; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 18; i_23 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) var_8);
                                arr_71 [i_23] [(short)6] [2U] [(_Bool)0] [(signed char)4] [i_23] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) ((4150737675797043076ULL) / (((/* implicit */unsigned long long int) -47218297742257367LL))));
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (long long int i_25 = 1; i_25 < 18; i_25 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 19; i_27 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */short) arr_63 [(unsigned char)11] [(unsigned char)2] [(short)5] [i_17] [4LL] [(_Bool)1]);
                                arr_81 [i_17] [(_Bool)1] [(unsigned short)16] [i_17] = ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)19374)))))));
                                var_33 = ((/* implicit */long long int) arr_29 [17LL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_28 = 2; i_28 < 16; i_28 += 1) 
                    {
                        for (long long int i_29 = 0; i_29 < 19; i_29 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_53 [3] [3ULL]))));
                                arr_87 [i_17] [(unsigned short)5] [(short)16] = ((/* implicit */unsigned long long int) ((int) ((472520417) != (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */int) arr_82 [11U] [(signed char)9] [4LL] [1LL])))))));
                            }
                        } 
                    } 
                    arr_88 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_25 + 1] [i_17] [i_25 - 1] [(short)11] [(_Bool)1] [(unsigned char)17] [i_25 - 1])) ? (((/* implicit */int) min((arr_67 [i_17] [i_25 - 1] [i_25 - 1]), (arr_67 [i_17] [i_25 - 1] [i_25 - 1])))) : (((((/* implicit */int) arr_48 [i_25 + 1] [i_17] [i_25 - 1] [(signed char)13] [1LL] [(short)13] [i_25 - 1])) / (((/* implicit */int) arr_48 [i_25 + 1] [i_17] [i_25 - 1] [20LL] [(signed char)16] [(_Bool)1] [i_25 - 1]))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
}
