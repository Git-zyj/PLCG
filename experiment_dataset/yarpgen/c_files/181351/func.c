/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181351
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(max((var_13), (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17537203791021005369ULL)) ? (16140901064495857664ULL) : (17537203791021005369ULL)))) ? (((int) var_0)) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) ((short) (-(((/* implicit */int) arr_3 [i_2] [i_0]))))));
                    arr_8 [(short)16] [(signed char)11] = ((/* implicit */unsigned long long int) ((short) (~(arr_4 [i_0 - 3]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_2] [(unsigned short)16])), (arr_1 [(signed char)9])))) ? (arr_11 [i_4 + 2] [i_1] [i_4 + 2] [i_3] [(unsigned short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
                                var_20 = ((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_12 [(short)16] [i_4 + 1] [(short)14] [i_4 + 2] [i_4])));
                                var_21 ^= ((/* implicit */signed char) arr_3 [i_0] [(short)15]);
                                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_23 = ((int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_5]))) ? (((/* implicit */unsigned long long int) var_12)) : (max((var_4), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_5]))))));
        var_24 = ((/* implicit */signed char) max((-1842654652), (((/* implicit */int) (signed char)108))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */int) (-(arr_18 [i_5] [i_6 + 2])));
                var_26 = arr_6 [i_5] [i_5];
            }
            for (signed char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
            {
                var_27 = (+(-1842654652));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_6 - 1] [i_6 + 2] [i_8]))));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) arr_21 [i_10] [i_5] [i_6 - 2] [i_5]));
                            arr_30 [i_6] [i_6] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_6 + 2]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [(short)4] [i_6 - 2] [i_8])) ? (((/* implicit */int) arr_9 [i_5] [(unsigned short)11] [i_6 - 1] [i_5])) : (arr_20 [i_5] [i_6] [i_6 - 1])));
            }
            for (signed char i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (signed char i_13 = 4; i_13 < 9; i_13 += 1) 
                    {
                        {
                            arr_40 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_6 - 1] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_13] [i_6 - 1] [i_5]))));
                            var_31 = ((/* implicit */unsigned short) var_13);
                            var_32 = ((((/* implicit */_Bool) arr_26 [i_11 - 2] [i_13] [(signed char)3] [i_6 - 1] [i_6 - 1] [i_11 + 1])) ? (((/* implicit */int) arr_26 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_6 - 1] [i_11 + 2] [i_5])) : (((/* implicit */int) arr_26 [i_11 + 1] [i_6] [i_11 + 1] [i_6 - 1] [i_13 + 3] [i_12])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) arr_39 [i_5] [i_6] [(short)3] [i_14 - 1] [(short)3]);
                            arr_46 [i_6] [(signed char)8] [i_5] [4] [i_6] = ((/* implicit */int) arr_18 [i_15] [2ULL]);
                        }
                    } 
                } 
                arr_47 [i_6] [10ULL] = ((/* implicit */unsigned long long int) arr_28 [i_5] [(unsigned short)7] [i_11] [i_5] [i_5]);
                arr_48 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_11 + 2] [i_11 - 2])) ? (((/* implicit */int) arr_37 [i_11] [i_11] [i_11 + 2] [i_11 - 2])) : (((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11 - 2]))));
                arr_49 [i_6] [i_6] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 127)) ? (-1842654654) : (1842654651)));
            }
            var_34 = ((/* implicit */unsigned long long int) arr_0 [i_5]);
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_24 [i_5] [i_16] [i_5])))) ? ((-(((/* implicit */int) var_9)))) : (max((0), (((/* implicit */int) (signed char)-71))))));
            arr_52 [i_5] = var_17;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    {
                        var_36 = (+(((/* implicit */int) var_9)));
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            arr_61 [(signed char)11] [i_18] [i_17] [4ULL] [0] = ((/* implicit */int) ((unsigned short) arr_21 [i_5] [i_5] [i_5] [i_5]));
                            arr_62 [i_5] [i_16] [1] [i_18] [i_18] [i_5] [i_17] = ((/* implicit */unsigned short) arr_2 [i_5] [i_16] [i_17]);
                            var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)17603)), (1842654654)));
                            arr_63 [i_5] [i_5] [i_5] [3] [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_16] [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_34 [i_19] [i_17] [i_16]), (arr_34 [i_19] [i_16] [i_5]))))) : (min((((/* implicit */unsigned long long int) (unsigned short)42514)), (8ULL)))));
                            arr_64 [(signed char)4] [(signed char)4] [i_17] [(signed char)4] [(signed char)4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1842654657)) ? (0) : (((/* implicit */int) (signed char)-63))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            var_38 *= ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-1)), ((short)1708)));
                            arr_69 [i_5] [i_5] [(short)8] [i_18] [i_20] = ((/* implicit */signed char) ((unsigned short) (signed char)48));
                            arr_70 [i_17] = ((/* implicit */signed char) var_3);
                        }
                        for (signed char i_21 = 1; i_21 < 10; i_21 += 2) 
                        {
                            arr_73 [i_5] [i_16] [8ULL] [i_16] [i_21] [i_16] [10ULL] = (+((+(((/* implicit */int) arr_27 [i_16])))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_57 [i_21] [i_18] [i_16] [i_5]))));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
    {
        var_40 = ((/* implicit */unsigned short) arr_10 [i_22] [i_22] [i_22] [i_22] [i_22]);
        var_41 = ((/* implicit */int) var_16);
    }
    for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) 
    {
        var_42 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_78 [i_23] [i_23])), (arr_77 [i_23]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_76 [i_23] [i_23])))));
        arr_79 [i_23] = ((((/* implicit */_Bool) min((arr_77 [i_23]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_23] [i_23])) ? (((/* implicit */int) arr_76 [i_23] [i_23])) : (((/* implicit */int) arr_76 [i_23] [i_23])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_76 [i_23] [i_23])))) : (((((/* implicit */_Bool) ((unsigned long long int) -1842654674))) ? ((+(arr_77 [i_23]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_23] [i_23])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_78 [i_23] [i_23]))))))));
        arr_80 [i_23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_23] [i_23])) ? (((/* implicit */int) arr_76 [i_23] [i_23])) : (((/* implicit */int) arr_76 [i_23] [i_23]))))) ? (min((((/* implicit */int) arr_76 [i_23] [i_23])), ((-(((/* implicit */int) arr_76 [(signed char)3] [(signed char)3])))))) : ((-(((/* implicit */int) arr_78 [i_23] [i_23])))));
    }
}
