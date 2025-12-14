/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141985
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(var_14))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)31824)))))))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned char) min((min(((-(((/* implicit */int) (short)31801)))), (((var_4) + (((/* implicit */int) var_10)))))), (((/* implicit */int) (short)-31802))));
                    var_18 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_6))))) % (var_2));
                    var_19 |= var_2;
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_1] [(signed char)10] [i_3] [i_4] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (short)-31825))))) ? (max((((/* implicit */int) var_9)), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_1)) + (8828))))))) : ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) var_6))))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)-6))))) % (((((/* implicit */int) (signed char)5)) & (((/* implicit */int) (signed char)5))))));
                    }
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) var_6)))))));
                    var_22 = var_3;
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)31801)))) ? (((((/* implicit */int) var_8)) | (var_12))) : (((/* implicit */int) (short)31830))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), ((signed char)-95)))) ? ((~(((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) var_11)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((var_7), (((/* implicit */unsigned int) (~((~(var_2)))))))))));
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)31808))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))));
        arr_17 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)94))));
    }
    for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_11))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_27 -= ((/* implicit */signed char) (short)-5744);
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (short)31800)) | (((/* implicit */int) (short)31823))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_29 = (!((!(((/* implicit */_Bool) var_8)))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (var_12) : (((/* implicit */int) var_3))))))))));
                    }
                    for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) var_14);
                        var_32 = ((/* implicit */long long int) (short)-8669);
                        var_33 = (signed char)0;
                    }
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        var_34 |= (!(((/* implicit */_Bool) var_0)));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-8669))));
                        var_36 -= ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((/* implicit */int) (signed char)0))));
                        arr_35 [i_8] [i_8] [i_8] [16LL] [i_8] [i_8] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))));
                        var_37 = ((/* implicit */unsigned int) ((((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)120)))) & (((/* implicit */int) (signed char)34))));
                    }
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) (short)-19468)))));
                        var_39 *= ((/* implicit */signed char) ((((/* implicit */int) var_0)) >> ((((+(((/* implicit */int) var_10)))) + (7366)))));
                    }
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                    {
                        var_40 |= (signed char)0;
                        arr_40 [i_14] [i_8] [i_8] [i_7] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-19459)) ? (((/* implicit */int) (short)-19449)) : (((/* implicit */int) var_9))));
                        var_41 -= ((/* implicit */signed char) (~(((/* implicit */int) (short)8675))));
                        var_42 = ((/* implicit */signed char) var_3);
                        arr_41 [i_9] [i_14] [i_14] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((-978580437) >= (((/* implicit */int) (signed char)63)))))));
                    }
                    var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-43)))))) >= (1495303825U)));
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) 2893204668U)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))) : (var_2)));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_44 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - ((-9223372036854775807LL - 1LL))));
                arr_45 [i_15] [(_Bool)1] [6U] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))));
                var_45 -= ((/* implicit */unsigned char) (~(var_15)));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_46 |= ((/* implicit */unsigned char) (+((+(-79310696351303503LL)))));
                var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((((/* implicit */int) (short)8174)) - (((((/* implicit */_Bool) (short)-19453)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_8)))))))));
                var_48 = ((/* implicit */unsigned char) (signed char)-65);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */_Bool) (unsigned char)0);
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)8692))))) == (1284603263U)));
                            var_51 *= ((/* implicit */signed char) var_4);
                            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-19435)))))));
                            var_53 &= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((-(var_4))) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (_Bool)0)) : (var_12)))));
            }
            var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
            /* LoopSeq 1 */
            for (unsigned int i_20 = 3; i_20 < 24; i_20 += 4) 
            {
                var_57 = ((/* implicit */int) max((var_57), ((-(((/* implicit */int) (short)-19472))))));
                var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)71))))))))));
            }
        }
        for (unsigned int i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (short)8664)) : (((/* implicit */int) (signed char)-72)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_23 = 0; i_23 < 25; i_23 += 4) 
                {
                    var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) var_2))));
                    var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))));
                    arr_66 [i_21] &= ((/* implicit */unsigned int) var_13);
                }
                for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 2; i_25 < 21; i_25 += 4) 
                    {
                        var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) (_Bool)0))));
                        var_63 = ((/* implicit */signed char) var_3);
                    }
                    for (unsigned int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        var_64 = ((/* implicit */long long int) (signed char)-72);
                        var_65 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)204)) & (((/* implicit */int) (unsigned char)0))));
                        var_66 ^= ((/* implicit */short) (+(79310696351303503LL)));
                        var_67 = ((/* implicit */signed char) var_4);
                    }
                    var_68 |= ((/* implicit */unsigned int) (signed char)0);
                    var_69 -= ((/* implicit */int) (signed char)-28);
                    var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) (-(((/* implicit */int) (signed char)9)))))));
                }
                var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_10))));
                arr_75 [i_6] [i_21] = (~(((/* implicit */int) var_0)));
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 25; i_28 += 2) 
                    {
                        {
                            var_72 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                            var_73 = ((/* implicit */signed char) min((var_73), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (79310696351303518LL))))))));
                            var_74 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3441)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1791096890U)) ? (-2267245979936448325LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_75 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            }
            var_76 = ((/* implicit */short) 4275116579U);
            /* LoopSeq 3 */
            for (signed char i_29 = 4; i_29 < 24; i_29 += 2) /* same iter space */
            {
                var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) (!(((1774520130579936258LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-19439))))))))));
                var_78 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)104)) | (var_4))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 4213985319U)))))));
            }
            for (signed char i_30 = 4; i_30 < 24; i_30 += 2) /* same iter space */
            {
                var_79 &= (short)-8675;
                var_80 = ((/* implicit */short) var_14);
                var_81 &= ((/* implicit */unsigned int) ((min((var_15), (((/* implicit */long long int) (signed char)10)))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))));
                var_82 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-38))))) ? (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))))));
                var_83 |= (signed char)-10;
            }
            for (signed char i_31 = 4; i_31 < 24; i_31 += 2) /* same iter space */
            {
                var_84 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) 79310696351303505LL)) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) -8519490836779888748LL)))) && ((!((!(((/* implicit */_Bool) (signed char)-12))))))));
                arr_91 [i_31] [i_21] [i_6] [i_6 - 3] = ((/* implicit */short) var_9);
                var_85 = ((/* implicit */short) (~((~(79310696351303493LL)))));
            }
        }
        for (short i_32 = 0; i_32 < 25; i_32 += 3) 
        {
            var_86 *= (!(((/* implicit */_Bool) var_4)));
            var_87 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)20352))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20345)))))));
            /* LoopSeq 2 */
            for (short i_33 = 0; i_33 < 25; i_33 += 1) 
            {
                var_88 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) var_10)), (-6494318900575381703LL)))));
                var_89 = ((/* implicit */short) (~(((/* implicit */int) ((-79310696351303520LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_35 = 0; i_35 < 25; i_35 += 4) 
                {
                    var_90 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_9)))))));
                    var_91 = ((/* implicit */signed char) min((((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-17))))))), (((((-79310696351303501LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (122)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_36 = 0; i_36 < 25; i_36 += 4) 
                    {
                        var_92 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)5))))));
                        var_93 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) * (-79310696351303493LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21872)) ? (((/* implicit */int) var_3)) : (var_2))))));
                    }
                    for (short i_37 = 3; i_37 < 23; i_37 += 3) 
                    {
                        var_94 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)23714), (((/* implicit */short) (signed char)-5))))) ? (((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 79310696351303493LL))))))))))));
                        var_95 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1851413389332738088LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? ((-(max((79310696351303476LL), (((/* implicit */long long int) (signed char)18)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))));
                        var_96 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(-79310696351303484LL)))))))));
                        var_97 -= ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(var_14))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32740)) - (((/* implicit */int) var_1))))))))));
                    }
                    var_98 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3454))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2)))))))));
                    arr_107 [i_32] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                }
                for (unsigned char i_38 = 0; i_38 < 25; i_38 += 2) 
                {
                    var_99 = max((((/* implicit */unsigned int) (~(max((((/* implicit */int) var_3)), (var_4)))))), ((+(19U))));
                    var_100 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)4))))));
                    var_101 *= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)12))));
                    var_102 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(79310696351303508LL)))) ? (((/* implicit */int) (signed char)-19)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))))));
                    var_103 = ((/* implicit */short) (+((+((-9223372036854775807LL - 1LL))))));
                }
                var_104 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            }
        }
    }
    var_105 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_14) + (4294967284U)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
    var_106 = ((/* implicit */signed char) max((var_106), (((/* implicit */signed char) var_1))));
}
