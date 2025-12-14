/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16759
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_15)))))) | ((-(var_6)))))) && ((((-9223372036854775807LL - 1LL)) >= (-9223372036854775803LL)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 1])) >= (((var_7) | (((/* implicit */int) var_8))))));
                                arr_15 [i_2] [i_2] [i_3] [i_3] = (+(arr_10 [i_0 + 1] [i_0 + 1] [i_2]));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_19 [i_0] [(unsigned short)13] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 + 1]);
                        arr_20 [i_2] [i_2] = ((/* implicit */int) var_8);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) arr_10 [i_2] [i_0] [i_2]);
                        var_21 += ((/* implicit */short) ((int) arr_0 [i_0]));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) arr_9 [14LL] [i_1] [i_7] [14LL])) || (((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 + 1]))))));
                        arr_25 [i_0] [i_0] [i_2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_2] [i_1] [(short)18] [i_1]))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 2])))));
                    }
                    var_23 = ((/* implicit */short) arr_7 [i_1] [i_2]);
                    arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((long long int) -7731144619630611089LL)));
                }
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    arr_29 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) max((var_14), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (arr_28 [i_0] [i_1] [i_1] [i_8]) : (((/* implicit */unsigned long long int) arr_4 [i_8]))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            arr_35 [i_8] [i_1] [i_8] [i_10] [i_10] = ((/* implicit */short) ((int) (short)16026));
                            var_24 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)0))) > (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (((unsigned long long int) arr_1 [i_0] [i_0]))))));
                            arr_36 [i_10] [i_1] [i_10] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-16022)) & (((/* implicit */int) (unsigned char)15))))) ? (min((16743580919772868214ULL), (14284191199864933203ULL))) : (((unsigned long long int) arr_5 [i_0 + 1]))));
                            arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((max((5928834921290955106LL), (((/* implicit */long long int) arr_33 [i_0] [i_0] [i_8] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_14 [i_0] [i_1] [i_8] [0] [i_10] [i_10] [i_10])) - (38052))))))))) / ((~(((((/* implicit */_Bool) arr_32 [(_Bool)0] [i_0] [i_8] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))));
                            arr_38 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_8] [i_10]))));
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            arr_41 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_9] |= ((/* implicit */long long int) (~(arr_28 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0 - 2] [i_1] [i_1] [i_9] [i_11] [(short)1])))))));
                        }
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_45 [i_0] [i_0 + 1] [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) var_15);
                            arr_46 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_8])) & (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) > (((/* implicit */int) (unsigned short)59998)))))) : (((long long int) var_13))))) ? (min((((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_14))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_47 [i_0] [i_0] [i_0] [i_12] [i_9] [i_12] = ((/* implicit */int) var_9);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_40 [i_12]))) ? (((/* implicit */int) ((unsigned char) (unsigned char)15))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) > (((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_27 ^= ((/* implicit */int) (+(var_14)));
                            arr_51 [i_0] [i_1] [i_8] [i_1] [i_13] &= ((/* implicit */signed char) max((((min((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_0] [i_1] [i_8]))) >> (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_8] [i_9]))))));
                            var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-22910)))))));
                        }
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((unsigned char) (unsigned char)15))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0 - 2]))) : ((-(var_9)))))));
                        arr_52 [i_0] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_8] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                        arr_53 [i_0] [i_0] [i_8] [i_1] [i_0] &= var_3;
                    }
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                    {
                        arr_56 [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_12))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))))) % (var_17)));
                        arr_57 [i_0] [i_1] [12LL] [i_8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8])) || (((/* implicit */_Bool) (~(arr_10 [i_0] [(unsigned char)0] [i_14]))))))), (((unsigned long long int) arr_9 [i_14] [i_0 - 1] [i_0 - 1] [(unsigned char)0]))));
                        arr_58 [i_0 + 1] [i_8] [i_0 + 1] = ((/* implicit */int) var_12);
                        arr_59 [i_0] [i_1] [i_8] [i_14] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) > (17838618787188281190ULL))), (((arr_54 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [16]) != (arr_54 [i_0 - 1] [i_0] [2U] [i_0] [i_0 - 1] [2U])))));
                        arr_60 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_8])) && (((/* implicit */_Bool) var_6))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        var_30 |= ((/* implicit */unsigned short) arr_63 [i_15] [i_15]);
        arr_64 [i_15] = ((/* implicit */unsigned char) ((unsigned short) ((short) (+(arr_63 [i_15] [i_15])))));
        arr_65 [i_15] &= ((/* implicit */unsigned int) arr_62 [i_15] [i_15]);
    }
    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        arr_68 [i_16] [i_16] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)32762), ((short)26024)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_16])))))) ? (((/* implicit */int) arr_66 [i_16])) : (((/* implicit */int) ((unsigned char) var_15)))))));
        arr_69 [i_16] [i_16] = ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_67 [i_16] [i_16]))))), (((((/* implicit */_Bool) var_14)) ? (arr_67 [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    }
}
