/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116958
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((arr_0 [i_0]), (((unsigned long long int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */short) min((((long long int) var_1)), ((~((-(var_13)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_18 = ((/* implicit */short) ((unsigned int) arr_5 [i_1]));
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) arr_12 [i_1] [(signed char)8] [(_Bool)1] [(unsigned char)3] [i_5] [8]);
                            var_20 &= ((/* implicit */unsigned char) ((long long int) arr_9 [i_1 + 2] [i_3 - 1] [i_3]));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */_Bool) (~(arr_14 [i_1 - 2] [i_1 - 3] [9] [9] [(unsigned char)18])));
                arr_18 [i_1] = ((/* implicit */unsigned char) ((arr_5 [i_1]) % (arr_5 [i_1])));
                arr_19 [17ULL] [i_1] [(short)7] = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((arr_9 [12LL] [(signed char)6] [12LL]) / (((/* implicit */unsigned long long int) var_5)))) >> (((arr_6 [i_1] [i_1]) + (6225426773161410291LL)))))) : (((/* implicit */long long int) ((((arr_9 [12LL] [(signed char)6] [12LL]) / (((/* implicit */unsigned long long int) var_5)))) >> (((((arr_6 [i_1] [i_1]) + (6225426773161410291LL))) + (306432275282989970LL))))));
            }
            for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                arr_22 [12U] [12U] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [(short)4] [i_1] [(signed char)19] [i_1 - 3] [i_1 + 1] [8ULL])) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_1] [i_1] [4U] [i_1 - 1] [i_1 - 2] [(signed char)20])) + (2931))) - (4)))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_22 = ((arr_5 [i_1]) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (27648577U))));
                            var_23 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))));
                            var_24 = ((/* implicit */short) arr_4 [i_1]);
                        }
                    } 
                } 
            }
            arr_28 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [2ULL] [i_1]))));
            var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_2] [0LL] [14LL]))));
        }
        arr_29 [i_1] = ((/* implicit */unsigned int) 2147483625);
        var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (arr_9 [1LL] [1LL] [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        /* LoopSeq 3 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            arr_33 [i_1] [i_9] = ((signed char) arr_9 [i_1 - 1] [i_1 + 1] [(signed char)8]);
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    {
                        arr_39 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 2] [(unsigned char)9])) : (((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 2] [5LL]))));
                        arr_40 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
                        arr_41 [(short)11] [21U] [(unsigned char)12] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) arr_17 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 1]));
                        arr_42 [0ULL] [i_1] [0ULL] = ((/* implicit */short) ((arr_34 [i_10] [i_9] [(_Bool)1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_36 [10] [6U])))));
                        arr_43 [i_1] [i_1] = (-(arr_6 [i_1] [i_1]));
                    }
                } 
            } 
            var_27 ^= ((/* implicit */unsigned char) ((_Bool) var_11));
        }
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 4; i_13 < 20; i_13 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    arr_52 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
                    arr_53 [1ULL] [i_1] [(signed char)5] [i_14] = ((long long int) var_13);
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 19; i_16 += 2) 
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_1] [(short)12] [i_15 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_20 [i_1] [11LL] [i_13])))));
                        arr_60 [(unsigned char)14] [i_1] [i_1] [i_1] [i_15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_13 - 3] [i_13 + 2] [i_1] [i_13 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_15 + 1])) : (((/* implicit */int) var_11))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (arr_25 [i_13] [(signed char)17] [14U] [i_12] [i_13] [i_16 - 1])));
                    }
                    var_29 = ((/* implicit */int) arr_38 [i_1] [(signed char)10] [i_13 - 4] [i_15 + 1]);
                }
                for (signed char i_17 = 1; i_17 < 21; i_17 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_57 [(unsigned short)11] [i_1] [10LL] [i_1] [i_13 - 1]))));
                    arr_63 [(short)2] [i_1] [(short)2] [(short)2] [(short)2] [i_17] = ((((/* implicit */int) arr_35 [i_13 - 4] [i_1] [i_13] [i_17])) == (((/* implicit */int) arr_26 [i_13 - 3] [(short)5] [(signed char)15] [i_13] [i_17 - 1])));
                    /* LoopSeq 2 */
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        arr_68 [(unsigned char)14] [i_12] [i_1] [(unsigned char)14] [(unsigned char)16] = ((/* implicit */unsigned int) (+(arr_34 [i_13 - 1] [i_13 - 1] [i_17 - 1])));
                        arr_69 [i_18] [(unsigned short)6] [(unsigned short)6] [(signed char)5] [i_1] [5LL] [i_18] = ((/* implicit */long long int) 3437231078U);
                        var_31 ^= ((/* implicit */unsigned short) (+(arr_48 [(unsigned short)10] [i_1] [i_1 - 3] [i_13 - 2])));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) arr_13 [i_1] [i_1] [i_17 - 1] [(unsigned char)12] [i_17 - 1] [i_13 - 2])))))));
                        var_33 ^= ((/* implicit */signed char) 9915313406066614579ULL);
                    }
                    for (unsigned int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        arr_74 [i_13] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_47 [i_12] [i_13 + 2] [i_12]))));
                        var_34 += ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)255))))));
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2] [7ULL] [i_13 + 1]))));
                    }
                }
                for (short i_20 = 4; i_20 < 19; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) ((unsigned long long int) var_0));
                        var_37 = ((/* implicit */signed char) (+(var_13)));
                    }
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_17 [12ULL] [(signed char)1] [0U] [12ULL]))));
                }
                var_39 = ((/* implicit */_Bool) ((unsigned short) arr_45 [i_1 + 1] [i_13 + 1] [11]));
                var_40 ^= ((/* implicit */long long int) arr_77 [4] [(unsigned char)16] [i_1] [4] [i_1]);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 3; i_22 < 21; i_22 += 4) 
            {
                var_41 = ((/* implicit */int) var_7);
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    arr_86 [(short)19] [(short)19] [i_1] [i_22] [(short)19] [i_23] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_78 [i_1] [i_1] [i_12] [0U] [i_1] [i_1] [i_12]))));
                    var_43 = ((/* implicit */signed char) arr_26 [i_1 + 1] [i_12] [(_Bool)1] [i_1] [i_12]);
                }
                arr_87 [i_1] [i_12] [i_12] [i_22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_22 + 1] [i_1] [i_1] [i_1 + 2])) ? (arr_48 [i_22 + 1] [(signed char)11] [i_12] [i_1 - 2]) : (arr_48 [i_22 - 2] [i_1] [i_1 - 2] [i_1 - 2])));
            }
            var_44 ^= ((/* implicit */_Bool) (~(arr_48 [10ULL] [(signed char)11] [i_1] [i_1 - 2])));
            var_45 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_12] [i_12]))) <= (arr_14 [i_1] [10] [16U] [i_1] [10])));
        }
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                for (int i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    {
                        arr_96 [i_1] [10LL] [(short)5] [(unsigned short)12] [i_1] [(unsigned short)12] = ((/* implicit */unsigned short) (short)32701);
                        arr_97 [i_1] [i_1] [i_1] [(signed char)16] [i_26] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_82 [(short)12] [21] [21] [(_Bool)1]))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned long long int) min((var_46), ((~(arr_67 [1U] [i_1 - 3] [i_24 - 1])))));
            arr_98 [i_1] = ((/* implicit */short) 18446744073709551615ULL);
        }
    }
    for (long long int i_27 = 0; i_27 < 21; i_27 += 4) 
    {
        var_47 |= ((unsigned char) ((((/* implicit */int) var_0)) << ((((+(arr_49 [i_27] [i_27] [i_27] [i_27] [i_27] [(signed char)14]))) - (14587374378538709019ULL)))));
        arr_102 [i_27] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((arr_13 [i_27] [(unsigned short)15] [i_27] [i_27] [i_27] [i_27]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (11U))))), (((/* implicit */unsigned int) ((signed char) arr_80 [i_27])))));
        arr_103 [14LL] = ((/* implicit */signed char) arr_51 [i_27] [7U] [i_27] [i_27]);
    }
    var_48 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((938714616U), (min((((/* implicit */unsigned int) (unsigned short)4396)), (var_9)))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) : (min((var_5), (((/* implicit */long long int) var_8))))))));
}
