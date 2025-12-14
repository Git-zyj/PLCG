/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189056
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) + (((635652102U) + (3659315165U)))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned short) 3659315172U));
                var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))), (max((((/* implicit */unsigned int) arr_2 [i_1])), (3659315187U))))) < (max((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (635652108U))), (((/* implicit */unsigned int) ((arr_2 [i_1]) | (((/* implicit */int) var_16)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((var_14) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (arr_2 [i_2 - 1])));
        arr_8 [i_2 + 2] [i_2] = ((/* implicit */int) ((_Bool) var_2));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_4]))))), ((+(9223372036854775807LL))))))));
            arr_13 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -5388286224207839456LL))));
            var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_3]))))) & (((unsigned long long int) (unsigned short)38644)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_19 [i_3] [i_5] = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned short) var_9);
                            arr_25 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26921)) ? (arr_12 [i_3] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 635652108U)) || (((/* implicit */_Bool) arr_21 [i_3])))))) : (3659315195U)));
                        }
                    } 
                } 
                arr_26 [i_6] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (2271587283U)));
            }
            /* LoopSeq 3 */
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
            {
                arr_30 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) arr_23 [i_3] [i_3] [i_9] [i_3] [i_3])) ^ (((/* implicit */int) var_4))))));
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) 635652108U)) > (-5360391803008566756LL)));
                arr_31 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) << (((((((/* implicit */int) var_8)) + (115))) - (2)))));
                arr_32 [i_5] = ((/* implicit */unsigned char) ((unsigned int) 635652122U));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_3] [i_5] [i_10] [i_10] [i_12] [i_3] = ((/* implicit */unsigned char) var_4);
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_16))));
                        arr_42 [i_3] [i_3] [i_3] [i_5] [i_12] [i_10] = ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_5 - 1] [i_10] [i_5 - 1] [i_3]))));
                    }
                    for (signed char i_13 = 3; i_13 < 9; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) (+(arr_7 [i_10])));
                        arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */int) ((arr_33 [i_5 - 1]) ^ (((/* implicit */unsigned long long int) 2271587312U))));
                    }
                    arr_47 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) var_12)) & (3659315204U)));
                    arr_48 [i_3] [i_5] [i_10] [i_11] = ((/* implicit */long long int) (((+(var_15))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-127))))));
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned short) var_1);
                    arr_51 [i_3] [i_3] [i_10] [i_14] [i_10] [i_5] = ((/* implicit */signed char) var_2);
                    var_28 = ((/* implicit */unsigned int) ((7289097007845275867ULL) & (((/* implicit */unsigned long long int) 3659315180U))));
                    var_29 &= ((unsigned int) ((2023380012U) == (2271587295U)));
                }
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (arr_29 [i_5 - 1] [i_5 - 1] [i_10])));
            }
            for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
            {
                arr_55 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) / (1007426237)));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (long long int i_17 = 1; i_17 < 11; i_17 += 1) 
                    {
                        {
                            var_31 |= ((/* implicit */signed char) ((_Bool) var_9));
                            arr_61 [i_3] [i_17] [i_15 - 1] [i_17] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (unsigned short)16)))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) / (((var_0) / (((/* implicit */int) arr_56 [i_3] [i_16] [i_3] [i_5 - 1] [i_3]))))));
                            var_33 *= ((/* implicit */unsigned long long int) ((arr_53 [i_15 + 3] [i_15 + 3] [i_5 - 1]) ? (((/* implicit */int) arr_53 [i_15 - 1] [i_15 + 1] [i_5 - 1])) : (((/* implicit */int) arr_53 [i_15 + 3] [i_15 + 3] [i_5 - 1]))));
                            var_34 = ((/* implicit */_Bool) (signed char)127);
                        }
                    } 
                } 
            }
        }
        for (int i_18 = 2; i_18 < 9; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_71 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_5))));
                        arr_72 [i_3] [i_18] [i_19] [i_19] [i_19] [i_3] = (((+(((/* implicit */int) arr_43 [i_18] [i_18 - 2] [i_18 - 1] [i_18] [i_18 - 2] [i_18 - 2] [i_18 - 2])))) <= (((int) arr_35 [i_18 - 1] [i_18 - 2] [i_18 + 3] [i_18 + 2])));
                        arr_73 [i_3] [i_20] [i_19] [i_3] = ((/* implicit */_Bool) ((unsigned char) var_1));
                    }
                } 
            } 
            arr_74 [i_3] = (-(((/* implicit */int) min(((signed char)122), ((signed char)(-127 - 1))))));
            arr_75 [i_3] = ((/* implicit */unsigned int) 9262737605219577268ULL);
        }
        var_35 &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_68 [i_3] [i_3] [i_3] [i_3] [i_3])) | (((/* implicit */int) ((unsigned short) (unsigned short)16))))));
    }
}
