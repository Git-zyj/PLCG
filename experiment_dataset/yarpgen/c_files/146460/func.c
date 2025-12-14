/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146460
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_15);
                var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) var_11)), (var_7)))))))));
                var_20 = ((/* implicit */_Bool) min((-941756552461907156LL), (((/* implicit */long long int) (signed char)15))));
                var_21 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_5 [i_1])), (min((((/* implicit */long long int) arr_5 [i_1])), ((-9223372036854775807LL - 1LL)))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (short)30)))))) > (min((258048LL), (((/* implicit */long long int) (_Bool)0))))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_22 = ((/* implicit */long long int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (unsigned short)32768))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))))), (((unsigned int) ((((/* implicit */int) (signed char)8)) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_23 = ((/* implicit */_Bool) arr_3 [i_3]);
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_1] = min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))))));
                }
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (short)0))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) min((var_13), ((unsigned char)28)))))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-36))));
                    var_27 -= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_11 [i_5 + 1] [i_5] [i_5] [i_0]))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_2);
    var_29 = (unsigned char)222;
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                arr_24 [i_6] [(unsigned char)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)228))))), (min((arr_20 [i_6] [i_6]), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((unsigned char) max((var_11), ((short)-30)))))));
                /* LoopSeq 4 */
                for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-9))));
                    arr_28 [i_7] = ((/* implicit */_Bool) max((var_16), (min((((/* implicit */unsigned long long int) min(((unsigned char)68), (((/* implicit */unsigned char) (_Bool)1))))), ((~(3656540240695792536ULL)))))));
                    var_31 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [0U])) << (((var_17) + (1868366458861854773LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_9 [(signed char)0])))))))));
                }
                for (long long int i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    var_32 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_11 [i_9 + 1] [i_7] [i_7] [i_6])), (var_4)))) : (((((/* implicit */int) arr_30 [i_6] [i_7] [(_Bool)1])) & (var_10))))));
                    arr_32 [(signed char)0] [4LL] [i_9 + 1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)231)))), (arr_8 [(_Bool)0] [i_7 - 1] [i_9]))))));
                    arr_33 [(unsigned char)8] [4U] [2LL] &= ((/* implicit */unsigned int) arr_5 [12ULL]);
                }
                for (unsigned char i_10 = 2; i_10 < 8; i_10 += 2) /* same iter space */
                {
                    arr_36 [i_10 - 1] [i_7] [i_10] = min((min((((/* implicit */long long int) (unsigned char)228)), (var_17))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) >> (((((((/* implicit */_Bool) (short)8191)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (5585023060053718228LL)))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_33 &= ((var_1) >> (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_10] [i_10])), (arr_20 [i_7] [i_10 + 3]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_16))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_4 [i_10]))));
                            arr_41 [i_6] [i_7 - 1] [i_10] [i_11 + 1] [i_6] [i_7] = ((/* implicit */unsigned char) arr_6 [i_6] [i_12] [i_10 - 2]);
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_44 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [i_7] [3U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_6] [i_7] [i_11 - 1] [i_7]))) && (((/* implicit */_Bool) var_13))));
                            var_36 *= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)30))) & (var_5))), (((/* implicit */long long int) ((short) ((long long int) 8070450532247928832LL))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_7 - 1] [i_7 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))) ? (((int) min((((/* implicit */long long int) (signed char)105)), (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)36)))))));
                            arr_45 [(unsigned short)8] [i_7] [3U] [i_7] [i_7] [0LL] [i_13] = ((/* implicit */long long int) max((min((var_16), (min((arr_3 [(short)19]), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_23 [i_7 - 1] [i_7] [(unsigned char)7]))))));
                            arr_46 [i_13] [(_Bool)1] [i_13] [i_13] [i_13] [8] [i_7] = ((/* implicit */signed char) var_13);
                        }
                        arr_47 [i_6] [i_7] [i_7] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned short) (~(((((/* implicit */int) var_11)) >> (((var_1) - (5585023060053718222LL))))))));
                        arr_48 [i_6] [i_7] [i_7] [2ULL] [i_11 - 2] = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30)))));
                        arr_49 [i_11] [i_7] [i_7] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((8468254225693632765LL) >> (((-350731883131694672LL) + (350731883131694673LL))))))))));
                    }
                    for (short i_14 = 2; i_14 < 10; i_14 += 1) /* same iter space */
                    {
                        arr_54 [i_6] [i_10] [i_10] [i_14 + 1] &= ((/* implicit */unsigned int) (short)32767);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 2; i_15 < 10; i_15 += 2) 
                        {
                            arr_57 [i_6] [i_7] [i_6] [i_6] [i_7] = (!(((/* implicit */_Bool) arr_7 [i_6] [i_10 + 3] [i_6])));
                            var_38 = ((/* implicit */signed char) ((unsigned long long int) (~(var_15))));
                            var_39 = ((((/* implicit */_Bool) arr_20 [i_14 - 2] [i_15 - 2])) ? (((/* implicit */long long int) ((unsigned int) arr_37 [i_6] [i_6] [i_10] [i_10] [i_10 - 1]))) : (arr_2 [i_15] [i_15 + 2]));
                        }
                    }
                }
                for (unsigned char i_16 = 2; i_16 < 8; i_16 += 2) /* same iter space */
                {
                    arr_60 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-6330)) / (((/* implicit */int) (unsigned short)23640))));
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 2) 
                    {
                        var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (arr_23 [i_7 - 1] [i_17] [i_7 - 1]) : (min((((/* implicit */long long int) (short)36)), (var_7)))));
                        var_41 = ((/* implicit */unsigned char) var_12);
                        var_42 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned char)195))))))) < ((-(min((var_0), (((/* implicit */unsigned int) var_11))))))));
                        var_43 = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) ((unsigned char) 14172953550090596734ULL))) : (((/* implicit */int) ((_Bool) 6643022613747030483LL))))), ((((_Bool)1) ? (((/* implicit */int) arr_61 [i_7] [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) (signed char)-15))))));
                    }
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_67 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (min((((/* implicit */unsigned long long int) (short)-13938)), (17774560003925415088ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-30), (((/* implicit */short) (unsigned char)249))))))));
                        var_44 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_18] [i_16] [i_6]))));
                        arr_68 [i_18] [i_16 + 4] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_63 [i_6] [i_6] [i_6]))))) ? (max((arr_12 [i_16] [i_7]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) arr_2 [i_16] [i_16 + 2]))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_19 = 2; i_19 < 11; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        {
                            var_45 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_6] [(short)0] [i_20]), (((/* implicit */unsigned long long int) arr_8 [(signed char)2] [(signed char)2] [(unsigned short)16]))))) ? (min(((+(((/* implicit */int) (signed char)22)))), (((/* implicit */int) (signed char)115)))) : (((/* implicit */int) var_4))));
                            arr_75 [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_72 [i_7 - 1] [i_7 - 1] [i_19 - 1] [i_19 - 2]) ? (var_1) : (var_5)))), (min((9941241445506682104ULL), (((/* implicit */unsigned long long int) arr_56 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
