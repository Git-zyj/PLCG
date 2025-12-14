/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189115
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
    var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) + (min((var_14), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_1 + 1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) 8670394028986242375LL);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_13 [(unsigned char)16] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1])) >> (((((/* implicit */int) arr_8 [i_1 - 1])) - (21803)))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_2]))))));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1])) * ((-2147483647 - 1))));
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            var_21 *= ((/* implicit */unsigned char) arr_7 [i_1 - 1] [i_4] [i_4]);
                            var_22 = ((((/* implicit */_Bool) ((short) (short)-82))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_18 [i_5 - 1]));
                            var_23 = ((/* implicit */int) (short)-81);
                            arr_20 [(short)21] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((arr_19 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]) & (((/* implicit */int) arr_1 [i_1 + 1]))));
                        }
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_2]);
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) var_7);
                            arr_28 [i_0] [i_0] [(short)15] [(_Bool)1] [i_6 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_2] [i_6] [i_7]))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (var_14)))));
                            var_24 = ((/* implicit */int) ((long long int) arr_19 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]));
                        }
                        for (short i_8 = 3; i_8 < 23; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)24672)))) ? ((~(var_11))) : (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_31 [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_8]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1 - 1]))));
                            var_27 += ((/* implicit */unsigned char) arr_21 [i_0] [i_1 - 1] [i_2] [i_6 - 1] [10]);
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_39 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1])) % (((((/* implicit */int) arr_32 [i_11] [i_11] [i_2] [i_11] [i_11])) + (((/* implicit */int) var_9))))));
                            var_28 = ((/* implicit */int) (-(arr_15 [i_0] [(short)7])));
                            var_29 = ((/* implicit */int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                        }
                        for (short i_12 = 2; i_12 < 22; i_12 += 1) 
                        {
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))));
                            arr_43 [i_0] = ((/* implicit */long long int) (+(arr_19 [i_12] [i_12 - 1] [i_1 + 1] [i_12 - 1] [i_1 + 1])));
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? ((-(8670394028986242372LL))) : (var_0)));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (unsigned char)177))));
                    }
                }
                for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    arr_47 [i_0] [i_1] [i_13] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) arr_49 [i_14]);
                                var_33 = ((/* implicit */unsigned long long int) max((max((8670394028986242372LL), (((/* implicit */long long int) arr_25 [i_1])))), (((/* implicit */long long int) var_6))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    var_34 = ((/* implicit */int) arr_48 [21LL]);
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        arr_57 [i_0] [i_0] [i_16] [19LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)64))) - (var_11)))));
                        arr_58 [i_0] [i_0] [16] = ((/* implicit */long long int) ((((_Bool) arr_50 [i_0] [i_0] [i_1 - 1] [i_16] [(_Bool)1])) ? ((+(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((+(var_6)))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            var_35 = ((/* implicit */short) (-(((/* implicit */int) arr_36 [i_0] [(unsigned char)6] [i_1] [10ULL] [i_1 + 1] [i_18]))));
                            var_36 = ((/* implicit */int) (short)22399);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_40 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_40 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
                            var_38 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 8ULL)))) ? (((/* implicit */int) (short)81)) : (((/* implicit */int) (unsigned char)254))));
                        }
                        for (long long int i_20 = 3; i_20 < 23; i_20 += 2) 
                        {
                            arr_67 [i_0] [i_20] [i_0] [i_0] [i_20] [i_20] = ((/* implicit */short) ((unsigned short) arr_65 [i_0] [i_20] [i_16] [i_16] [i_20 - 2] [i_20 - 2]));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_1 + 1] [i_1] [i_20 - 3])) ? (((/* implicit */int) arr_46 [i_1 + 1] [i_1 + 1] [i_20 - 3])) : (((/* implicit */int) arr_46 [i_1 - 1] [i_1 + 1] [i_20 - 2]))));
                            arr_68 [i_0] [i_20] [i_18] [i_20] = ((unsigned short) var_0);
                            arr_69 [i_0] [i_1] [(unsigned short)10] [i_18] [i_20] = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) var_6)) / (8670394028986242362LL))));
                            var_40 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)48170)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 24; i_21 += 1) 
                        {
                            arr_74 [(_Bool)1] [i_18] [i_16] [(_Bool)1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_40 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_1])) != (((/* implicit */int) var_16))));
                            var_42 = ((/* implicit */long long int) arr_21 [i_0] [i_1] [(unsigned char)20] [i_0] [(unsigned char)20]);
                        }
                    }
                    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        var_43 = (-(arr_63 [i_0] [i_1 + 1] [i_16]));
                        arr_77 [i_0] [i_1] [i_16] [i_22] = var_2;
                        arr_78 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_0] [i_1 + 1] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))));
                    }
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_65 [i_1 - 1] [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_65 [i_1 - 1] [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                }
            }
        } 
    } 
}
