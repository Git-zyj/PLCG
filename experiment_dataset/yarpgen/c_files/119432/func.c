/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119432
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((var_16), (var_8)));
            var_17 = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (399237161U)));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)22])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_12) ? (((/* implicit */long long int) var_11)) : (var_2))))))));
        }
        for (int i_2 = 1; i_2 < 23; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 399237157U)) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (short)10657))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 2) 
                {
                    var_20 |= ((/* implicit */unsigned short) (~(9223372036854775799LL)));
                    var_21 -= ((((/* implicit */_Bool) 399237175U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24539))) : (210900307U));
                    var_22 = ((/* implicit */short) ((long long int) var_15));
                    var_23 = (+((-(var_6))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_4 - 4])))));
                        var_25 &= ((/* implicit */signed char) (~(((/* implicit */int) (short)-10672))));
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)65)) >= (((/* implicit */int) arr_9 [i_0 + 1] [i_2 - 1] [i_6 + 3]))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])) : (((((/* implicit */int) (unsigned char)224)) >> (((var_2) + (455491798579005190LL)))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_8] [i_6 + 1] [i_6] [i_6 - 1] [i_2 + 1] [i_0 + 3])) / (var_11)));
                        var_29 = ((/* implicit */unsigned int) (signed char)-30);
                        var_30 = var_0;
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        var_31 &= ((/* implicit */short) (+(var_10)));
                        var_32 = ((/* implicit */unsigned long long int) -7942242744406430290LL);
                    }
                    var_33 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)3453)) : (((/* implicit */int) (unsigned short)31386))))) || (var_7)));
                }
                var_35 *= ((/* implicit */signed char) var_14);
            }
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (+(min((2340115611U), (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (arr_19 [i_0] [i_0 + 4] [(unsigned char)9] [i_0])))))))))));
        }
        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned long long int) ((unsigned int) (short)-10672));
            /* LoopSeq 3 */
            for (signed char i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */int) (unsigned char)126))));
                var_39 = ((/* implicit */signed char) ((_Bool) 7942242744406430275LL));
                var_40 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647LL))))));
            }
            /* vectorizable */
            for (signed char i_12 = 2; i_12 < 20; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_13 = 2; i_13 < 23; i_13 += 2) 
                {
                    for (unsigned char i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_41 *= var_0;
                            var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
            }
            for (signed char i_15 = 2; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_41 [i_10] [i_0] [i_15] [i_10] [i_0 + 1])) : (((/* implicit */int) (short)-18362))))) ? (((/* implicit */int) arr_20 [i_15] [i_0] [i_10] [i_0])) : (((((/* implicit */_Bool) 399237169U)) ? (((/* implicit */int) arr_6 [i_0] [i_10] [i_0])) : (((/* implicit */int) var_0))))))));
                var_45 = ((/* implicit */_Bool) max(((~((~(((/* implicit */int) var_8)))))), (((/* implicit */int) var_12))));
                var_46 = ((/* implicit */long long int) (signed char)-105);
                var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_0] [i_10] [i_10] [i_15])) ? (((/* implicit */long long int) var_11)) : (var_14))) - (min((-2LL), (((/* implicit */long long int) (unsigned char)174))))));
                var_48 = ((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [17] [i_0] [i_0]);
            }
        }
        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 1) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 3895730126U)), (629573270447182364ULL))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                for (unsigned int i_18 = 1; i_18 < 22; i_18 += 4) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) 3895730143U);
                        var_51 = ((/* implicit */short) ((long long int) arr_3 [i_0 + 2] [i_16 + 1]));
                        var_52 &= ((/* implicit */short) var_0);
                    }
                } 
            } 
        }
        var_53 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (short)255)) / (var_6)))), (((912135885U) * (var_10))))) / (399237177U)));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 21; i_19 += 4) 
    {
        var_54 = 0U;
        /* LoopSeq 2 */
        for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
        {
            var_55 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)184))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 3; i_21 < 20; i_21 += 2) 
            {
                var_56 |= ((/* implicit */short) (((_Bool)1) ? (612648374) : (((/* implicit */int) (unsigned char)237))));
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_63 [i_21 - 3] [i_21 - 3]))));
                    var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-30)) / (612648379)));
                    var_59 = ((/* implicit */unsigned char) arr_53 [i_22] [i_19] [i_19] [i_19]);
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_60 *= ((/* implicit */short) (~(((/* implicit */int) arr_52 [i_21 - 2] [i_21 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        var_61 = ((/* implicit */int) ((unsigned int) (+(var_9))));
                        var_62 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_58 [i_21 - 3] [i_21 - 3]))));
                    }
                    var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) var_14))));
                    var_64 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)82)) * (((((/* implicit */int) (unsigned char)82)) / (((/* implicit */int) var_15))))));
                    var_65 = ((/* implicit */_Bool) (+(var_10)));
                }
                var_66 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7))));
            }
        }
        for (long long int i_25 = 0; i_25 < 21; i_25 += 4) 
        {
            var_67 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_74 [i_19] [i_25] [(unsigned short)12] [i_25] [i_25] [i_19]))));
            /* LoopSeq 1 */
            for (unsigned char i_26 = 3; i_26 < 19; i_26 += 2) 
            {
                var_68 = ((/* implicit */_Bool) arr_62 [i_19] [i_25] [i_26 + 2]);
                var_69 = ((/* implicit */int) ((signed char) arr_50 [i_19] [i_25] [i_19]));
                var_70 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)51))));
            }
        }
        /* LoopSeq 1 */
        for (short i_27 = 1; i_27 < 19; i_27 += 2) 
        {
            /* LoopNest 3 */
            for (short i_28 = 1; i_28 < 20; i_28 += 2) 
            {
                for (unsigned char i_29 = 1; i_29 < 20; i_29 += 2) 
                {
                    for (unsigned char i_30 = 1; i_30 < 19; i_30 += 3) 
                    {
                        {
                            var_71 |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-13)) + (21)))));
                            var_72 = ((/* implicit */unsigned short) var_15);
                        }
                    } 
                } 
            } 
            var_73 = ((/* implicit */signed char) min((var_73), (((/* implicit */signed char) var_4))));
            /* LoopSeq 2 */
            for (unsigned short i_31 = 0; i_31 < 21; i_31 += 2) 
            {
                var_74 |= ((/* implicit */unsigned int) ((var_4) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)0)))))));
                var_75 = ((/* implicit */int) min((var_75), (((/* implicit */int) ((unsigned long long int) (unsigned char)22)))));
            }
            for (long long int i_32 = 0; i_32 < 21; i_32 += 3) 
            {
                var_76 *= ((/* implicit */unsigned short) ((9660628191865424636ULL) & (((/* implicit */unsigned long long int) ((var_12) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                var_77 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_48 [i_27] [i_27]))));
                /* LoopSeq 1 */
                for (long long int i_33 = 1; i_33 < 20; i_33 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_34 = 2; i_34 < 19; i_34 += 2) 
                    {
                        var_78 = (i_27 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)224)) ^ (((/* implicit */int) var_1)))) << ((((-(((/* implicit */int) arr_35 [i_27])))) - (14651)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)224)) ^ (((/* implicit */int) var_1)))) << ((((((-(((/* implicit */int) arr_35 [i_27])))) - (14651))) + (8034))))));
                        var_79 = ((/* implicit */unsigned char) (signed char)-46);
                        var_80 = ((/* implicit */short) (!(((/* implicit */_Bool) 7637710511570176396ULL))));
                    }
                    for (unsigned short i_35 = 0; i_35 < 21; i_35 += 3) 
                    {
                        var_81 |= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-3245)) ^ (((/* implicit */int) arr_18 [i_19] [i_27] [(short)12] [i_19])))) ^ (((/* implicit */int) var_1))));
                        var_82 = ((/* implicit */short) (~((~(((/* implicit */int) arr_33 [i_35] [i_35]))))));
                        var_83 = (signed char)41;
                        var_84 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-1))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)32751))));
                    }
                    var_85 = ((/* implicit */unsigned short) ((arr_67 [i_27] [i_27] [(unsigned char)18] [i_27]) * (570125067U)));
                    var_86 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16908)))));
                    var_87 |= ((/* implicit */unsigned int) (unsigned char)220);
                }
            }
            var_88 = ((((/* implicit */_Bool) ((unsigned int) (short)255))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 18U)))) : ((-(var_10))));
        }
        var_89 = 449616499;
        var_90 = var_3;
    }
    for (long long int i_36 = 1; i_36 < 17; i_36 += 1) 
    {
        var_91 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) max((var_0), (var_15))))))));
        var_92 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)7)) - (((/* implicit */int) ((_Bool) (unsigned char)38))))) + ((+(((var_9) ^ (-449616500)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_37 = 0; i_37 < 19; i_37 += 1) 
        {
            var_93 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_19 [i_36 + 2] [i_36 + 1] [i_36] [i_36 + 2]) + (((/* implicit */int) var_7)))))));
            var_94 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [(short)17] [i_36 + 1]))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_38 = 0; i_38 < 22; i_38 += 3) 
    {
        var_95 = ((/* implicit */unsigned char) max((var_95), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)20)) < ((+(((/* implicit */int) arr_110 [18LL])))))))));
        var_96 = ((/* implicit */unsigned char) min((var_96), (((/* implicit */unsigned char) (~(arr_29 [i_38]))))));
        var_97 = ((/* implicit */_Bool) min((var_97), (var_7)));
        var_98 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_35 [i_38]))))));
    }
    var_99 = ((/* implicit */unsigned short) (-(((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_15)))) & (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_1)) - (49)))))))));
}
