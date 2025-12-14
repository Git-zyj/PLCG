/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175037
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((arr_10 [(_Bool)1] [i_0] [i_2] [(unsigned char)18]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61060))))) << (((arr_10 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) - (4127481975U)))))), (((((/* implicit */_Bool) (unsigned short)19674)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (5720837373754883457ULL)))));
                        arr_11 [i_0] [(signed char)4] [(signed char)4] [i_0] &= ((/* implicit */short) (signed char)79);
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((-94709258) & (((/* implicit */int) (unsigned char)169)))))))), (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */unsigned int) max((11), (arr_7 [i_0] [i_1 + 2] [i_2] [i_3])))) : (31917956U)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2]), (arr_5 [i_1 + 1] [i_1] [i_1 + 1])))) ? (((/* implicit */int) max((arr_5 [i_1 - 1] [i_1] [i_1 + 2]), (arr_5 [i_1 + 2] [i_1] [i_1 - 2])))) : ((~(((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 2]))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_1] [i_0]))), (arr_9 [i_0] [i_1] [i_1 + 1] [(signed char)20])))) ? (((((/* implicit */_Bool) 1553473532)) ? (((arr_16 [i_0] [i_1] [i_1 - 2] [i_4]) ^ (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_4] [18U] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) : (((((((/* implicit */int) (unsigned char)255)) != (94709258))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1 - 2])) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (4724611613883343710ULL)))))));
                arr_17 [i_0] [(_Bool)1] [i_0] = arr_1 [i_0];
                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1LL)))) ? (((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2])))))))), (min((((11453470780817336591ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_5)))))))));
            }
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_10))) == (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))))))) < (arr_1 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned short) ((31917956U) % (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-65)) + (2147483647))) << (((4263049333U) - (4263049333U))))))));
                            var_18 = ((/* implicit */unsigned int) ((arr_16 [i_7] [i_7] [i_5] [i_1 - 2]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 + 2] [i_5 + 1] [i_5 + 1])) + (((/* implicit */int) arr_5 [i_1 + 2] [i_5 - 1] [i_5])))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_0 [i_8 + 4]) == (((/* implicit */unsigned int) ((94709264) / (94709258))))))) != (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) var_6)), (1536827906U)))))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)(-127 - 1)))))) <= (min(((-(arr_3 [(signed char)18] [(signed char)18] [(signed char)18]))), (((unsigned int) arr_7 [i_11] [i_0] [8LL] [i_0]))))));
                            var_21 = max((((((/* implicit */_Bool) 94709252)) ? (arr_10 [i_0] [i_10 + 4] [i_8 + 2] [i_11]) : (((unsigned int) var_6)))), (((/* implicit */unsigned int) ((int) ((unsigned short) var_10)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((long long int) arr_9 [6ULL] [6ULL] [4U] [6ULL]))))) ? (min((((/* implicit */unsigned long long int) 849329137U)), (11453470780817336621ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_0))))));
                arr_38 [i_0] [i_8 + 2] [i_0] = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (((/* implicit */int) min((arr_18 [i_8] [i_8] [i_12]), (((/* implicit */unsigned short) (signed char)-124))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))) <= (0U)))))));
            }
            for (short i_13 = 3; i_13 < 21; i_13 += 3) 
            {
                var_23 = ((/* implicit */_Bool) (unsigned short)3624);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_14 = 3; i_14 < 22; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_24 = ((/* implicit */int) arr_23 [i_0] [i_13 - 2] [i_13] [i_13 + 2] [i_14 + 1]);
                        var_25 += (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)16527)) : (((/* implicit */int) var_2)))));
                        var_26 *= ((/* implicit */_Bool) ((int) arr_7 [i_0] [i_0] [i_0] [i_0]));
                        var_27 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)15194)) : (((/* implicit */int) var_6)))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        var_28 = (~(((/* implicit */int) var_6)));
                        arr_51 [21ULL] [i_8 - 3] [21ULL] [i_0] [21ULL] = ((/* implicit */int) ((((arr_0 [i_14]) / (var_5))) >> (((arr_49 [i_0] [i_14 + 1] [(_Bool)1] [14] [i_16] [i_14] [i_8 + 2]) + (277929083)))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_0] [i_16] [i_14])) : (((/* implicit */int) var_9)))))));
                        arr_52 [i_16] [i_14] [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((int) ((9U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [17U] [17U] [i_13 - 2] [i_0]))))));
                    }
                    for (int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] [15LL] [i_0] = ((/* implicit */unsigned char) (+(((unsigned int) arr_21 [i_0] [(unsigned short)8] [i_14]))));
                        arr_56 [i_0] [i_8] [i_13 - 2] [i_0] [i_17] = var_5;
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 1; i_18 < 22; i_18 += 3) 
                    {
                        var_30 |= ((_Bool) arr_58 [i_14 - 2] [i_14 - 2] [i_18] [i_18] [i_18 + 1] [i_18] [i_18 - 1]);
                        arr_59 [i_0] = ((/* implicit */short) var_1);
                        arr_60 [i_0] [i_8 + 3] [i_13] [i_14] [i_18] [(_Bool)1] [i_18 - 1] = ((/* implicit */signed char) ((int) arr_36 [i_13 - 3] [i_18 - 1] [i_8 + 2]));
                    }
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        var_31 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_6)))));
                        arr_63 [i_19] [(unsigned short)14] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_8 - 1] [i_0] [i_14 + 1])) % (((/* implicit */int) (unsigned short)14271))));
                        arr_64 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_13 + 2] [i_14] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_8 [i_8 + 2])) : (((unsigned long long int) arr_24 [i_0] [i_0]))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_20 = 4; i_20 < 22; i_20 += 1) 
                    {
                        var_32 += ((/* implicit */unsigned char) ((-6119756069064218543LL) / (((/* implicit */long long int) 3858401231U))));
                        var_33 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_8] [i_20] [(unsigned short)12] [i_20 - 1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32763)))));
                    }
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        arr_72 [i_0] = ((/* implicit */_Bool) arr_50 [i_0] [i_8] [i_8] [i_14] [i_21] [i_21] [i_0]);
                        var_34 = ((/* implicit */_Bool) ((unsigned char) 6993273292892214997ULL));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) (_Bool)1)))))));
                        var_36 *= ((/* implicit */int) ((_Bool) (signed char)-97));
                    }
                    for (signed char i_22 = 1; i_22 < 20; i_22 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (~(arr_32 [i_13 + 1]))))));
                        var_38 *= ((/* implicit */unsigned long long int) (-(arr_3 [(unsigned char)18] [16] [i_0])));
                        var_39 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                        var_40 = ((/* implicit */short) ((arr_47 [i_0] [i_8] [i_13 + 2] [i_14] [i_22 + 1] [i_22] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_0] [i_8] [i_13] [i_0] [(short)5] [i_0]))))));
                    }
                    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned int) 94709258)) : (4294967287U)))) ? (-2147483635) : ((+(((/* implicit */int) (_Bool)0))))));
                }
                /* LoopNest 2 */
                for (signed char i_23 = 4; i_23 < 21; i_23 += 4) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) arr_0 [(short)11]))));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)48015)) ? (((/* implicit */int) (unsigned char)169)) : (2147483635)))))));
                            var_44 |= ((/* implicit */short) (((~(min((arr_54 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)92)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | ((~(((/* implicit */int) var_3)))))))));
                            arr_81 [i_0] = (-(((/* implicit */int) min((arr_46 [i_13 - 2] [i_8 + 2] [i_13 - 2] [i_23 + 1] [i_24]), (arr_46 [i_13 - 1] [i_8 - 2] [(signed char)22] [i_23 - 3] [i_24])))));
                        }
                    } 
                } 
            }
        }
        var_45 += ((/* implicit */unsigned short) arr_74 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_46 &= ((/* implicit */unsigned int) var_11);
    var_47 = ((signed char) var_11);
}
