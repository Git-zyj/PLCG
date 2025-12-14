/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115457
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 |= ((/* implicit */short) (-((+(1405591331327197720ULL)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)10419))));
            var_17 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-1))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                arr_10 [i_0] [7U] [i_3] = ((/* implicit */unsigned int) -346235053);
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1405591331327197728ULL))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_21 [2LL] [i_2] [2LL] [(short)14] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(5484800023617728459LL))))));
                        arr_22 [i_0] [i_7] = ((/* implicit */int) -6894954410135955181LL);
                    }
                } 
            } 
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(1334516818)))) ? ((-(17041152742382353885ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)-125)))))));
            var_21 *= ((/* implicit */short) (signed char)125);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */int) 1405591331327197731ULL);
                            var_23 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)38))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                {
                    arr_37 [9U] [i_0] [i_12] [20] [i_0] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) -1559162515)) : (-6894954410135955165LL)));
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125))))) ? (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned long long int) 7238774322978879411LL)) : (2531976226487657589ULL))) : (((/* implicit */unsigned long long int) 2097151))));
                    arr_38 [i_0] [i_0] [2] [(short)10] [i_0] [2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)74))));
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-21)) ? (-1189584619) : (188009254))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) (signed char)104)))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3054533830437653792LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (signed char)-64))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) ? (462902567) : (-1232604168)));
                    }
                    for (short i_14 = 2; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        var_29 = ((((/* implicit */_Bool) (signed char)63)) ? ((-(((/* implicit */int) (unsigned short)55044)))) : (((((/* implicit */_Bool) 1114181297)) ? (((/* implicit */int) (short)31394)) : (((/* implicit */int) (unsigned short)10492)))));
                        arr_44 [i_0] [i_0] [(signed char)20] [i_0] [i_0] = ((/* implicit */unsigned short) 2097151);
                        var_30 = ((/* implicit */long long int) (signed char)-67);
                        var_31 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-56))));
                        var_32 -= ((/* implicit */unsigned int) 1232604159);
                    }
                    arr_45 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-93)) ? (-1011917090) : (((/* implicit */int) (unsigned short)11572))));
                }
                for (int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */short) (_Bool)0);
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17635))))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) (unsigned short)53962)))))));
                    arr_49 [i_0] [20LL] [(signed char)8] [i_0] = ((/* implicit */signed char) 117478665U);
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2109982151)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (2224237378U)))) ? ((+(((/* implicit */int) (signed char)67)))) : (((/* implicit */int) (signed char)-30)))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2224237361U)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)254))));
                        arr_52 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0] |= ((((/* implicit */_Bool) -1245741164)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967277U));
                    }
                }
                for (int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        arr_57 [i_0] [i_0] [4ULL] [i_0] [i_0] = (signed char)121;
                        var_37 = 1011917100;
                    }
                    for (unsigned short i_19 = 3; i_19 < 19; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 288230376151711743LL)) ? (((/* implicit */int) (unsigned short)11572)) : (((/* implicit */int) (signed char)-96))))) : ((-(4294967295U)))));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194302)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) : (-288230376151711734LL)))) ? (((((/* implicit */_Bool) (signed char)96)) ? (8379622244153517842LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))))) : (((/* implicit */long long int) (-(4294967295U)))))))));
                        arr_61 [i_9] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) 2000425843)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (3244150248314677239LL)))));
                        arr_62 [i_17] [i_17] [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)96)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                    }
                    var_40 += ((/* implicit */short) (signed char)-47);
                    var_41 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)48))));
                    arr_63 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)53))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_20 = 3; i_20 < 19; i_20 += 3) /* same iter space */
                {
                    arr_68 [2] [2] [2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1011917095)))) ? (((/* implicit */int) (unsigned char)191)) : (503513651)));
                    var_42 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 536870911U))));
                }
                for (unsigned int i_21 = 3; i_21 < 19; i_21 += 3) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) -8379622244153517858LL))));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) (+(503513655)))) ? (((((/* implicit */_Bool) (short)7388)) ? (((/* implicit */long long int) -503513652)) : (-8166081396183674289LL))) : (((/* implicit */long long int) 536870934U))));
                        arr_75 [(short)15] [(unsigned short)15] [i_9] [i_0] [i_22] = ((/* implicit */signed char) 11789965U);
                        var_45 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 9251871264451397347ULL)) ? (7579008859321810881LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219)))))));
                    }
                }
                for (unsigned int i_23 = 3; i_23 < 19; i_23 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_81 [i_24] [i_23] [i_9 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)2550);
                        var_46 |= ((/* implicit */signed char) (+(2491682404U)));
                        var_47 = (-(-1413079706));
                        arr_82 [i_0] [i_8] [i_9] [i_0] = (unsigned short)43777;
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (signed char)99)) : (927953328)))));
                        arr_85 [i_0] [i_0] [i_8] [i_9] [i_23] [i_25 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))));
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        arr_90 [i_0] [i_8] [(signed char)3] [i_0] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16911)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32750)))));
                        var_49 = (-((+(1475347463))));
                    }
                    /* LoopSeq 4 */
                    for (int i_27 = 3; i_27 < 19; i_27 += 3) 
                    {
                        var_50 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (signed char)56))));
                        arr_94 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned short)30306)) : (((/* implicit */int) (unsigned short)16))));
                        var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7922694991776878987LL))));
                        var_52 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13778)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (unsigned short)32))));
                        var_53 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)13))));
                    }
                    for (int i_28 = 1; i_28 < 20; i_28 += 3) 
                    {
                        arr_97 [i_0] = ((/* implicit */long long int) (signed char)8);
                        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (unsigned short)1778))))) ? (((((/* implicit */_Bool) (signed char)-41)) ? (1803284892U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))))) : ((+(1803284901U))))))));
                        arr_98 [i_0] [i_8] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))));
                    }
                    for (long long int i_29 = 0; i_29 < 21; i_29 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43373)) ? (((/* implicit */long long int) (-(2491682418U)))) : (((((/* implicit */_Bool) (short)-2048)) ? (2199023255548LL) : (((/* implicit */long long int) -15789067)))))))));
                        var_56 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-17964)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (2863647594434573934ULL)));
                        var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((((/* implicit */_Bool) 15583096479274977696ULL)) ? (((((/* implicit */_Bool) 1542483083)) ? (2491682403U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2863647594434573934ULL)) ? (((/* implicit */int) (unsigned short)22182)) : (((/* implicit */int) (signed char)-9))))))))));
                        var_58 = ((/* implicit */int) (+(((((/* implicit */_Bool) 4294967293U)) ? (396719580U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))))));
                    }
                    for (signed char i_30 = 1; i_30 < 19; i_30 += 3) 
                    {
                        arr_105 [i_0] [i_23] [i_9 + 1] [i_0] [i_30] [(signed char)12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5672678743571151783LL))));
                        arr_106 [i_0] [i_0] [i_9] [i_9] [5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)43380))));
                        var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) 396719580U))));
                        var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) (+(2863647594434573920ULL))))));
                    }
                    arr_107 [i_23] [i_0] [i_0] [i_0] = ((/* implicit */short) 1703713588);
                }
                var_61 = (+(((/* implicit */int) (signed char)10)));
                arr_108 [i_0] [14] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8081076407218184365LL)) ? (((/* implicit */int) (short)12638)) : (((/* implicit */int) (short)-12639))));
            }
            for (long long int i_31 = 0; i_31 < 21; i_31 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_32 = 0; i_32 < 21; i_32 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_33 = 0; i_33 < 21; i_33 += 1) 
                    {
                        var_62 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 260020231))));
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)41175))));
                        var_64 = ((/* implicit */unsigned short) (!((_Bool)1)));
                    }
                    var_65 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6659870378708664307LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-16053))));
                    var_66 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127)))))));
                    arr_117 [i_0] [i_0] [i_0] [i_32] [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) ? (-2737307018196663144LL) : (8754296236027530441LL)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (int i_35 = 1; i_35 < 18; i_35 += 2) 
                    {
                        {
                            var_67 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -3912756742341849617LL)))) ? (((/* implicit */int) (unsigned char)160)) : (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)148))))));
                            var_68 = (+(1409060638));
                            var_69 ^= ((/* implicit */signed char) -3912756742341849603LL);
                        }
                    } 
                } 
                var_70 = ((/* implicit */signed char) (unsigned short)5991);
            }
            for (unsigned short i_36 = 1; i_36 < 19; i_36 += 3) 
            {
                arr_127 [(unsigned char)10] [(short)16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (2833996434U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32454)))));
                var_71 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111))));
                arr_128 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)126)) : (1169790475)));
                var_72 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-112))));
            }
            for (unsigned int i_37 = 0; i_37 < 21; i_37 += 3) 
            {
                var_73 = ((/* implicit */int) min((var_73), (((/* implicit */int) (signed char)122))));
                arr_131 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -6922083319700438666LL))));
            }
            arr_132 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25281)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (short)14364))))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_38 = 2; i_38 < 20; i_38 += 3) 
        {
            arr_135 [i_0] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)92)))))));
            var_74 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (2857687168U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1084480602U))))))));
        }
    }
    for (int i_39 = 1; i_39 < 10; i_39 += 3) 
    {
        var_75 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)17)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(16583680033210371654ULL)))))))));
        var_76 = ((/* implicit */long long int) min((var_76), (min((min((-2737307018196663127LL), (((/* implicit */long long int) (short)17477)))), (((/* implicit */long long int) (_Bool)0))))));
        var_77 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4293716604U)))) ? (((/* implicit */int) (short)24774)) : (((/* implicit */int) (unsigned short)17562))))));
        var_78 = min((((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)0)))), (((/* implicit */int) min(((short)-32757), (((/* implicit */short) (signed char)109)))))))), (0LL));
    }
    var_79 = var_5;
    var_80 = ((/* implicit */signed char) var_0);
    var_81 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-16182))))))) ? ((-(min((2737307018196663144LL), (((/* implicit */long long int) (signed char)-116)))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24531)))))));
}
