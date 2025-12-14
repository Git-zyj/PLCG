/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170074
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3 - 3] [i_3 - 3])) ? (2155907118U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) (short)-12892))))) | ((~(var_4)))))) : (17899755888962393427ULL)));
                        var_12 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2155907118U)))))));
                        arr_8 [i_0] [i_2] [i_1] [(signed char)7] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((var_4) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))), (10776203151202955526ULL)));
                        var_13 = ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_3 [i_3] [i_2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)112))))))) ? ((+(((arr_5 [i_2] [(unsigned short)9] [i_2]) ^ (((/* implicit */int) arr_2 [i_0])))))) : (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [i_2 - 4]) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [0] [0])) << (((((var_10) + (1337103354))) - (20)))))))));
                    }
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_1 [i_1] [i_2])) - (61729)))))) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (var_5))))))));
                    var_15 = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_14 [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -254754797)))))) : (((/* implicit */int) var_6))));
        arr_15 [11] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) ((unsigned char) arr_11 [i_4])))))));
        var_16 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_16 [i_4]))));
                        var_18 = ((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3809249357U))))) ? (12784009943795037260ULL) : (12316678149041737023ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)112))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_11 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_6] [i_6] [(short)8])))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
            arr_23 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5] [i_5 + 2])) ? (((((/* implicit */_Bool) (short)2576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_18 [i_5 + 2] [i_5] [(short)18] [i_5 + 3]))) : (((/* implicit */unsigned long long int) max((arr_16 [i_5 - 1]), (arr_16 [i_5 + 2]))))));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) var_2)), (arr_18 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 - 1])))));
                var_21 = var_10;
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 12316678149041737031ULL)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (short)-2860)) : (arr_31 [i_5 + 3] [i_5 - 1] [16ULL])));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1)) : (3896629096U))))))));
                    }
                    arr_32 [i_4] [i_5] [i_4] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_5 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5 - 1])))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_18 [i_9] [i_8] [i_4] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)231)))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_13 [i_4])), (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-8070))))))))));
                            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2109288430U)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_27 = ((/* implicit */int) (unsigned short)61087);
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (int i_15 = 1; i_15 < 21; i_15 += 4) 
                    {
                        {
                            arr_46 [i_4] [i_4] [i_5] [i_13] [i_13] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (arr_31 [i_5 + 2] [(signed char)11] [i_5 + 2])));
                            arr_47 [i_4] [i_4] [(unsigned char)19] [i_4] = ((/* implicit */int) ((-5021601228886559049LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_28 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) arr_20 [i_5])) + (87))))))));
                    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_48 [i_16]))));
                    var_30 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((short) (signed char)93));
                        var_32 |= ((/* implicit */unsigned char) (unsigned short)18174);
                        arr_52 [i_4] [i_4] [i_4] [i_16] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    }
                }
                for (int i_18 = 1; i_18 < 22; i_18 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [11ULL] [i_19] [i_13] [i_18] [i_19 + 1])) : ((-(((/* implicit */int) (signed char)111))))));
                        arr_58 [i_4] [i_18] [i_13] [(signed char)13] [(signed char)13] [i_5] = ((/* implicit */unsigned int) 480ULL);
                        var_34 -= ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_19] [i_19 - 1] [i_19 - 1])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) 988466813U))));
                    }
                    var_36 = ((/* implicit */int) 3809249357U);
                }
            }
            for (int i_20 = 1; i_20 < 21; i_20 += 4) 
            {
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_20 + 1] [i_4] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_19 [i_4] [i_5] [i_4] [i_4])))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_0)))))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_5] [i_5 + 2] [i_5 + 3] [i_5] [i_5 + 2] [i_4])) < (((/* implicit */int) arr_57 [i_4] [i_4] [i_20 + 2] [18ULL] [i_4] [i_4] [i_5 - 1]))));
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_5))));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) / (max((min((var_9), (((/* implicit */unsigned long long int) (signed char)0)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        }
        for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    {
                        arr_72 [i_4] [i_4] [i_4] [i_4] [i_22] = ((/* implicit */short) 3141905002U);
                        var_41 = ((/* implicit */signed char) var_10);
                        /* LoopSeq 2 */
                        for (int i_24 = 2; i_24 < 22; i_24 += 1) 
                        {
                            arr_76 [i_22] [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_68 [i_21] [i_22] [i_23] [i_24])), ((unsigned short)29938)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -1)) : (2563869570U)))))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_34 [i_24] [i_24 - 2] [i_24] [i_24 - 2] [i_24 - 1]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (2047)))), ((-(3553802576U))))) : (((/* implicit */unsigned int) var_10)))))));
                            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)112)), (var_0))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 23; i_25 += 4) 
                        {
                            var_44 = ((/* implicit */short) max((var_44), (var_8)));
                            var_45 *= ((/* implicit */unsigned short) ((signed char) var_5));
                            arr_79 [i_22] [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_25] [i_23] [i_22] [(unsigned short)8] [i_4]))) & (8211230999829641077ULL)))));
                            var_46 = (+(18446744073709551615ULL));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)54396)) >= (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)27343)) - (27316))))))))) / ((~(arr_19 [i_4] [(short)22] [i_4] [i_4]))))))));
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) -2147483639))))), ((unsigned char)6)))) ? (13469488061405211266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_21] [i_21])))));
            var_49 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (arr_31 [i_21] [i_4] [i_4])))) ? (4876567326646821666LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [(unsigned short)19] [i_21] [i_4]), (((/* implicit */short) var_3)))))))));
        }
        for (unsigned int i_26 = 0; i_26 < 23; i_26 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_27 = 0; i_27 < 23; i_27 += 4) 
            {
                for (int i_28 = 0; i_28 < 23; i_28 += 1) 
                {
                    for (signed char i_29 = 3; i_29 < 22; i_29 += 2) 
                    {
                        {
                            var_50 |= ((/* implicit */unsigned long long int) min((((int) var_8)), (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2))))));
                            var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) ((((/* implicit */_Bool) 8ULL)) ? (var_9) : (((/* implicit */unsigned long long int) var_10)))))))));
                        }
                    } 
                } 
            } 
            var_52 *= ((/* implicit */unsigned int) ((var_9) % (((/* implicit */unsigned long long int) ((var_10) % (((/* implicit */int) arr_34 [i_4] [i_4] [i_4] [7ULL] [i_4])))))));
            arr_92 [i_26] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)5275)), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_83 [i_26] [i_4] [i_4])) - (21496)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_26]))) : (((((/* implicit */_Bool) arr_67 [i_26] [i_4] [i_4] [19ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2139060178U)))))));
            var_53 = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_73 [i_4] [i_26] [i_4] [i_26] [i_4] [i_4]) & (((/* implicit */int) arr_48 [i_4])))), ((-(((/* implicit */int) arr_55 [i_26] [i_4] [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_71 [(unsigned char)10] [i_4] [i_4] [i_4] [(unsigned short)9] [(short)20]))))) || (((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_26] [i_26] [i_26])))))) : ((~(max((var_5), (var_5)))))));
        }
    }
    var_54 = var_3;
}
