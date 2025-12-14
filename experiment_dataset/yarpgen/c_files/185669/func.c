/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185669
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
    var_18 = ((/* implicit */unsigned long long int) (-(var_8)));
    var_19 = ((/* implicit */int) ((short) var_12));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_17)) : (var_14))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6248))) : (var_7)))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (short)11105)) ? (var_3) : (((/* implicit */unsigned long long int) -182345644)))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [(signed char)9] [(signed char)9] = ((/* implicit */_Bool) 2147483647);
        var_21 = ((/* implicit */unsigned char) (+(min((1248629375), (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))), (((arr_1 [i_0]) % (949356474131627814ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1604035862))))) : ((-(((/* implicit */int) arr_0 [(short)0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) arr_1 [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (short)-15488)) : (-2147483636))))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_1])))))))));
            var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_4 [i_0]), (arr_1 [i_1]))))));
            var_25 = ((/* implicit */int) (~(min((((((/* implicit */_Bool) arr_5 [i_1])) ? (2064627567366887365ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))))), (((/* implicit */unsigned long long int) 2147483635))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_8 [i_2 - 3] [i_2 - 1] [i_2 - 3])), (((((/* implicit */_Bool) (short)15483)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [9] [i_2 + 1] [i_0]))))))) <= (min(((+(arr_1 [(unsigned char)6]))), (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2 - 3] [i_2 - 1]))))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((max(((-(17497387599577923785ULL))), (((/* implicit */unsigned long long int) (-(125829120)))))) <= (max((min((arr_6 [i_0]), (((/* implicit */unsigned long long int) -1248629376)))), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)3] [i_2 - 2] [i_3]))))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_2])) == (((/* implicit */int) ((signed char) arr_8 [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 17444918626455818095ULL)))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2]))))) : (max((((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) -1863652530)))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]))))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 1) 
            {
                arr_15 [i_0] &= ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) arr_5 [i_0])), (17584001337987867081ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) 1863652503))));
                arr_16 [i_0] [i_2 - 3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2147483636))));
                arr_17 [4] [i_4] [i_4 - 3] [6U] = ((/* implicit */unsigned int) (+(arr_1 [5])));
            }
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_29 = ((/* implicit */_Bool) ((unsigned int) max((((int) arr_10 [i_0])), (((int) arr_19 [i_0])))));
                var_30 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) 1248629379)) ? (((/* implicit */unsigned long long int) -2147483636)) : (4368787693666890676ULL)))))));
                var_31 ^= ((/* implicit */short) ((((((/* implicit */int) (short)-14489)) == (arr_18 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_5 [(short)8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2226305827669131309ULL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) min((arr_7 [i_5]), (((unsigned char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0])))))));
                            arr_26 [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((int) (short)-10211)))))));
                            var_33 = ((/* implicit */unsigned long long int) ((int) 18446744073709551615ULL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((int) arr_19 [i_8])) == (arr_27 [i_0] [i_0] [i_2 + 2] [i_8 - 1] [i_8 - 1])))), ((~(((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) arr_22 [i_0] [i_8 + 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [9])))))))))));
                            var_35 = ((/* implicit */unsigned int) (signed char)-29);
                            var_36 = ((/* implicit */signed char) ((short) ((signed char) arr_25 [i_5] [i_2] [i_2 + 1] [i_2 + 1] [i_9] [i_8])));
                        }
                    } 
                } 
            }
            var_37 ^= ((/* implicit */unsigned char) min((((unsigned long long int) arr_27 [i_0] [i_0] [i_2 - 2] [i_2 - 3] [i_2 - 3])), ((~(max((((/* implicit */unsigned long long int) arr_11 [i_0])), (17497387599577923794ULL)))))));
        }
        /* LoopSeq 1 */
        for (short i_10 = 3; i_10 < 9; i_10 += 4) 
        {
            var_38 = ((/* implicit */signed char) -1975278995);
            arr_35 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_3 [i_0] [7U] [i_0]);
            /* LoopNest 3 */
            for (signed char i_11 = 4; i_11 < 9; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 6; i_13 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_28 [i_0] [i_10] [i_10] [i_13 - 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4277245445455207498ULL))))))))));
                            var_40 = ((/* implicit */unsigned long long int) min((((arr_40 [i_10] [i_12] [i_10] [i_10]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_10 - 1] [i_11] [i_12] [i_13])) && (((/* implicit */_Bool) 528482304ULL))))) : (((/* implicit */int) arr_22 [i_10] [i_10] [i_11] [i_10] [i_13 - 1] [2ULL])))), (((/* implicit */int) arr_3 [i_12] [i_10 + 1] [(signed char)8]))));
                            var_41 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_19 [i_10 - 2]))));
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (5512123280644698837ULL) : (arr_25 [i_0] [i_10 + 1] [i_10 - 3] [(unsigned char)4] [i_0] [i_10])))))) ? (((/* implicit */int) arr_41 [i_10 + 1] [i_10] [i_10])) : (((((/* implicit */_Bool) arr_27 [i_10 - 2] [i_10 - 3] [i_10] [i_10 - 3] [6])) ? (arr_27 [i_10 - 1] [1] [2ULL] [i_0] [1]) : (arr_27 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10])))));
        }
    }
    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 1) 
    {
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (+(min((arr_43 [6U]), (arr_43 [6ULL]))))))));
        var_44 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32)) ? (arr_43 [i_14]) : (((/* implicit */unsigned int) arr_42 [i_14]))))), (9951712113870789304ULL))) <= (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)11)))))))));
        var_45 = ((/* implicit */short) min((min((arr_43 [i_14]), (((/* implicit */unsigned int) arr_42 [i_14])))), ((+(((unsigned int) arr_42 [i_14]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                {
                    arr_49 [i_14 - 2] [i_15] [i_14] [i_16] = ((/* implicit */unsigned int) ((long long int) arr_48 [i_16] [i_14] [i_14] [13ULL]));
                    arr_50 [i_14] [i_14] = ((/* implicit */unsigned int) (+(((unsigned long long int) max((((/* implicit */unsigned long long int) arr_44 [i_16] [i_15] [i_14])), (212148304607265273ULL))))));
                }
            } 
        } 
        arr_51 [i_14] [3] = min((max((arr_47 [i_14 - 2] [(short)0] [i_14] [i_14]), (max((255), (((/* implicit */int) arr_44 [i_14] [2] [i_14 + 2])))))), (((/* implicit */int) (unsigned char)204)));
    }
    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        var_46 &= ((/* implicit */_Bool) arr_54 [11]);
        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(arr_52 [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_17])))))) : (max((4294967290U), (((/* implicit */unsigned int) 2147483647)))))))))));
        var_48 = ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned char) arr_52 [i_17]))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_17])) ? (arr_54 [i_17]) : (((/* implicit */unsigned int) -1975278979))))) > (min((5834818968496210226ULL), (((/* implicit */unsigned long long int) arr_53 [i_17])))))))));
        /* LoopSeq 2 */
        for (int i_18 = 1; i_18 < 17; i_18 += 4) 
        {
            var_49 = ((/* implicit */long long int) min((((max((6ULL), (6640142721794383596ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-11106), (((/* implicit */short) arr_56 [i_17] [i_17] [i_18])))))))), (((/* implicit */unsigned long long int) min((arr_54 [i_17]), (((/* implicit */unsigned int) (short)2662)))))));
            var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_53 [i_17]))));
        }
        for (int i_19 = 2; i_19 < 18; i_19 += 2) 
        {
            var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_17] [i_17] [i_19 - 1])))))));
            var_52 -= 1787185946488092261ULL;
            var_53 ^= ((/* implicit */unsigned long long int) ((unsigned short) max((arr_56 [i_17] [i_19 - 2] [i_19]), (arr_56 [i_17] [i_17] [i_19]))));
            arr_60 [i_19 - 1] [i_19 - 1] [i_19 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_59 [(short)15] [i_19] [i_19])) <= (((/* implicit */int) (!(((/* implicit */_Bool) 14072155334315969686ULL)))))));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (short i_21 = 1; i_21 < 18; i_21 += 3) 
                {
                    for (unsigned int i_22 = 4; i_22 < 18; i_22 += 3) 
                    {
                        {
                            var_54 = ((/* implicit */short) ((int) 18185304835046574317ULL));
                            var_55 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_54 [i_17]))))), (arr_67 [18ULL] [i_17] [12ULL] [18ULL] [12ULL] [i_21] [i_21])));
                            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_19 - 1] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-24118)), (-5)))) : (min((((/* implicit */unsigned long long int) -574872542)), (arr_65 [i_17])))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))))));
                            arr_69 [i_19 - 1] [i_21] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)4)), (arr_55 [(unsigned short)15])))), ((~(14546208735853359715ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_56 [12U] [i_19 - 2] [i_22 - 4])), ((~(((/* implicit */int) arr_56 [i_17] [(signed char)17] [(unsigned short)5])))))))));
                        }
                    } 
                } 
                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_56 [i_19 - 1] [i_19 + 1] [i_19 + 1])))), (max((((/* implicit */int) (!(arr_57 [(unsigned char)13])))), (((int) arr_64 [(short)18] [(short)18] [i_20] [18ULL])))))))));
                /* LoopSeq 3 */
                for (int i_23 = 1; i_23 < 18; i_23 += 4) 
                {
                    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned int) (_Bool)1))))) ? (((/* implicit */int) arr_71 [i_17] [i_19])) : ((-(max((-83285342), (arr_52 [i_17])))))));
                    arr_73 [i_23] [i_20] [i_19] [7ULL] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_63 [i_23 + 1] [i_17] [i_17] [i_19 - 1])), (max((arr_66 [i_23] [i_17] [i_19] [i_17]), (17315678332868618844ULL))))));
                    var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) (+(arr_62 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))));
                }
                /* vectorizable */
                for (unsigned short i_24 = 2; i_24 < 18; i_24 += 1) 
                {
                    arr_77 [i_24] [i_17] [i_19 - 1] [i_17] = ((/* implicit */unsigned long long int) ((unsigned char) arr_66 [i_17] [i_17] [i_19 + 1] [i_24 - 2]));
                    var_60 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1519828566)) ? (arr_58 [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_24] [i_19 + 1] [i_20]))))));
                    arr_78 [i_17] [i_17] [i_19] [i_17] [i_20] [i_24] = ((/* implicit */unsigned short) (unsigned char)253);
                }
                for (unsigned int i_25 = 0; i_25 < 19; i_25 += 3) 
                {
                    arr_83 [i_25] [i_19 - 2] [i_19] [i_19 - 2] [7ULL] = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) 430825984945911210ULL)));
                    arr_84 [i_17] [i_19] [(unsigned short)3] [13] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(-8487724946691240516LL))))))));
                    var_61 += ((/* implicit */int) arr_64 [i_17] [i_17] [i_19] [i_19]);
                    var_62 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1001825447253733537ULL))));
                }
            }
            for (long long int i_26 = 2; i_26 < 16; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 3) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_63 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_81 [i_28] [i_27] [(signed char)4] [i_19 - 2] [i_17]))), (arr_74 [0ULL] [i_28] [(_Bool)1] [i_26] [i_19 - 2] [i_17])))), (min((17444918626455818095ULL), (((/* implicit */unsigned long long int) (unsigned char)254)))));
                            var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) min((max((((/* implicit */int) arr_71 [i_26 + 2] [i_19 - 1])), ((+(1561865248))))), (min((((/* implicit */int) ((1887710306) <= (((/* implicit */int) arr_82 [i_26]))))), ((~(arr_63 [(unsigned short)4] [i_26] [0ULL] [i_27]))))))))));
                        }
                    } 
                } 
                var_65 = ((/* implicit */unsigned short) arr_80 [i_19 - 1] [i_26 - 2] [(signed char)15]);
                var_66 += ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_90 [i_17] [(unsigned char)12] [i_19 - 1] [16LL] [8LL] [i_19])))) ? (min((((/* implicit */unsigned long long int) 251)), (17444918626455818095ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)88)), (arr_58 [i_17]))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_26 + 3] [i_26 + 2] [i_19] [5] [10LL] [i_17])) ? (arr_63 [(signed char)10] [i_26] [i_26] [i_26]) : (((/* implicit */int) (unsigned char)230))))), ((+(16900583228028405923ULL))))) : (((unsigned long long int) (!(((/* implicit */_Bool) arr_66 [10LL] [i_26] [(signed char)1] [i_17])))))));
            }
        }
    }
    for (unsigned long long int i_29 = 1; i_29 < 10; i_29 += 4) 
    {
        arr_97 [i_29] [i_29] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) min((arr_90 [i_29] [7] [i_29 + 1] [18ULL] [11ULL] [i_29]), (arr_55 [i_29])))))));
        var_67 = ((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) arr_76 [(unsigned short)15] [(unsigned short)15] [i_29] [i_29 + 3]))) ? (arr_42 [i_29]) : (((/* implicit */int) max((arr_94 [i_29]), (((/* implicit */short) arr_76 [i_29] [i_29 + 3] [(unsigned char)15] [(unsigned char)15]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -1613653243)), (arr_46 [i_29])))))))));
    }
}
