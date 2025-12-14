/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134470
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (~(var_14)));
            arr_6 [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) (short)0)))))));
            arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1]))) ? ((+(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 1])))))));
            var_21 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 1]))) < ((+(arr_1 [i_0])))));
            var_22 = ((/* implicit */int) ((unsigned long long int) ((arr_2 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_2 - 1]))))));
            /* LoopNest 3 */
            for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_22 [(signed char)20] [i_2 + 2] [i_2 + 2] [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-22)) + (2147483647))) >> (((arr_1 [i_3]) + (2353795443875572236LL)))))) : (arr_9 [i_2 + 1] [(short)8])));
                            arr_23 [(signed char)7] [i_2] [i_4] [i_2] [i_5] [i_3 + 2] [(short)12] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_3 - 1] [i_4] [i_5]))) : (arr_2 [i_2])))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    {
                        arr_32 [6ULL] [i_6] [i_0] [i_6] [i_6] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-37))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_23 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) >> (((((/* implicit */int) (signed char)102)) / (arr_13 [i_9] [i_8] [i_7] [17LL])))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_9 [i_8] [i_7]))))));
                        }
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [12] [i_8] [i_8 - 1] [12] [i_8])) && (((/* implicit */_Bool) var_8)))))));
                        arr_35 [i_8] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (signed char)46)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 3; i_12 < 19; i_12 += 4) 
                    {
                        {
                            arr_45 [i_11] [i_11] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)48)) ? (((((/* implicit */_Bool) (short)3584)) ? (arr_10 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_11] [i_11] [i_10] [i_6] [i_6] [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0])))))));
                            arr_46 [i_11] [i_11] [i_6] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_12] [i_11] [i_10] [i_0] [i_6] [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            for (unsigned short i_14 = 4; i_14 < 19; i_14 += 2) 
            {
                {
                    arr_52 [i_0] [i_13] [i_13] [i_14 - 2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_26 = ((/* implicit */unsigned short) ((unsigned char) arr_44 [i_14 - 3] [i_14 + 2] [i_14 - 3] [i_14 + 2] [i_14 - 4]));
                    arr_53 [6ULL] [i_13] [i_14] [i_14 - 2] = ((/* implicit */short) ((arr_13 [i_14 + 2] [i_14 - 2] [i_14 + 2] [i_14 + 2]) + (((arr_13 [i_0] [i_13] [i_14] [i_14]) / (((/* implicit */int) var_12))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 20; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 18; i_18 += 4) 
                        {
                            var_27 -= ((/* implicit */short) ((unsigned long long int) (signed char)127));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (signed char)58)) + (((/* implicit */int) ((short) arr_62 [i_0] [i_15] [1LL] [i_17] [i_18]))))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned long long int) arr_48 [i_16 + 1])))));
                        }
                        var_30 -= (+((-(((/* implicit */int) (unsigned char)252)))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_56 [i_0]) / (((/* implicit */int) var_18)))))));
            /* LoopSeq 1 */
            for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                var_32 = (~(((((/* implicit */unsigned long long int) arr_42 [i_0])) / (arr_26 [i_0] [(signed char)15]))));
                arr_66 [i_0] [i_0] = ((/* implicit */signed char) arr_64 [i_0] [i_0] [i_19]);
                arr_67 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) << (((((/* implicit */int) arr_38 [i_0] [i_15] [i_19])) - (225)))));
                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_20 [20ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_15])))));
                /* LoopSeq 3 */
                for (unsigned short i_20 = 3; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    arr_70 [i_0] [17ULL] [i_15] [i_19] [i_0] [i_20] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_20 - 2] [i_20 - 2])) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (signed char)43))))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_20 - 1] [i_20 - 2] [i_20 - 3] [i_20 - 1])))))));
                    arr_71 [(signed char)10] [i_19] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_39 [i_0] [i_15] [i_15] [i_0]));
                }
                for (unsigned short i_21 = 3; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    arr_76 [i_21 - 3] [i_21] [i_21] [i_21 - 1] = ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_4 [i_15] [(signed char)18]))))) / (var_17));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        arr_80 [18] [i_15] [i_19] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [11LL] [i_15] [i_21])) ? (((/* implicit */int) (short)-13798)) : (((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_15])) ? (arr_57 [i_0] [i_15] [i_0] [i_21]) : (arr_65 [i_0] [i_22]))))));
                        arr_81 [(_Bool)1] = ((/* implicit */signed char) ((long long int) (short)-3585));
                        arr_82 [i_0] [17LL] [i_19] [i_21 - 2] [i_19] [i_19] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_79 [i_0] [i_15] [i_19] [i_19] [i_21] [i_22]) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) arr_63 [i_0] [4ULL] [i_21 - 1] [(unsigned short)12]))))) ? (((((/* implicit */_Bool) arr_56 [i_0])) ? (arr_73 [i_0] [i_15] [i_0] [i_21 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [(unsigned short)20] [i_22]))))) : (((/* implicit */long long int) ((arr_28 [i_0] [i_19] [i_19] [i_19]) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) arr_30 [i_15] [i_19] [i_21])))))));
                        arr_83 [i_0] [i_15] [i_19] [i_21] [i_22] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_58 [i_0] [i_21] [12LL] [i_21]))));
                    }
                    for (unsigned short i_23 = 1; i_23 < 18; i_23 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) (signed char)-50);
                        arr_87 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_62 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_15] [i_19] [i_23])) < (((/* implicit */int) arr_74 [i_0] [i_15] [i_19] [i_21 - 2] [i_15]))))) : (((((/* implicit */_Bool) arr_47 [(unsigned short)18])) ? (((/* implicit */int) var_10)) : (arr_41 [20] [6ULL] [i_21 - 2] [i_23 + 2])))));
                        arr_88 [i_0] [i_0] [i_0] [i_23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_23 + 2] [i_23 + 2] [i_23 + 3] [i_21 + 1]))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_91 [i_24] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)105))) * ((-(((/* implicit */int) var_18))))));
                        arr_92 [i_24] [(unsigned short)16] [i_19] [10LL] [i_24] = ((/* implicit */unsigned long long int) arr_24 [(signed char)9] [i_15]);
                        var_37 = ((/* implicit */long long int) max((var_37), (var_9)));
                        var_38 = ((/* implicit */unsigned long long int) arr_84 [i_0] [i_0] [i_19] [i_21] [i_21] [(_Bool)1]);
                    }
                }
                for (unsigned short i_25 = 3; i_25 < 20; i_25 += 2) /* same iter space */
                {
                    arr_96 [i_0] [i_0] [(signed char)7] [i_0] [i_0] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_72 [i_0] [(_Bool)1]))))) ? (((var_5) + (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_25 - 1] [(unsigned short)15] [i_25 - 2] [i_25] [i_25 + 1])))));
                    var_39 ^= ((((/* implicit */_Bool) arr_48 [i_25 + 1])) ? (((/* implicit */int) arr_48 [i_25 - 1])) : (((/* implicit */int) arr_48 [i_25 - 1])));
                }
            }
            arr_97 [(short)15] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_85 [i_0] [i_0] [i_0] [(unsigned short)3] [i_15] [i_0] [i_15]))));
            arr_98 [i_0] = ((/* implicit */unsigned short) (-(arr_39 [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_26 = 0; i_26 < 21; i_26 += 3) 
        {
            var_40 = ((/* implicit */signed char) ((int) (unsigned char)6));
            arr_101 [i_0] = var_6;
            /* LoopNest 3 */
            for (unsigned short i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                for (signed char i_28 = 0; i_28 < 21; i_28 += 2) 
                {
                    for (signed char i_29 = 1; i_29 < 19; i_29 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) arr_10 [i_26] [i_26]))));
                            arr_111 [i_27] = (~(arr_51 [i_26] [i_28]));
                        }
                    } 
                } 
            } 
        }
    }
    var_42 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
