/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132254
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
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_18))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27958)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) var_5)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (2437612646634656799ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (_Bool)0)))))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((unsigned char) max((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_1] [i_2] [i_1]))));
            arr_9 [i_1] [i_1] |= ((/* implicit */short) (~(((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_13 [i_1] [i_1] |= ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_3])))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) arr_4 [i_1] [i_1]);
                            arr_21 [i_1] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_4] [i_5])) ? ((+(arr_1 [i_4] [i_3]))) : (((((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)5] [i_5] [i_6])) ? (((/* implicit */unsigned int) 8)) : (var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [4U])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_20 [i_1] [i_1] [i_3] [i_4] [i_4] [i_5] [i_6]) : (((/* implicit */long long int) var_4))))) : (max((14854600684900482153ULL), (((/* implicit */unsigned long long int) 0LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))) : (min((arr_14 [i_1] [i_1] [i_1] [i_7]), (((/* implicit */long long int) arr_5 [i_1] [i_7] [i_1]))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_8] [i_1]);
                /* LoopSeq 2 */
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    var_26 &= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)234))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_7] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_19 [i_1] [(_Bool)1] [i_7] [1ULL] [i_8] [i_9])))) ? (((((/* implicit */_Bool) 2559541878U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_19)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 3769044894U)) ? (((unsigned int) max((-1LL), (((/* implicit */long long int) var_14))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_35 [0U] [i_7] [i_7] [i_9 + 3] [i_7] [i_9 + 3])))))))));
                        arr_36 [i_8] [i_8] [i_7] [i_1] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2262632271U)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) (unsigned char)169)), (arr_19 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    var_28 ^= (+(max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (2726828965U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 4) 
                {
                    arr_41 [i_7] [i_8] [i_11] [i_8] [5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_8] [i_11 - 2] [9ULL] [i_11])) ? (max((((/* implicit */long long int) (unsigned char)68)), (10LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) -9)) : (arr_17 [2ULL] [i_11 - 2] [4] [i_11 - 2] [i_11 - 2] [(_Bool)1]))))));
                    var_29 = max((((/* implicit */long long int) ((arr_14 [i_1] [i_11 + 1] [i_11 - 2] [i_11 + 1]) < (arr_14 [i_11] [i_11 + 2] [10] [i_8])))), (((arr_20 [(signed char)5] [i_11 + 3] [i_11 + 3] [i_11] [i_11] [i_11] [10ULL]) / (arr_20 [(_Bool)1] [i_11 - 1] [6] [(_Bool)1] [i_11 + 4] [i_11 - 1] [(_Bool)1]))));
                    var_30 = (+(max(((+(5260555968544727810ULL))), (((/* implicit */unsigned long long int) max((arr_37 [i_1] [i_7] [i_8] [i_1]), (((/* implicit */unsigned int) var_8))))))));
                    arr_42 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) arr_31 [i_1] [i_7]);
                }
            }
        }
        var_31 *= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))) ? (1366565909U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 1) 
    {
        arr_45 [i_12] [(unsigned short)4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_0)), ((~(arr_1 [i_12] [i_12])))));
        arr_46 [i_12] = ((/* implicit */_Bool) min((((/* implicit */short) (!((!((_Bool)0)))))), (max((arr_44 [i_12 + 3] [i_12 - 1]), (((/* implicit */short) arr_0 [i_12]))))));
        var_32 -= (~((((!(var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12] [i_12 - 1]))) : (arr_1 [10LL] [12U]))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_44 [i_12] [i_12 - 1])))) ? (((/* implicit */int) ((_Bool) -16))) : (((/* implicit */int) ((((/* implicit */int) (short)-4)) <= (((/* implicit */int) arr_0 [i_12])))))))) ? (min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) -836982122)) ? (arr_1 [i_12] [(short)4]) : (((/* implicit */unsigned int) 722897085)))))) : ((~(var_1)))));
    }
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        arr_49 [i_13] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((arr_47 [1] [i_13]) ? (((/* implicit */int) arr_47 [3LL] [i_13])) : (((/* implicit */int) arr_47 [i_13] [(_Bool)1]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13] [i_13]))) : (7363242792278504728LL)))));
        arr_50 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_3)), (arr_48 [i_13])))) ^ (((arr_47 [i_13] [(unsigned char)8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11275))))));
        arr_51 [i_13] = (~(((((/* implicit */_Bool) arr_48 [i_13])) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [2ULL] [i_13]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((/* implicit */short) arr_47 [i_13] [18LL]);
                var_35 ^= ((/* implicit */_Bool) (~(arr_56 [i_13] [i_14 - 1] [(unsigned char)10] [i_14])));
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        {
                            arr_61 [i_15] [i_15] [i_15] [i_15] [i_14] [6U] = ((/* implicit */_Bool) var_2);
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_13])) ? (((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)4410)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4411))) < (5696483000093385625ULL))))));
                            var_37 += ((/* implicit */_Bool) ((unsigned long long int) arr_53 [i_16 - 1] [i_14 + 2]));
                            arr_62 [i_16] [i_14 - 1] [i_15] [i_14 - 1] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_53 [i_13] [i_13])))) ? (arr_60 [i_13] [i_17] [i_15] [i_16 - 1] [i_14 + 1] [i_16 - 2] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_63 [i_13] [i_13] [(unsigned char)7] [i_16] [(unsigned char)7] [(unsigned char)7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(37111556)))) ? (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_13] [11U] [9LL] [i_16] [i_17]))))) : (((/* implicit */unsigned int) 1139742577))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_13] [i_14 + 2] [i_15])) ? (((/* implicit */int) arr_47 [(_Bool)1] [i_14])) : (((/* implicit */int) arr_47 [i_13] [i_15]))));
            }
            arr_64 [i_14 + 2] = ((/* implicit */unsigned long long int) ((arr_53 [i_14 + 1] [i_14 - 1]) ^ (arr_56 [i_14 + 2] [i_14 + 1] [i_14 + 2] [i_14 + 2])));
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_14 + 1] [i_14] [i_14])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [0LL] [i_13] [i_14] [0LL] [i_14]))) : (var_10))) : (((/* implicit */unsigned long long int) arr_57 [i_13] [i_13] [i_14 + 1]))));
        }
        for (int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            var_40 = max((((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_7)), (565187683U))), (min((((/* implicit */unsigned int) var_0)), (var_1)))))), (arr_57 [i_13] [i_18] [i_13]));
            var_41 = ((/* implicit */unsigned short) ((((var_13) && (((/* implicit */_Bool) arr_60 [i_13] [i_18] [i_13] [(short)0] [i_18] [i_13] [i_13])))) ? (min((max((((/* implicit */unsigned int) var_14)), (arr_58 [i_13] [i_13] [(_Bool)1] [(_Bool)0] [i_13]))), (((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned short) (unsigned char)229))))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), ((+(var_4)))))));
            arr_67 [0U] [0U] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (~(arr_58 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
        }
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        arr_70 [i_19] [i_19] = ((/* implicit */signed char) (+(arr_65 [i_19] [i_19] [i_19])));
        var_42 = ((/* implicit */unsigned short) var_14);
    }
    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2))))) ? (min((((/* implicit */unsigned int) min((var_0), (var_7)))), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
}
