/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168909
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
    var_14 = ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                        arr_12 [4LL] [4LL] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_2]) : (arr_1 [i_0]))) << (((((unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))) - (1ULL)))));
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = var_10;
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_3] [i_2] [i_1] [i_0]))))) : (((((/* implicit */int) arr_10 [i_3] [i_5])) * (((/* implicit */int) var_1)))));
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] [(signed char)10] = ((/* implicit */long long int) var_11);
                    }
                    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_8 [i_0] [i_3]));
                }
                var_18 |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_19 += ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_1)))));
                        arr_25 [(_Bool)1] [i_7] = ((/* implicit */long long int) var_9);
                        arr_26 [i_0] [(signed char)18] [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) arr_10 [5] [i_7]);
                    }
                    var_20 *= ((/* implicit */signed char) ((long long int) ((arr_8 [i_6 - 1] [i_6 + 2]) < (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6 + 3] [i_6 + 1] [i_6] [i_6] [i_6])))));
                }
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_9]);
                            arr_32 [i_0] [i_1] [i_1] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_2] [i_0]))))) ? (((/* implicit */int) arr_27 [i_9] [i_1] [i_2] [i_1] [i_0] [i_0])) : ((~(((((/* implicit */_Bool) arr_0 [i_8] [16LL])) ? (arr_6 [9ULL] [i_8]) : (arr_19 [i_0] [i_1] [i_2] [i_8] [i_1] [i_8])))))));
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_9 [i_8] [i_9])))) && (((/* implicit */_Bool) ((signed char) var_0)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                {
                    arr_37 [i_0] [14] [i_1] [i_10] [i_11] = ((/* implicit */unsigned char) (+(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_38 [i_11] [i_10] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13)))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((int) arr_8 [i_10] [15LL])))));
                }
                for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_27 [(signed char)17] [i_1] [i_1] [(signed char)17] [i_1] [i_1]))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_10])))))));
                    arr_42 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_4)) != (var_10))));
                    var_26 = ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0])) : (var_10)));
                }
                var_27 ^= ((/* implicit */signed char) ((unsigned char) arr_9 [i_0] [i_0]));
                var_28 = ((/* implicit */signed char) ((((int) var_8)) >> (((((/* implicit */int) var_4)) + (76)))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_9)) ? (arr_33 [i_10] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                arr_43 [i_0] [i_0] [i_0] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
            }
            for (signed char i_13 = 3; i_13 < 18; i_13 += 4) 
            {
                arr_48 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_44 [i_13 - 2] [i_13 - 2] [i_13 + 1]))));
                var_31 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_40 [i_13] [i_13 - 2] [i_13 - 3] [i_13])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */long long int) arr_47 [i_0] [i_1] [i_1] [i_1])) < (var_13)))))));
            }
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                arr_51 [i_0] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_0]))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) var_4)))));
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_44 [i_0] [i_14] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (var_13) : (arr_44 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_14]))))))));
                arr_52 [i_0] [i_1] [i_14] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1] [i_0] [i_14])))) / (((/* implicit */int) arr_10 [i_0] [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((unsigned long long int) arr_31 [i_0])))));
                    var_34 = (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_14])));
                    arr_56 [i_1] [i_1] [i_14] [i_15] |= ((/* implicit */signed char) ((int) var_3));
                }
            }
            for (int i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((unsigned char) ((signed char) arr_4 [i_0]))))));
                arr_60 [i_16] = ((/* implicit */long long int) arr_36 [i_16] [i_1] [i_1] [10LL] [i_0] [i_0]);
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (var_3) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1]))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_16] [i_0]))));
            }
            for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) var_2))))))) ? (((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_1]))))))));
                            arr_68 [i_0] [i_0] [i_1] [i_17] [i_18] [i_18] [i_0] = ((/* implicit */signed char) ((var_8) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_39 [i_19] [4LL] [i_1] [i_0])))) | ((+(arr_47 [i_19] [i_18] [i_17] [i_0])))))) : (((unsigned long long int) ((var_8) ? (arr_53 [i_17] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            arr_69 [i_0] [i_1] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) arr_67 [i_0] [i_1] [i_17] [i_0] [i_18] [i_1] [i_18]);
                        }
                    } 
                } 
                var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_0] [i_1] [i_17 + 1] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_45 [5] [i_1] [i_0])) ? (arr_35 [5LL] [5LL] [i_1] [i_1]) : (((/* implicit */int) var_6)))) : (arr_30 [(unsigned char)4] [i_1] [i_1] [(unsigned char)4] [(unsigned char)4]))))));
            }
            var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_47 [i_0] [i_0] [i_1] [i_1])))) ? (arr_65 [i_0] [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((arr_44 [i_1] [i_1] [(signed char)5]) + (4836801705037346883LL))) - (21LL)))))) : (((((/* implicit */long long int) var_10)) - (((long long int) arr_14 [i_0])))));
            /* LoopSeq 2 */
            for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                var_40 = ((/* implicit */signed char) var_13);
                var_41 = ((/* implicit */long long int) arr_8 [i_0] [i_20]);
                var_42 += ((/* implicit */int) (!(((/* implicit */_Bool) (((~(arr_33 [i_20] [(signed char)4] [i_0]))) / (((/* implicit */unsigned long long int) var_7)))))));
                var_43 = ((/* implicit */unsigned char) arr_49 [i_0] [i_1] [i_20] [i_20]);
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    for (long long int i_22 = 0; i_22 < 19; i_22 += 3) 
                    {
                        {
                            var_44 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_13)) < (((arr_36 [i_0] [i_1] [(signed char)8] [i_21] [(signed char)8] [i_1]) ? (arr_77 [i_0] [i_1] [i_1] [i_21] [i_21] [i_22]) : (((/* implicit */unsigned long long int) arr_47 [i_0] [i_1] [i_0] [i_22]))))));
                            arr_79 [i_22] [2LL] [i_20] [i_21] = ((/* implicit */int) (!(((arr_34 [i_0] [i_1] [i_20]) != (arr_34 [i_0] [i_0] [i_0])))));
                            arr_80 [i_22] [i_22] [i_21] [i_22] = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_31 [i_21]))));
                            arr_81 [i_0] [i_1] [i_1] [i_20] [i_20] [i_22] [i_1] = ((/* implicit */long long int) ((((arr_78 [i_0] [i_0] [i_20] [i_20] [i_21] [i_22]) != (arr_59 [i_0]))) ? (((((/* implicit */_Bool) arr_59 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_78 [i_0] [i_1] [i_20] [i_21] [i_22] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_30 [i_23] [i_1] [i_1] [i_0] [i_0]) / (arr_30 [i_0] [i_0] [i_1] [13] [i_23])))) ? (((((/* implicit */int) var_9)) >> (((var_13) + (5624949915592826211LL))))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [18LL] [i_23]))));
                arr_84 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                arr_85 [i_23] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_23])))) || (((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_23]))))));
            }
        }
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
        {
            var_46 = ((/* implicit */signed char) ((unsigned long long int) arr_61 [i_0] [i_0] [i_0] [i_24 - 1]));
            arr_88 [i_0] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((_Bool) ((int) arr_58 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1])));
        }
        /* LoopSeq 1 */
        for (signed char i_25 = 0; i_25 < 19; i_25 += 2) 
        {
            arr_92 [i_0] [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) && (((/* implicit */_Bool) ((signed char) var_0)))));
            var_47 = ((/* implicit */signed char) arr_57 [i_0] [i_0] [i_0]);
        }
    }
    var_48 += ((/* implicit */unsigned long long int) var_7);
}
