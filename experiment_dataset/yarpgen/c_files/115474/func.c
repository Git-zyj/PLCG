/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115474
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) max(((unsigned char)157), (((/* implicit */unsigned char) var_4))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_12) & (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((signed char) (signed char)116)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)16693)) && (((/* implicit */_Bool) 7629407705074460613ULL)))))))) ? (((long long int) -1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1057247834)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_9 [i_1] |= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (arr_5 [i_1]))));
        var_21 = min((((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (4607587411606510646LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_16))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)142)) ? (403667692) : (((/* implicit */int) (unsigned short)14))));
                        arr_17 [i_1] [i_2] [i_3] [i_2] = ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_10 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)192))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_23 = (~(((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))));
                            arr_20 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = (~(((/* implicit */int) (unsigned char)44)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_23 [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_4 - 1] [i_3] [i_3]))));
                            arr_24 [i_1] [i_2] = ((/* implicit */unsigned int) (unsigned char)142);
                            arr_25 [i_6] [i_3] [i_6] &= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            arr_26 [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */long long int) arr_15 [i_1] [i_2] [i_3] [i_2] [i_6]);
                            arr_27 [i_6] [i_6] [i_3] [i_4 + 1] [i_6] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_4 + 1] [i_4 + 2] [i_6] [i_3])) : (((/* implicit */int) (short)-10591))));
                        }
                    }
                } 
            } 
            arr_28 [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_1]);
            /* LoopSeq 1 */
            for (unsigned int i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) -7695862605206027699LL)));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_36 [i_7] [i_2] [i_7 + 4] [i_7 + 4] [i_2] [i_7 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (arr_2 [i_2])));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (((((/* implicit */_Bool) (signed char)100)) ? (7695862605206027694LL) : (((/* implicit */long long int) 387632520U))))));
                            arr_37 [i_1] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-7203033707434768198LL) : (((/* implicit */long long int) 764238009U))))) ^ (((arr_6 [i_1] [i_1]) & (((/* implicit */unsigned long long int) var_13))))));
                            arr_38 [i_9] [i_2] [i_7] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-68)) & (var_14)))) ? (((/* implicit */int) arr_15 [i_7] [i_7 - 2] [i_7 + 3] [i_2] [i_7 - 2])) : (var_14)));
                            var_26 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (arr_12 [i_7 + 3] [i_7] [i_7 + 2] [i_7])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_41 [i_1] [i_10] [i_10] [i_10] [i_1] [i_1] |= ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) (unsigned short)21511)) : (1830102045))))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(arr_32 [i_11] [i_7 - 2] [i_7 - 2] [i_2] [i_1]))))));
                        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_7 + 2] [i_7 + 1] [i_7 + 4] [i_11] [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 4] [i_7 + 3] [i_11] [i_7 + 1])) : (((/* implicit */int) arr_15 [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_10] [i_7 + 2]))));
                        arr_44 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2]))) | (((((/* implicit */_Bool) -1090761362)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16613331098438354068ULL)))));
                        var_29 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1532738040U)) ? (((/* implicit */int) (unsigned short)40063)) : (((/* implicit */int) arr_14 [i_1] [i_2] [i_7] [i_10] [i_11] [i_2])))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(1057247839))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        arr_47 [i_1] [i_2] [i_7] [i_2] [i_12] = ((/* implicit */int) 3ULL);
                        arr_48 [i_1] [i_2] [i_1] [i_10] [i_2] = ((/* implicit */signed char) arr_33 [i_2]);
                        arr_49 [i_1] [i_7] [i_7] [i_1] [i_12] [i_2] = 3486607534U;
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_2] [i_2] [i_7 + 1])) % ((~(((/* implicit */int) (unsigned short)65526))))));
                    }
                }
                var_32 &= ((/* implicit */int) (unsigned short)40063);
            }
        }
        for (unsigned char i_13 = 4; i_13 < 19; i_13 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((unsigned int) (~((~(((/* implicit */int) var_8))))))))));
            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
        }
    }
    for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            for (long long int i_16 = 2; i_16 < 20; i_16 += 3) 
            {
                for (signed char i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    {
                        arr_62 [i_15] [i_15] = ((((/* implicit */_Bool) min((arr_52 [i_14 + 3]), (arr_52 [i_16 + 2])))) ? (((/* implicit */int) (unsigned short)63518)) : (((/* implicit */int) arr_60 [i_15] [i_15] [i_15])));
                        var_35 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_52 [i_14 + 1])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)201)))));
                    }
                } 
            } 
        } 
        arr_63 [i_14] [i_14] = ((/* implicit */short) arr_57 [i_14] [i_14] [i_14 + 1] [i_14 + 2]);
        arr_64 [i_14] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_53 [i_14])), (var_19)))) ? (min((16U), (((/* implicit */unsigned int) (signed char)-123)))) : (((((/* implicit */_Bool) var_2)) ? (arr_52 [i_14]) : (var_19))))));
    }
    var_36 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))));
    var_37 &= min((7190325389251298870LL), (((/* implicit */long long int) (_Bool)1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_18 = 2; i_18 < 6; i_18 += 2) 
    {
        var_38 += ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
        var_39 = ((/* implicit */signed char) 14035751984987851637ULL);
        arr_68 [i_18] [i_18] &= ((/* implicit */_Bool) ((((unsigned long long int) arr_14 [i_18] [i_18] [i_18] [i_18 + 4] [i_18] [i_18])) % (((/* implicit */unsigned long long int) arr_58 [i_18] [i_18 - 2] [i_18 - 2] [i_18 + 4]))));
    }
    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        var_40 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_69 [i_19] [i_19])) ? (((/* implicit */int) arr_70 [i_19])) : (((/* implicit */int) var_3)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (18446744073709551597ULL))))))) ? ((((~(var_14))) | (((((/* implicit */int) arr_70 [i_19])) & (((/* implicit */int) var_17)))))) : ((~(((/* implicit */int) min((arr_70 [i_19]), (arr_69 [i_19] [i_19])))))));
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_12)))))), (var_15)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_20 = 3; i_20 < 22; i_20 += 4) /* same iter space */
        {
            var_42 = (~(((/* implicit */int) arr_72 [i_20 + 1])));
            var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_20 - 1] [i_20 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_20 + 1] [i_20 - 1]))) : (1126598859412848761LL))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 22; i_21 += 4) 
            {
                for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_19] [i_21 + 1] [i_20 - 1] [i_21])) != (((/* implicit */int) arr_69 [i_19] [i_21 - 1])))))));
                        arr_78 [i_19] [i_20] [i_21 - 1] [i_22] = ((/* implicit */long long int) (((~(4294967280U))) >> (((var_19) - (2504737169U)))));
                        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_73 [i_19] [i_20 + 1] [i_21] [i_22]))))))));
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) -1352354993426013838LL))));
                    }
                } 
            } 
        }
        for (long long int i_23 = 3; i_23 < 22; i_23 += 4) /* same iter space */
        {
            var_48 |= (~(((long long int) arr_81 [i_19] [i_23 - 3] [i_19])));
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 23; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    {
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((long long int) (_Bool)1))));
                        var_50 += ((/* implicit */short) var_4);
                    }
                } 
            } 
            var_51 *= ((/* implicit */unsigned int) (_Bool)1);
        }
        for (signed char i_26 = 2; i_26 < 22; i_26 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_27 = 2; i_27 < 19; i_27 += 1) 
            {
                for (unsigned short i_28 = 0; i_28 < 23; i_28 += 2) 
                {
                    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                    {
                        {
                            arr_95 [i_19] [i_26] [i_28] = ((/* implicit */short) var_17);
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((min((((arr_77 [i_19] [i_19] [i_27 + 4] [i_19]) - (((/* implicit */long long int) 2762229256U)))), (((((/* implicit */_Bool) arr_92 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) ? (arr_77 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) < (((/* implicit */long long int) (~((~(-785376560)))))))))));
                            arr_96 [i_26] [i_27] [i_26] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)63518))));
                            var_53 *= ((/* implicit */signed char) ((int) (~((~(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            } 
            var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_11)))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_77 [i_19] [i_19] [i_19] [i_19])))))))));
        }
        /* LoopNest 2 */
        for (signed char i_30 = 0; i_30 < 23; i_30 += 1) 
        {
            for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
            {
                {
                    var_55 ^= ((/* implicit */unsigned char) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned short)2018), (((/* implicit */unsigned short) arr_85 [i_19])))))));
                    arr_103 [i_31 - 1] [i_31] [i_31] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_19] [i_30] [i_31]))) : (((unsigned int) 1532738040U)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_19] [i_19] [i_19])) ? (-7695862605206027695LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))) ? (((((/* implicit */int) arr_72 [i_19])) * (((/* implicit */int) (unsigned char)13)))) : (((/* implicit */int) (_Bool)1)))) - (1158)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_32 = 0; i_32 < 23; i_32 += 1) 
                    {
                        for (unsigned long long int i_33 = 0; i_33 < 23; i_33 += 1) 
                        {
                            {
                                var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) min((min((-1352354993426013838LL), (7695862605206027694LL))), (((/* implicit */long long int) (unsigned short)37065)))))));
                                var_57 |= ((/* implicit */short) min((((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) 2762229256U)))), (((/* implicit */unsigned long long int) var_10))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_34 = 1; i_34 < 22; i_34 += 3) 
                    {
                        var_58 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 381481100607276074ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_34 - 1] [i_34 - 1] [i_19]))) : (-3710572844199634075LL))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 7695862605206027726LL))))))));
                        arr_110 [i_31] [i_31] = ((/* implicit */unsigned short) arr_107 [i_19] [i_31] [i_30] [i_31] [i_31]);
                    }
                }
            } 
        } 
        var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (7695862605206027695LL)))) ? (((((/* implicit */_Bool) ((unsigned long long int) -7695862605206027695LL))) ? ((~(((/* implicit */int) arr_72 [i_19])))) : ((~(((/* implicit */int) (unsigned short)37065)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28471)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-806290952479214310LL)))) ? (((/* implicit */int) min((arr_105 [i_19] [i_19] [i_19] [i_19]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) var_4))))));
    }
    var_60 = min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */_Bool) var_5)) ? (811232535U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((((/* implicit */int) ((unsigned short) (_Bool)1))) < (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))))));
}
