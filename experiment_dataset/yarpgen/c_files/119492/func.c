/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119492
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))) ? (((((/* implicit */int) max((((/* implicit */short) var_10)), (var_1)))) >> (((((((/* implicit */int) (signed char)24)) ^ (((/* implicit */int) var_9)))) + (29538))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((901264697U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) && (((/* implicit */_Bool) min((arr_2 [i_1]), (arr_2 [i_0])))))))));
                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(130560U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((min((((/* implicit */long long int) arr_3 [i_1])), (arr_1 [i_1]))) - (((/* implicit */long long int) ((var_7) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)48)))) - (((((/* implicit */int) ((((/* implicit */_Bool) 2109787408553482360LL)) && (((/* implicit */_Bool) arr_2 [i_0]))))) >> ((((~(((/* implicit */int) var_10)))) + (105)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_12 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (min((arr_11 [i_2]), (arr_11 [i_2])))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4398046511040ULL)) ? (4294836735U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10146))))), (((/* implicit */unsigned int) ((arr_8 [i_2]) < (arr_8 [i_2]))))));
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_9))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_14 = ((/* implicit */signed char) min((7321258338943955929ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) - (((/* implicit */int) (unsigned short)57468))))) <= (3393702599U))))));
                    arr_19 [i_2] [i_2] [i_2] [20ULL] |= ((/* implicit */unsigned long long int) var_2);
                    arr_20 [i_2] [i_3] [i_3] [i_4 + 1] [i_5] = min((((/* implicit */unsigned long long int) arr_12 [i_4 + 2])), (var_0));
                }
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    arr_25 [i_3] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [15LL] [15LL] [i_3] [i_6 + 2]))))) ? (((arr_11 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2]))))) : (min((arr_11 [i_3]), (((/* implicit */long long int) arr_16 [i_2])))))));
                    var_15 &= ((/* implicit */unsigned char) (~(5794262949657759068LL)));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_30 [i_2] [i_3] [i_4] [i_3] [i_8] = ((/* implicit */unsigned short) max((((int) (-(var_8)))), (((/* implicit */int) arr_23 [i_2] [i_2] [i_7] [i_8]))));
                            arr_31 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8 - 3] [i_8 - 4])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 + 1] [i_8 - 4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 + 1] [i_8 - 4]))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_32 [(short)14] [(short)14] [(short)14] [i_4] [i_4] [i_3] [i_8 - 3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) max((((/* implicit */short) arr_16 [i_4])), (var_1)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)6958)) != (((/* implicit */int) (unsigned short)14535))))))));
                        }
                    } 
                } 
                var_16 = ((((/* implicit */_Bool) arr_18 [i_3] [i_4])) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_3] [i_4 + 2])) : (((/* implicit */int) var_9)));
            }
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_28 [i_2] [i_3] [i_3] [i_9] [i_9] [i_2] [i_9])));
                var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 131072U)) ? (((((/* implicit */_Bool) 14692909199695744606ULL)) ? (5794262949657759066LL) : (-9199728408585144592LL))) : (((/* implicit */long long int) 901264723U)))))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)96)), (4398046511025ULL)));
                var_20 = ((/* implicit */unsigned short) var_9);
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 23; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(arr_40 [i_11 - 2])));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 78390756036773371ULL)) ? (((((/* implicit */_Bool) 1073741824)) ? (18446739675663040575ULL) : (((/* implicit */unsigned long long int) 8388352LL)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((17966344460704392373ULL) - (17966344460704392344ULL))))))));
                            arr_44 [i_2] [i_3] [i_10] [(signed char)17] [(signed char)17] [i_10] = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) var_9)))));
                        }
                    } 
                } 
                arr_45 [i_10] [i_3] [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (14212)))));
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-56)))))));
            var_24 = ((/* implicit */short) (signed char)98);
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) arr_37 [i_2])) ? (arr_37 [i_15]) : (arr_37 [i_15])))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_27 [i_2] [i_15]))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_2))));
                        }
                    } 
                } 
            } 
            arr_61 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_14] [i_14] [i_14])) * (((/* implicit */int) (signed char)98))))) ? (((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_2])) : (arr_33 [i_14] [i_14] [i_2] [i_14])));
            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (short)9508)) : (((/* implicit */int) (unsigned char)188))))));
        }
    }
    for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) var_10);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        {
                            arr_73 [i_19 + 2] [i_19] [(signed char)9] [i_21] [i_18] [i_19] [i_22] = ((/* implicit */unsigned long long int) arr_21 [i_18] [i_22]);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_7))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((unsigned char) arr_66 [i_19]));
                        var_32 += ((/* implicit */short) ((((-321219873031885100LL) != (((/* implicit */long long int) 2738426678U)))) && (((((/* implicit */unsigned long long int) var_5)) <= (arr_10 [i_18])))));
                        arr_79 [i_18] [i_18] [i_18] [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) (+(arr_74 [i_18] [i_18] [i_18] [i_19] [i_19 - 2])));
                    }
                    for (int i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        arr_83 [i_19] [i_19 + 2] = ((/* implicit */short) arr_72 [i_25] [i_23] [i_19] [i_18] [i_19] [(_Bool)1] [i_18]);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_18] [i_19 - 2] [i_18] [i_20]))) : (var_5)));
                    }
                    for (unsigned short i_26 = 2; i_26 < 19; i_26 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_74 [i_19 + 2] [i_26 - 2] [i_20] [18LL] [i_26]);
                        var_35 *= ((/* implicit */long long int) ((((/* implicit */long long int) var_7)) != (arr_46 [i_18] [i_23] [i_26 + 2])));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_36 -= (-(arr_48 [i_18]));
                        arr_89 [i_19] [i_19] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504472629248LL)) ? (((/* implicit */unsigned long long int) 2113929216U)) : (18172183378919723097ULL)))) ? (-489610333065861059LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_58 [i_19] [i_23] [i_19]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        arr_93 [i_18] [6ULL] [i_20] [i_19] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_70 [i_19] [i_19])) > (var_0)))) > (var_4));
                        var_37 = ((/* implicit */signed char) (+(4579737412928309124ULL)));
                        var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_71 [i_19 - 2] [i_28] [(unsigned char)7] [i_23] [(short)0])) - (((/* implicit */int) arr_71 [i_19 - 1] [i_19 - 1] [(unsigned short)16] [i_23] [i_28]))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) var_2))));
                    }
                }
            }
            arr_94 [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((1152921504472629248LL) + (((/* implicit */long long int) -1798222022))))) * (((((/* implicit */_Bool) arr_26 [i_19] [i_19] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (arr_26 [i_19] [i_19] [i_18])))));
            /* LoopNest 2 */
            for (short i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                for (signed char i_30 = 0; i_30 < 22; i_30 += 2) 
                {
                    {
                        arr_101 [i_30] [i_18] [i_30] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3640))) - (((4294836735U) - (56U)))));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max(((~(((1991614947U) * (arr_86 [i_18] [i_19] [i_18] [i_29] [i_29] [i_30] [i_30]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_35 [7] [i_19 + 1] [i_19 - 1] [i_19 - 1])) + (2147483647))) >> (((arr_39 [(short)23]) << (((((/* implicit */int) var_10)) - (51)))))))))))));
                    }
                } 
            } 
        }
        arr_102 [i_18] |= ((/* implicit */short) ((var_7) << (((((((/* implicit */int) var_9)) + (29530))) - (16)))));
    }
    var_41 &= ((/* implicit */unsigned int) var_4);
}
