/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163463
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = var_0;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), ((-(((unsigned long long int) arr_1 [i_0] [i_1]))))));
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) == (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0]))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) arr_0 [i_0])) ^ (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_1 [i_0] [11]);
        }
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */unsigned int) arr_15 [i_3] [i_3 + 1] [(unsigned short)5] [i_3 + 1]);
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) 1503812445)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [(short)20] [i_0] [i_0]))))))));
                        var_19 = ((/* implicit */unsigned long long int) (+(var_12)));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_0] [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) arr_4 [i_4]);
                        var_20 = ((/* implicit */_Bool) var_6);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned short) arr_3 [i_3 + 1] [i_3 + 1]);
                        arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_9] [i_4] [i_0])) ? (((/* implicit */unsigned int) 1959730746)) : (var_11)));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((((_Bool) arr_28 [i_0])) ? (arr_29 [i_0] [i_0] [i_0] [i_10]) : (arr_26 [i_0] [i_3 + 1] [i_3 - 1] [i_0] [i_10])));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [0U] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_16 [i_3 - 1] [i_3 + 1] [i_3])));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) arr_18 [i_10] [i_10] [i_4] [i_3] [(short)11])))) : (arr_13 [(unsigned short)14] [(unsigned short)14])));
                        var_25 = ((/* implicit */unsigned short) arr_0 [i_3 - 1]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_12))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                        var_29 -= ((/* implicit */int) (unsigned short)0);
                    }
                }
            } 
        } 
        var_30 &= ((unsigned int) ((((/* implicit */_Bool) arr_12 [3LL])) ? (2442486888185877848LL) : (arr_16 [i_0] [3ULL] [i_0])));
    }
    for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                {
                    var_31 = ((/* implicit */long long int) (~(var_5)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_46 [i_12] [i_12] [i_13] [i_14] [(signed char)1] = ((/* implicit */unsigned long long int) -7544254804533305711LL);
                        arr_47 [i_12] [3] [i_14] [i_14] = ((/* implicit */int) (unsigned short)65513);
                        var_32 = ((/* implicit */unsigned char) arr_38 [i_12 + 2]);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) (-(((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_16]))));
                        var_34 = arr_45 [i_14];
                    }
                }
            } 
        } 
        arr_50 [i_12] [i_12 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_25 [i_12 - 1] [i_12 + 1] [i_12 + 2])) ? (((/* implicit */int) arr_42 [i_12] [i_12] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_25 [i_12 - 1] [i_12] [i_12])))), (((/* implicit */int) arr_42 [(_Bool)1] [i_12] [i_12] [i_12 + 1]))));
    }
    for (signed char i_17 = 1; i_17 < 17; i_17 += 3) 
    {
        var_35 = ((/* implicit */int) ((short) (+(16U))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            arr_57 [i_18] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22923)) && (((/* implicit */_Bool) (unsigned char)122))));
            arr_58 [i_17] [i_17] = ((/* implicit */signed char) arr_29 [i_17 + 3] [i_17 + 3] [i_17 + 3] [i_17]);
            /* LoopSeq 3 */
            for (signed char i_19 = 2; i_19 < 19; i_19 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) arr_37 [i_18]);
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-64))));
                            arr_68 [i_17] [i_18] [i_19] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_21] [(unsigned char)4] [(unsigned short)19] [(unsigned char)4] [i_18] [(unsigned char)4])) ? (arr_29 [i_17] [i_17 - 1] [i_17] [i_17 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))));
                            var_38 ^= ((/* implicit */unsigned long long int) (~(var_12)));
                            arr_69 [i_17] [i_18] [i_20] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_59 [i_17] [i_17] [i_20] [i_21])) : (arr_37 [i_21])))));
                            arr_70 [(unsigned char)18] [(unsigned char)18] [(unsigned char)1] [(unsigned char)1] [(unsigned char)18] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)47990)) % (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (short i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_23 = 2; i_23 < 16; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            arr_80 [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) arr_71 [i_22] [i_23] [(signed char)6] [i_23 - 2]))));
                            var_39 += ((/* implicit */unsigned char) (-(arr_12 [i_17 - 1])));
                        }
                    } 
                } 
                var_40 *= ((/* implicit */unsigned char) ((-2147483638) ^ (((/* implicit */int) arr_42 [i_17 + 3] [i_17 - 1] [i_17 + 1] [i_17 - 1]))));
            }
            for (signed char i_25 = 1; i_25 < 18; i_25 += 3) 
            {
                var_41 *= ((_Bool) arr_42 [i_25 + 2] [i_25] [i_25 + 1] [i_25 + 2]);
                arr_83 [i_17] [i_18] [i_18] [i_25] = arr_64 [i_17] [i_18] [i_18] [(signed char)16];
                var_42 = ((/* implicit */unsigned char) var_7);
                var_43 = (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_79 [i_17] [i_17] [i_17] [i_17] [i_17])) : (var_6))));
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    arr_86 [i_26] [i_25] [i_25 - 1] [18LL] [i_18] [18LL] = ((/* implicit */signed char) (~(3736420911U)));
                    var_44 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) - ((-(arr_13 [(unsigned char)0] [i_17])))));
                }
            }
            /* LoopNest 3 */
            for (signed char i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                for (unsigned int i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 1) 
                    {
                        {
                            arr_95 [i_17] [i_18] [i_27] [(unsigned short)13] [i_27] = ((((/* implicit */int) arr_74 [i_17 + 1] [i_18] [i_28] [i_29])) ^ (((((/* implicit */_Bool) arr_42 [i_18] [i_27] [i_27] [i_27])) ? (arr_52 [7ULL]) : (((/* implicit */int) arr_89 [i_17 + 2] [i_18] [(unsigned short)2] [i_27] [(unsigned short)2] [i_29])))));
                            var_45 -= ((/* implicit */short) (-(((/* implicit */int) arr_42 [i_17 - 1] [i_17 + 2] [i_17 + 3] [i_17 + 2]))));
                            var_46 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            } 
            arr_96 [i_17] [i_17] = ((/* implicit */unsigned short) arr_20 [i_17] [i_17] [i_17] [i_17 + 2] [i_18]);
        }
        arr_97 [i_17] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_72 [i_17] [i_17] [i_17])), (4294967274U)))) ? (((/* implicit */unsigned long long int) (~(0U)))) : (6945358528628823570ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_17] [i_17] [i_17]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))));
    }
    var_47 = ((/* implicit */signed char) var_1);
}
