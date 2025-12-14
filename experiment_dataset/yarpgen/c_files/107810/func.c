/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107810
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) var_0);
        var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (5116758671818821715ULL)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)181))));
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_1])), (((var_7) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14307)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */signed char) var_4);
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_19 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)5))));
                    arr_15 [i_0] [i_1] [i_3] [i_4] |= ((/* implicit */_Bool) 6526745049049424385ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)-31))));
                        var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_2 [i_0 - 1]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_3] [i_4]))));
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_23 = arr_17 [i_0 - 1] [i_1] [i_3] [(_Bool)1] [i_7];
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        arr_25 [i_0] [i_1] [i_3] [i_3] [15] [i_1] = ((/* implicit */unsigned int) ((((_Bool) var_9)) ? ((-(((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) var_13))));
                        var_25 &= ((/* implicit */signed char) ((var_6) * (((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [i_8] [i_8 - 4] [i_8 + 1]))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))) == ((+(((/* implicit */int) arr_12 [i_8] [i_1]))))));
                    }
                    arr_26 [i_0] [i_3] [12ULL] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */signed char) arr_13 [i_0 - 1] [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_3] [i_0 - 1]))));
                    var_27 = ((/* implicit */unsigned short) var_9);
                    var_28 = ((/* implicit */_Bool) var_11);
                }
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        arr_33 [i_0 - 1] [i_1] [i_3] [18] [i_10] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)33)) + (((/* implicit */int) (unsigned short)34941))))))));
                        var_29 *= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) << (((var_5) - (2186581383574919573LL)))))) ? (((unsigned int) (unsigned char)181)) : (((/* implicit */unsigned int) (+(arr_11 [i_0] [i_9])))))) : (min((((unsigned int) (unsigned char)250)), (2543725793U)))));
                        var_30 = ((/* implicit */signed char) (-((-(max((var_2), (((/* implicit */long long int) var_0))))))));
                        var_31 = ((/* implicit */unsigned short) var_1);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        arr_38 [i_3] [11LL] [i_3] [i_9] [16] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) <= (((/* implicit */int) var_13))))) != ((-(((/* implicit */int) (unsigned char)206)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) (-(3412124682U)))))))) : ((((-(var_8))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1751241502U))))))))));
                        arr_39 [(_Bool)1] [i_3] [i_3] [(signed char)3] [i_3] = ((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_3]);
                        arr_40 [i_0] [i_0] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_11 - 1] [(unsigned short)14] [i_0] [i_11])) ? ((~(var_5))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_22 [(_Bool)1] [i_3] [i_3] [i_9] [i_11])))))));
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */unsigned int) ((min((var_2), (((/* implicit */long long int) max((var_9), (arr_23 [5] [i_1] [i_1] [i_3] [i_9] [(signed char)18] [(unsigned short)3])))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_9]))) - (1032087144689201299LL)))) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) ((unsigned char) var_12))))))));
                        arr_44 [i_0] [i_1] [i_9] [i_9] [i_12] |= 2135618757;
                        arr_45 [i_3] [i_3] [i_3] [i_9] [i_12] = ((/* implicit */signed char) var_3);
                    }
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_7))));
                }
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)205)), (1751241503U)))), (((((/* implicit */_Bool) (unsigned char)205)) ? (((((/* implicit */_Bool) 4294967276U)) ? (-9052553865617404902LL) : (-1032087144689201299LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (arr_36 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned char)205)))), ((-(((/* implicit */int) var_3))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) 19U))))) / ((+(arr_31 [i_0] [i_1] [i_3]))))))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), ((+(var_4)))))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) ((signed char) (unsigned char)83)))));
                        arr_51 [i_0] [i_1] [i_0] [i_3] [i_14] [i_14] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    arr_52 [i_3] [i_1] = (unsigned char)254;
                }
            }
            for (int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                arr_56 [(signed char)12] [i_1] [i_15] [(signed char)12] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_9)) ? (8210988026228455660LL) : (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_13 [i_0] [(unsigned short)2] [i_15]))))))), (((/* implicit */long long int) (unsigned char)2))));
                /* LoopSeq 4 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */int) ((((26U) <= (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) arr_41 [i_0 - 1] [i_0 - 1] [8] [i_15] [i_16] [i_16]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) % (((((/* implicit */_Bool) (signed char)-54)) ? (2896930678U) : (1398036617U)))))));
                    var_39 ^= var_9;
                    arr_60 [i_0] [(unsigned char)10] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) arr_58 [i_0] [i_0] [i_15] [0LL] [i_16]);
                    arr_61 [i_0] [i_15] [i_16] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_55 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_55 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_11))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (+(var_8))))));
                }
                for (signed char i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
                {
                    var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)94))))) ? (max((((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned int) 0))))), ((+(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0 - 1] [i_15] [i_17])) | (((/* implicit */int) var_11)))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_42 *= arr_17 [i_0 - 1] [i_0 - 1] [i_15] [i_17] [i_18];
                        var_43 &= ((/* implicit */unsigned int) var_6);
                        var_44 |= ((arr_8 [i_0 - 1]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (3993919897323529230ULL)))) : (arr_11 [i_0 - 1] [i_15]));
                        var_45 = ((/* implicit */signed char) 13695838466298686511ULL);
                    }
                    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 4) 
                    {
                        arr_73 [i_0 - 1] [i_1] [i_1] [i_1] [i_17] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) 2543725793U)), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0])) : (967705218))))))) ? (((/* implicit */int) ((unsigned char) -1849662250))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_4))))))))));
                        arr_74 [i_15] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (short)32767)) - (32743)))))) ? ((~(var_10))) : ((-(var_6))))));
                    }
                    for (unsigned int i_20 = 1; i_20 < 17; i_20 += 4) 
                    {
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) max((((/* implicit */unsigned int) -967705219)), (((((/* implicit */_Bool) min((-220619577), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) var_9)) : (min((var_4), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                        var_47 |= max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)206))))), (max((2896930678U), (2603609346U))))), (((unsigned int) 3263056521279496038ULL)));
                    }
                    var_48 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -651439981426680963LL)))))));
                    var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (short)-32750))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)205))))))))));
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        arr_79 [5] [i_21] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -651439981426680982LL)), (var_10)))) ? ((+(((/* implicit */int) (unsigned char)78)))) : (max((-233632463), (((/* implicit */int) (signed char)33)))));
                        var_50 |= max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_0] [i_1] [i_15] [i_17] [i_21]))))));
                        var_51 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_1), (-791947064)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_17])) ? (((/* implicit */unsigned long long int) var_4)) : (4491462768630624321ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) (-(1691357936U)))))));
                        var_52 = ((/* implicit */int) min((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58026))) | (var_8))), (((/* implicit */long long int) (unsigned short)40939)))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 19; i_22 += 4) 
                    {
                        var_53 &= ((/* implicit */short) (signed char)36);
                        var_54 = ((/* implicit */_Bool) arr_66 [i_0] [i_1] [i_15] [i_0 - 1]);
                        var_55 = ((/* implicit */_Bool) arr_2 [i_0]);
                        arr_84 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)31))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_83 [i_0] [i_0] [i_0 - 1] [16U] [i_0] [i_0]))) & (var_8)))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    var_56 = ((/* implicit */signed char) ((unsigned int) var_6));
                    var_57 = ((/* implicit */signed char) (unsigned short)50131);
                    var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((_Bool) arr_62 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))));
                    var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_3))))))));
                }
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 19; i_24 += 4) 
                {
                    var_60 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 439515952U)))))));
                    var_61 = ((/* implicit */int) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_15] [i_24])) != (((/* implicit */int) arr_90 [i_0] [i_0] [i_0 - 1]))));
                }
            }
            var_62 = ((/* implicit */_Bool) var_11);
            var_63 &= ((/* implicit */short) (+((+(((/* implicit */int) (unsigned char)0))))));
        }
    }
    for (unsigned int i_25 = 2; i_25 < 8; i_25 += 4) 
    {
        var_64 = min((777928471U), (195671644U));
        var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) max((((((/* implicit */long long int) max((var_9), (((/* implicit */int) var_13))))) / (-8943080148124460319LL))), (((/* implicit */long long int) 2896930671U)))))));
        arr_93 [i_25] = ((/* implicit */long long int) var_13);
    }
    var_66 = ((/* implicit */unsigned char) (~(max((((2896930679U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (signed char)-113))))));
    var_67 -= ((/* implicit */unsigned int) (((_Bool)1) ? (-838626484) : (((/* implicit */int) (unsigned short)32105))));
    var_68 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1691343388))))) << (((max((1602006453), (((/* implicit */int) (signed char)-34)))) - (1602006428))))))));
}
