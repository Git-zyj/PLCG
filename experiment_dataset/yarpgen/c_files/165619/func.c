/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165619
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 4981366070226168679LL))));
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)47700);
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 3117185412U)) ? (12309755845228109146ULL) : (1961940285625475616ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (((-(1961940285625475644ULL))) < (min((14788160432403904773ULL), (((/* implicit */unsigned long long int) (unsigned short)47700))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_22 *= ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) 16484803788084075972ULL)))) ? (1961940285625475644ULL) : (((/* implicit */unsigned long long int) ((-959392408) / (-959392408)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(1961940285625475616ULL))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16484803788084075971ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1500641866U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 959392396)) ? (((/* implicit */unsigned int) 959392408)) : (var_0)))) < ((-(var_6)))))) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_24 += (+(3117185412U));
                            arr_18 [i_1] [i_2] [i_1 + 3] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (+(1941174741U))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned char) 1961940285625475644ULL)))))));
                var_26 = ((/* implicit */long long int) (-(3117185412U)));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -959392396)) ? (3117185380U) : (458597331U))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3335))) : (3782721034U)))));
                    var_28 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)19280), ((unsigned short)62179))))) * (((((/* implicit */_Bool) var_5)) ? (17490376542574984103ULL) : (3658583641305646839ULL))))), (((((/* implicit */unsigned long long int) (+(var_8)))) * (min((((/* implicit */unsigned long long int) var_11)), (1961940285625475644ULL))))));
                    var_29 = ((/* implicit */unsigned long long int) (signed char)-9);
                    /* LoopSeq 3 */
                    for (signed char i_7 = 4; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_30 -= ((/* implicit */unsigned int) var_15);
                        arr_24 [i_7] [i_2] [i_1] = ((/* implicit */long long int) min((14788160432403904758ULL), (16484803788084075980ULL)));
                        arr_25 [i_1 + 1] [i_2] [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(3324268379983467806ULL)))) ? (16484803788084075983ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -959392405)) ? (2951746859U) : (var_1)))))), (((/* implicit */unsigned long long int) ((1961940285625475636ULL) <= (((/* implicit */unsigned long long int) var_12)))))));
                    }
                    for (signed char i_8 = 4; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        arr_28 [i_8 + 2] [i_1 + 2] [i_8] [i_3] [i_8] [i_1 + 2] [i_1 + 2] &= ((min((((/* implicit */unsigned long long int) (short)-21633)), (1961940285625475632ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), ((_Bool)1))))));
                        arr_29 [i_1] [i_2] [i_2] [i_2] [8ULL] = ((/* implicit */unsigned short) ((unsigned long long int) (~(14788160432403904773ULL))));
                        var_31 &= ((/* implicit */_Bool) 1961940285625475644ULL);
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) 1961940285625475636ULL))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_6), (14788160432403904773ULL))) >= (min((((/* implicit */unsigned long long int) -2261256023150059810LL)), (1961940285625475635ULL))))))) % ((~(16484803788084075971ULL)))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) 3611449363U))));
                        var_35 *= ((/* implicit */unsigned int) 959392404);
                        var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)73))))) ? (var_12) : ((~(1054072612U)))))) + (((((/* implicit */_Bool) 16484803788084075969ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1961940285625475634ULL)))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1880126386)) / (1961940285625475644ULL)));
                        var_38 = ((/* implicit */short) (~(16484803788084075980ULL)));
                        var_39 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2732832397U)))) ? (1961940285625475644ULL) : (((/* implicit */unsigned long long int) var_5))));
                        var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)168))));
                        arr_38 [i_2] = ((/* implicit */int) (+(16484803788084075999ULL)));
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_41 = ((((/* implicit */_Bool) 2421622741136524994ULL)) ? (var_3) : (var_1));
                        var_42 &= ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)178)) ? (3611449371U) : (((/* implicit */unsigned int) 1312095520))))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_13))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)56283)))))));
                        var_45 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) <= (1708606089U))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_44 [i_1] [i_1] [i_1] [i_3] [i_1] [i_13] [i_2] = ((/* implicit */long long int) ((1961940285625475625ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_46 |= ((/* implicit */_Bool) ((1961940285625475647ULL) >> (((/* implicit */int) (_Bool)1))));
                    }
                    var_47 = ((/* implicit */short) ((unsigned short) -959392389));
                    var_48 = ((/* implicit */_Bool) 959392389);
                    var_49 = ((/* implicit */unsigned int) ((int) 2241835150U));
                }
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    var_50 = ((/* implicit */signed char) ((unsigned long long int) 230408000U));
                    arr_48 [i_2] [i_2] [21U] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -959392405)), (3947792298U)));
                    var_51 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)20282)) ? (2617379150U) : (((/* implicit */unsigned int) 959392376))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((11330674926339718886ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((_Bool) -959392389)))))) : (5650452114667225333LL));
                    arr_49 [i_2] [i_2] [12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (2012796076U))) | (((3023800594U) | (1328245555U)))))) ? (((/* implicit */unsigned int) max(((+(-959392405))), (((((/* implicit */_Bool) 1606393739U)) ? (959392405) : (((/* implicit */int) var_18))))))) : (max((((2688573556U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))))), ((-(var_5)))))));
                    arr_50 [i_1 + 2] [(signed char)12] [(signed char)12] [0ULL] [i_3] [i_3] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2966721723U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (7151367805876528071ULL))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (int i_16 = 3; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_52 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-959392405)))) ? (max((1328245555U), (((/* implicit */unsigned int) (short)31335)))) : (((((/* implicit */_Bool) 959392405)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4153614467U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_0))))))) : ((-(1606393739U))));
                            var_53 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1618945757)))) ? (((unsigned long long int) min((((/* implicit */unsigned int) var_18)), (4153614467U)))) : ((-(7151367805876528071ULL)))));
                        }
                    } 
                } 
            }
            var_54 = ((/* implicit */unsigned short) (((-(1968228394U))) / ((-(var_1)))));
            var_55 = ((/* implicit */_Bool) (~(959392405)));
        }
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 959392407)) ? (((/* implicit */unsigned long long int) (~(((var_17) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33406)))))))) : (((((/* implicit */_Bool) 2966721741U)) ? (15167653476506050123ULL) : (((/* implicit */unsigned long long int) 2012796076U))))));
            arr_60 [i_17 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 71298683U)) ? (15167653476506050123ULL) : (((/* implicit */unsigned long long int) 2966721741U))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
            {
                var_57 -= ((/* implicit */unsigned int) 959392405);
                var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((2966721741U) + (max((var_2), (var_3)))))) ? (((((/* implicit */_Bool) 4223668620U)) ? (var_8) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((-959392405) >= (((/* implicit */int) (unsigned short)64281))))))))));
                arr_64 [i_1] [i_18] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-4044781692734808342LL) + (9223372036854775807LL))) >> ((((+(3498368584U))) - (3498368555U)))))) ? (354450286U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40085)) ? (3498368584U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63519)))))) ? ((-(1027993586U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) == (var_0)))))))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 1; i_20 < 21; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (unsigned char)100)), (11754366249723222047ULL))) <= (((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)40630)), (var_6))) : (((/* implicit */unsigned long long int) (+(3056317797U))))))));
                            var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(var_12)))) >= (min((((/* implicit */long long int) min((1188114564U), (4223668612U)))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) + (-4044781692734808338LL)))))));
                            arr_73 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) -4044781692734808342LL)) ? (11880221977899206044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 3266973704U)) ? (3190758206U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2941))))) >= ((-(2688573533U)))))))));
                        }
                    } 
                } 
                arr_74 [i_1] [i_17] [i_19] [i_17 + 1] = ((/* implicit */int) ((long long int) ((int) (unsigned short)18820)));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_22 = 1; i_22 < 19; i_22 += 4) /* same iter space */
    {
        arr_77 [i_22] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (unsigned short)46722)));
        var_61 += ((/* implicit */signed char) 71298683U);
    }
    var_62 = ((/* implicit */unsigned short) (+(var_1)));
    /* LoopNest 2 */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_25 = 1; i_25 < 20; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 1; i_26 < 21; i_26 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_27 = 0; i_27 < 22; i_27 += 2) 
                            {
                                var_63 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23720))) < (4223668620U)));
                                var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (3305690304U)));
                            }
                            var_65 = ((/* implicit */unsigned short) ((((4044781692734808342LL) / (((/* implicit */long long int) ((/* implicit */int) (short)11993))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 959392402))))))));
                            arr_92 [i_26] [i_24] [i_25] [i_24] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) 989276993U)) && (((/* implicit */_Bool) min((((/* implicit */long long int) 2688573557U)), (var_17))))));
                            var_66 = ((/* implicit */_Bool) (unsigned char)86);
                            var_67 = ((/* implicit */signed char) (-((+(-4044781692734808342LL)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 4) /* same iter space */
                {
                    var_68 = ((/* implicit */unsigned short) (+(4017949571U)));
                    arr_95 [i_23] = ((/* implicit */unsigned short) (!((_Bool)0)));
                    arr_96 [i_28] [i_28] [19] = ((/* implicit */unsigned short) (~(var_3)));
                    var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) <= (var_8)));
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 3; i_29 < 19; i_29 += 2) 
                    {
                        for (unsigned long long int i_30 = 2; i_30 < 21; i_30 += 2) 
                        {
                            {
                                var_70 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1827900878)) ? (-2521239542236652358LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_71 = ((/* implicit */_Bool) (~(var_8)));
                                arr_101 [i_30] [i_29] [i_23] [i_23] [i_23] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (216337138U) : (1104209090U)));
                                var_72 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)11155)) ? (3946266825U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 4) /* same iter space */
                {
                    var_73 = ((/* implicit */unsigned long long int) max((var_73), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)170)), (1012253448))))));
                    var_74 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned char i_32 = 0; i_32 < 22; i_32 += 4) 
                {
                    arr_107 [i_23] [i_23] [i_23] [i_32] = ((/* implicit */unsigned long long int) (unsigned char)85);
                    var_75 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)172))));
                    /* LoopNest 2 */
                    for (unsigned int i_33 = 0; i_33 < 22; i_33 += 1) 
                    {
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            {
                                var_76 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)38512))));
                                var_77 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37211))))), (((12520252128620576928ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))));
                                var_78 += ((((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)28325)) : (((/* implicit */int) (unsigned char)172))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                }
                for (int i_35 = 0; i_35 < 22; i_35 += 1) 
                {
                    arr_115 [i_23] [(unsigned short)16] [i_23] &= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)28322))))));
                    /* LoopNest 2 */
                    for (unsigned int i_36 = 0; i_36 < 22; i_36 += 4) 
                    {
                        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                        {
                            {
                                var_79 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((max((var_17), (((/* implicit */long long int) var_8)))) + (((/* implicit */long long int) ((unsigned int) var_3)))))) == (((((/* implicit */_Bool) (+(17097151297911411432ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)60243)), (959392405)))) : (((unsigned long long int) (_Bool)1))))));
                                var_80 = ((/* implicit */unsigned long long int) min((var_80), (((/* implicit */unsigned long long int) ((short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) / (8337504301279199026ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                                var_81 *= ((/* implicit */unsigned int) (signed char)38);
                            }
                        } 
                    } 
                }
                var_82 ^= ((/* implicit */unsigned int) ((max((((/* implicit */int) ((_Bool) 1606393735U))), (((int) 1606393735U)))) <= (((/* implicit */int) min((min((var_7), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49136)) || (((/* implicit */_Bool) 348700471U))))))))));
                var_83 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_38 = 0; i_38 < 22; i_38 += 4) 
                {
                    var_84 = ((/* implicit */int) var_11);
                    var_85 = ((/* implicit */long long int) (+(var_8)));
                }
                for (unsigned long long int i_39 = 0; i_39 < 22; i_39 += 1) 
                {
                    var_86 &= ((/* implicit */unsigned long long int) ((unsigned int) (~(min((1499696256U), (348700488U))))));
                    var_87 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)76))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)160)) & (-959392406)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)147)) | (((/* implicit */int) var_16))))))) : ((-(max((((/* implicit */unsigned int) (signed char)-90)), (3770690765U))))));
                    var_88 *= (~(min(((+(2688573557U))), (((/* implicit */unsigned int) (_Bool)1)))));
                }
            }
        } 
    } 
}
