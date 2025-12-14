/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133277
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
    var_20 -= ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_21 += ((/* implicit */_Bool) (signed char)-92);
                        var_22 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) (signed char)35))))))));
                        arr_11 [i_1] [(signed char)2] [(signed char)2] [i_3] [i_2] |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)245))));
                        var_23 += ((/* implicit */short) (signed char)127);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_25 += ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
                            arr_16 [i_0] [i_0] [i_0] [i_1] = (-(((/* implicit */int) (unsigned short)9362)));
                            var_26 = (~(((/* implicit */int) (unsigned char)46)));
                        }
                        var_27 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */int) (!((_Bool)1)));
                            var_29 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-114))))));
                        }
                        var_30 = ((/* implicit */signed char) (unsigned char)216);
                        var_31 ^= (!(((/* implicit */_Bool) -161249530)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_32 = (-((-((+(((/* implicit */int) (short)-32748)))))));
                        arr_25 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = (_Bool)1;
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_1] [5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-60))));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */long long int) (signed char)-69);
                                arr_33 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (signed char)70);
                            }
                        } 
                    } 
                    var_34 = (short)-21537;
                }
            } 
        } 
        var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(1695310525)))))))));
        var_36 += ((/* implicit */unsigned char) (signed char)-44);
    }
    for (unsigned short i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))))))))));
            var_37 = ((/* implicit */int) (unsigned short)12887);
        }
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            arr_44 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            arr_45 [i_13] = ((/* implicit */_Bool) (short)-1612);
            /* LoopSeq 1 */
            for (int i_14 = 4; i_14 < 11; i_14 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        arr_52 [i_11] [i_13] [i_15] [i_13] [i_11] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)90))))));
                        arr_53 [i_15] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) (short)16353))))))));
                        var_38 = ((/* implicit */long long int) -1182212066);
                        var_39 += ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) (unsigned short)30807))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) (+(((/* implicit */int) (!((_Bool)1))))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (-(-1574549127))))));
                        arr_56 [i_11] [i_15] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) (unsigned short)28398);
                    }
                    for (int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_59 [(short)9] [(short)9] [(short)9] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (_Bool)0))))))));
                        arr_60 [i_11] [i_11] [i_11] [5] [i_11] [i_15] = ((/* implicit */signed char) (unsigned char)158);
                        arr_61 [i_15] [i_15] [i_15] [i_15] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)69))));
                        var_42 = ((/* implicit */_Bool) (short)22791);
                    }
                    /* LoopSeq 4 */
                    for (long long int i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)28)))))))));
                        arr_64 [i_19] &= ((/* implicit */signed char) -1014367771);
                    }
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 2) /* same iter space */
                    {
                        var_44 -= ((/* implicit */_Bool) (short)-1);
                        arr_68 [i_11] [(signed char)11] [i_11] [i_11] [i_15] = 1839094983;
                        var_45 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-29))))))))));
                    }
                    for (short i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        arr_71 [i_11] [i_11] [i_15] [i_11] [i_11] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-87))))));
                        var_46 = ((/* implicit */signed char) (~(-8433871665744187303LL)));
                        var_47 += ((/* implicit */_Bool) (unsigned short)34729);
                    }
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)212))));
                        var_49 *= ((/* implicit */unsigned long long int) 2680288839306971148LL);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned short) (+(9385178985529798448ULL)));
                        var_51 = ((/* implicit */signed char) (~((~(728873515)))));
                        arr_78 [i_11] [i_11] [i_14] [i_15] [i_23] [i_11] = ((/* implicit */int) (unsigned short)10087);
                    }
                }
                for (signed char i_24 = 0; i_24 < 13; i_24 += 4) /* same iter space */
                {
                    var_52 |= (-((-(1740401908))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)1612))));
                        var_54 += ((/* implicit */signed char) (~((~(((/* implicit */int) (short)30329))))));
                        var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30807))));
                    }
                    for (signed char i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        var_56 *= ((/* implicit */unsigned long long int) -1574549111);
                        var_57 = ((/* implicit */short) (unsigned short)30807);
                        var_58 = (~((~((-(((/* implicit */int) (signed char)-7)))))));
                    }
                    /* vectorizable */
                    for (signed char i_27 = 1; i_27 < 11; i_27 += 4) 
                    {
                        var_59 = ((/* implicit */signed char) (short)32763);
                        var_60 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)0))))));
                        arr_90 [i_11] [i_13] [i_13] [i_13] [i_27] = ((/* implicit */unsigned long long int) (short)1023);
                    }
                    arr_91 [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(-682885635))))))));
                }
                for (signed char i_28 = 0; i_28 < 13; i_28 += 4) /* same iter space */
                {
                    var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) (~((~((+(((/* implicit */int) (unsigned char)235)))))))))));
                    var_62 = 1574549118;
                }
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                {
                    var_63 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)21))))));
                    arr_98 [i_11] [i_29] [i_14] [(signed char)7] = ((/* implicit */_Bool) (+(11793914767749316620ULL)));
                }
                arr_99 [i_14] [i_14] [i_13] [i_11] = (_Bool)1;
                var_64 = ((/* implicit */int) (unsigned short)55449);
                arr_100 [i_14] [i_13] [i_11] [i_11] &= ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
            }
        }
        for (signed char i_30 = 0; i_30 < 13; i_30 += 2) 
        {
            arr_103 [i_11] [i_11] [i_30] = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_31 = 0; i_31 < 13; i_31 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_32 = 2; i_32 < 12; i_32 += 2) 
                {
                    var_65 += ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)142))))));
                    arr_109 [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)10087))));
                    arr_110 [i_32] [i_11] [i_30] [i_30] [8] [i_11] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -70886744))))));
                    var_66 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_33 = 4; i_33 < 12; i_33 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
                    {
                        arr_118 [i_11] [i_30] [i_31] [i_11] [i_31] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)3))))));
                        arr_119 [i_11] [i_30] [i_30] [i_33] [i_30] [i_34] &= ((/* implicit */long long int) (signed char)3);
                    }
                    for (unsigned char i_35 = 0; i_35 < 13; i_35 += 2) 
                    {
                        arr_122 [(_Bool)1] [(unsigned char)11] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)21))));
                        var_67 = ((/* implicit */unsigned long long int) min((var_67), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_68 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))));
                    }
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        arr_126 [i_36] [i_31] [i_31] [i_30] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-105))));
                        var_69 -= ((/* implicit */_Bool) (+(500052523)));
                        var_70 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        var_71 = (+((~(((/* implicit */int) (short)17212)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_37 = 2; i_37 < 12; i_37 += 1) 
                    {
                        arr_131 [i_37] [i_33] [i_37] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)3))));
                        arr_132 [i_33] [i_37] [i_31] [i_37] [(short)7] = ((/* implicit */short) (+((~(((/* implicit */int) (_Bool)1))))));
                        arr_133 [i_37] [i_37] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (short)13100))))));
                        arr_134 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_37] [i_37] = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                    }
                    for (long long int i_38 = 0; i_38 < 13; i_38 += 3) 
                    {
                        var_72 |= (-((+(((/* implicit */int) (signed char)-14)))));
                        var_73 -= ((/* implicit */short) (~((~(((/* implicit */int) (short)24))))));
                        arr_137 [(short)11] [i_31] [i_31] [i_31] [i_38] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                        arr_138 [i_11] [i_11] [i_38] [i_38] [i_38] [i_38] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121)))))));
                        var_74 *= ((/* implicit */unsigned long long int) (unsigned short)41064);
                    }
                    /* LoopSeq 1 */
                    for (short i_39 = 0; i_39 < 13; i_39 += 1) 
                    {
                        var_75 |= ((/* implicit */signed char) 500052523);
                        arr_142 [i_33] [i_33] [i_33] [i_33] [i_33] = (-((~(((/* implicit */int) (unsigned short)49148)))));
                    }
                    var_76 = ((/* implicit */int) max((var_76), (((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                {
                    var_77 = (-((-(((/* implicit */int) (_Bool)1)))));
                    var_78 += ((/* implicit */short) (+((+(((/* implicit */int) (short)-15610))))));
                }
                arr_145 [i_11] [7] [i_31] = ((/* implicit */short) 1056964608);
            }
            var_79 = ((/* implicit */signed char) -260324772);
            arr_146 [(_Bool)0] = ((/* implicit */signed char) (!((_Bool)1)));
        }
        for (short i_41 = 0; i_41 < 13; i_41 += 4) 
        {
            var_80 *= (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (unsigned short i_42 = 0; i_42 < 13; i_42 += 4) 
            {
                arr_152 [9] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-13100))))));
                var_81 = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) (unsigned short)34728))))))));
            }
            var_82 = ((/* implicit */unsigned short) (+((+((+(4ULL)))))));
            var_83 = ((/* implicit */int) min((var_83), (2013265920)));
        }
        var_84 = ((/* implicit */unsigned short) max((var_84), (((/* implicit */unsigned short) (_Bool)1))));
    }
    var_85 = (signed char)(-127 - 1);
}
