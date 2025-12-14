/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182682
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((((((/* implicit */_Bool) (-(var_6)))) ? (var_4) : (2206066763533919387ULL))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8017457981679517030ULL)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned short)29))))), (17031154885860890568ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_11 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 13612714449702267447ULL)) ? (min((((/* implicit */unsigned long long int) -3908506828843140639LL)), (6013753947765163423ULL))) : (15803905398575746206ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((7627115662319047422ULL) >= (((/* implicit */unsigned long long int) -1432439730712662915LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65506)))))))))));
                                var_12 = ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), ((~(3908506828843140639LL))))))));
                                var_13 -= 18446744073709551607ULL;
                                var_14 = min((max((min((7627115662319047422ULL), (var_0))), ((+(12432990125944388189ULL))))), (((((/* implicit */_Bool) (~(1001022531)))) ? (2861040240507969640ULL) : (((((/* implicit */_Bool) var_1)) ? (15585703833201581968ULL) : (18446744073709551615ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) var_2);
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((-998693106687645174LL) + (998693106687645204LL)))));
                            var_17 = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
                arr_26 [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15))))) ? (-5612568581924169793LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))));
            }
            for (unsigned short i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-326870340))))));
                            var_19 &= ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36141))) : (13612714449702267452ULL));
                            var_20 = ((/* implicit */int) ((var_4) / (((/* implicit */unsigned long long int) 797660819))));
                        }
                    } 
                } 
                var_21 |= ((/* implicit */unsigned short) ((((var_9) ^ (4834029624007284168ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 3) 
                {
                    for (long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                    {
                        {
                            arr_40 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)0)));
                            var_22 |= ((((/* implicit */_Bool) -1377769389)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36141))) - (var_1))));
                        }
                    } 
                } 
            }
            for (signed char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
            {
                var_23 = (((~(var_4))) >> (((var_9) - (3075474699104391581ULL))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) != (-1037987086)));
            }
            for (signed char i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
            {
                arr_45 [10ULL] [i_5] [i_15] [i_5] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3908506828843140654LL))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))) : (6300670219323555132ULL)));
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_1))));
            }
            arr_46 [16ULL] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 326870364)) - (var_4)));
        }
        for (int i_16 = 3; i_16 < 17; i_16 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
            {
                var_27 &= var_2;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 1) 
                    {
                        {
                            var_28 = max((var_9), (var_1));
                            var_29 = ((/* implicit */signed char) 116085105933918957ULL);
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) 3530977689442451479ULL))));
                /* LoopNest 2 */
                for (signed char i_20 = 3; i_20 < 19; i_20 += 2) 
                {
                    for (long long int i_21 = 3; i_21 < 19; i_21 += 3) 
                    {
                        {
                            var_31 = -5612568581924169793LL;
                            arr_61 [i_16] [i_0] [i_16 - 2] [i_17] [i_0] [i_20] [i_21] = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)115)))) << (((var_1) - (6012528625120340145ULL)))))) + (max((2378008256045499310ULL), (var_4))));
                            arr_62 [i_16] = ((/* implicit */int) (+((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63573)))))));
                            var_32 = max(((+(6659319198911948289ULL))), (((/* implicit */unsigned long long int) ((3908506828843140639LL) / (9223372036854775807LL)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
                {
                    arr_65 [(signed char)8] [i_16 + 1] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)2))))) ? (((var_4) + (((/* implicit */unsigned long long int) min((-9223372036854775798LL), (((/* implicit */long long int) var_3))))))) : (min((14061225714801987490ULL), (11227227623195363704ULL)))));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (9223372036854775807LL)))), (6659319198911948289ULL))))));
                    var_34 = ((/* implicit */signed char) var_6);
                }
                for (signed char i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (8077432933421626006ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        var_36 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55312)) ? (4086750696547487210LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) - (((((/* implicit */_Bool) (signed char)115)) ? (1153093604864952177ULL) : (17293650468844599448ULL))));
                        var_37 = ((/* implicit */signed char) var_4);
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 20; i_25 += 2) 
                    {
                        var_38 ^= ((/* implicit */long long int) (unsigned short)28607);
                        var_39 |= ((/* implicit */unsigned long long int) var_6);
                    }
                    arr_72 [i_16] [i_16] [i_23] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) -5LL)), (1153093604864952191ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518)))));
                    var_40 = ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)104)), (326870339)))) ? (min((max((var_8), (((/* implicit */unsigned long long int) var_5)))), (max((0ULL), (((/* implicit */unsigned long long int) 155838177)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) var_9)))))) : (var_6)))));
                    var_41 = ((/* implicit */unsigned short) var_6);
                }
                /* vectorizable */
                for (unsigned long long int i_26 = 3; i_26 < 17; i_26 += 2) 
                {
                    arr_76 [i_0] [i_0] [i_17] [i_17] [i_16] = ((/* implicit */unsigned long long int) -3908506828843140637LL);
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (signed char)-6))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 4) 
                    {
                        var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_0)))) ? (-430647553) : (((((/* implicit */int) var_3)) << (((18446744073709551614ULL) - (18446744073709551598ULL))))));
                        arr_79 [i_16] [i_16 + 2] [i_17] [i_26] [i_16 + 2] = ((/* implicit */int) ((1073741823) != (33538048)));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9LL))))) : (((/* implicit */int) (signed char)121))));
                        var_45 = ((/* implicit */unsigned short) var_6);
                        var_46 &= ((((/* implicit */unsigned long long int) 2773777554235253921LL)) + (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))));
                    }
                }
            }
            for (signed char i_28 = 0; i_28 < 20; i_28 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_29 = 3; i_29 < 19; i_29 += 2) 
                {
                    var_47 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)-118)), (min((var_9), (1153093604864952167ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 1) 
                    {
                        arr_88 [i_0] [i_16] [i_29] [i_16] = ((/* implicit */int) min((((((/* implicit */_Bool) -155838177)) ? (var_1) : (((/* implicit */unsigned long long int) -1088000954)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) != (13560117130753481287ULL))))));
                        var_48 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551614ULL)) || (((/* implicit */_Bool) var_2)))))))));
                    }
                    var_49 = (~(min(((~(-492341131976676959LL))), (((/* implicit */long long int) var_5)))));
                }
                for (long long int i_31 = 0; i_31 < 20; i_31 += 1) 
                {
                    var_50 = ((/* implicit */unsigned short) var_4);
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (9ULL)))) ? (((((/* implicit */_Bool) 17293650468844599432ULL)) ? (((/* implicit */unsigned long long int) -3908506828843140637LL)) : (288160007407534080ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-2127073996621222235LL)))))))))));
                    var_52 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-98)) + (((/* implicit */int) var_3)))) < (((/* implicit */int) (signed char)127))));
                    var_53 = ((/* implicit */unsigned long long int) var_2);
                }
                var_54 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (3908506828843140630LL)))), ((+(1153093604864952170ULL)))));
                var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)64028)), (var_8)))) ? (min((((((/* implicit */_Bool) 6526938371471138891ULL)) ? (var_0) : (((/* implicit */unsigned long long int) -3889714638742198822LL)))), (max((var_1), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((3792247097495523394LL) >> (((min((((/* implicit */unsigned long long int) var_5)), (4796292252276467559ULL))) - (63134ULL))))))));
            }
            for (long long int i_32 = 2; i_32 < 18; i_32 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 2; i_33 < 18; i_33 += 3) 
                {
                    for (int i_34 = 1; i_34 < 17; i_34 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (6183229511406463783ULL)));
                            var_57 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) min((1764862786), (((/* implicit */int) (signed char)-70))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
                            var_58 = min((((/* implicit */unsigned long long int) ((17293650468844599442ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))), (((((/* implicit */_Bool) var_8)) ? (15517114139512186619ULL) : (5133746351891459546ULL))));
                            var_59 = (-(((-1314059292094088402LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                var_60 = (+(min((var_8), (((/* implicit */unsigned long long int) var_5)))));
                var_61 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((2127073996621222234LL), (((/* implicit */long long int) (signed char)-45)))), (((/* implicit */long long int) var_3))))) ? (min(((-(var_9))), (var_8))) : (min((10802977429020325482ULL), (((/* implicit */unsigned long long int) -3908506828843140641LL))))));
                arr_101 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((11919805702238412718ULL), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 833127278394790254LL)) ? (((/* implicit */int) (signed char)56)) : (-831656599)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 251301577)) : (var_1)))));
            }
            for (long long int i_35 = 2; i_35 < 18; i_35 += 1) /* same iter space */
            {
                arr_104 [4] [i_16] [18ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(551709909)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 131361038)) : (833127278394790245LL))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (0LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_36 = 2; i_36 < 17; i_36 += 3) /* same iter space */
                {
                    var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (1099511627776ULL)));
                    arr_107 [i_16] = ((/* implicit */unsigned short) (+(-361031277)));
                    var_63 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-33)) + (-165193739)));
                    var_64 = ((/* implicit */long long int) ((-1) + (((/* implicit */int) (unsigned short)3086))));
                    var_65 = ((/* implicit */unsigned long long int) var_7);
                }
                /* vectorizable */
                for (unsigned long long int i_37 = 2; i_37 < 17; i_37 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */signed char) ((4095ULL) >> (((/* implicit */int) ((((/* implicit */int) (signed char)2)) == (((/* implicit */int) (signed char)-62)))))));
                    var_67 -= ((/* implicit */signed char) 9718491450578677192ULL);
                    var_68 = var_4;
                }
            }
            var_69 = ((min((var_9), (((/* implicit */unsigned long long int) var_7)))) << (((max((3983845524347469376LL), (-3983845524347469377LL))) - (3983845524347469314LL))));
        }
    }
    for (long long int i_38 = 0; i_38 < 24; i_38 += 2) 
    {
        var_70 = ((/* implicit */signed char) max((var_9), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((13833331606525292693ULL) > (var_4))))) & (min((6ULL), (((/* implicit */unsigned long long int) (signed char)7))))))));
        arr_113 [15ULL] [i_38] = ((/* implicit */unsigned short) max((18107779575707276042ULL), (((/* implicit */unsigned long long int) min((2104562920460404043LL), (3983845524347469376LL))))));
    }
    for (int i_39 = 0; i_39 < 10; i_39 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_40 = 1; i_40 < 8; i_40 += 2) 
        {
            for (long long int i_41 = 1; i_41 < 7; i_41 += 1) 
            {
                for (signed char i_42 = 0; i_42 < 10; i_42 += 1) 
                {
                    {
                        arr_123 [i_39] [i_40] [9ULL] [i_42] = ((((/* implicit */_Bool) ((var_8) >> (((min((((/* implicit */long long int) var_3)), (-3983845524347469367LL))) + (3983845524347469408LL)))))) ? (min((9504448879141654065ULL), (((/* implicit */unsigned long long int) 227151040)))) : (146845733618200143ULL));
                        var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10574454432637722646ULL)) ? (11019622885218902959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))));
                        var_72 = ((/* implicit */unsigned short) max((var_72), (((/* implicit */unsigned short) 8215044752540587049ULL))));
                        var_73 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 3983845524347469377LL)) != (511ULL))) && (((/* implicit */_Bool) (+(min((-7975946560944664153LL), (((/* implicit */long long int) (unsigned short)5081)))))))));
                    }
                } 
            } 
        } 
        var_74 = (-(max((var_6), (((/* implicit */long long int) var_3)))));
        /* LoopNest 2 */
        for (int i_43 = 4; i_43 < 8; i_43 += 2) 
        {
            for (unsigned long long int i_44 = 0; i_44 < 10; i_44 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_45 = 3; i_45 < 7; i_45 += 2) 
                    {
                        var_75 = ((/* implicit */int) -3983845524347469377LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_46 = 2; i_46 < 9; i_46 += 3) 
                        {
                            var_76 = ((4744109428861747874ULL) / (13694340714997942490ULL));
                            arr_134 [i_45] [i_43] [i_45] [i_45] [i_43] = ((/* implicit */int) var_1);
                            var_77 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (13694340714997942466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_47 = 0; i_47 < 10; i_47 += 2) 
                    {
                        for (unsigned long long int i_48 = 3; i_48 < 9; i_48 += 2) 
                        {
                            {
                                var_78 = ((/* implicit */int) var_2);
                                var_79 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) != (var_8))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? ((((!(((/* implicit */_Bool) 1006632960ULL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-27)) + (2147483647))) >> (((4739916286783175664LL) - (4739916286783175655LL)))))) : (var_8))) : (min((338964498002275583ULL), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) (signed char)-3)))))))));
                            }
                        } 
                    } 
                    arr_140 [i_39] [i_39] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), ((~(var_8)))));
                }
            } 
        } 
    }
    var_80 = ((/* implicit */long long int) var_3);
    var_81 = ((/* implicit */signed char) var_6);
}
