/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141639
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)208)))) >> ((((+(((/* implicit */int) arr_2 [i_0])))) - (153)))))) ? (var_5) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) || (((/* implicit */_Bool) -6966129377431671363LL)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_18 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)244))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)122)), (1316690363008399168LL)))) ? (((((/* implicit */_Bool) -1924953719)) ? (7081129949255015367LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18942))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6966129377431671370LL)) ? (((/* implicit */int) var_15)) : (var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_1))) > (((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60697)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_15);
                            var_21 = ((/* implicit */unsigned char) (_Bool)0);
                            arr_20 [(unsigned short)2] [(unsigned short)2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_4] [i_5])) ? (((-6966129377431671370LL) / (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2087))))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_12 [i_0] [4] [i_0]))));
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_16)));
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_24 &= ((/* implicit */int) var_16);
                            arr_33 [i_0] [i_6] [i_0] [6LL] [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_7 + 1] [i_7 + 1])) ? ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0))))));
            }
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(var_6))))));
        }
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_36 [i_10] [i_10] = ((/* implicit */signed char) (-(((var_16) >> (((((/* implicit */_Bool) 4236252403244166651LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-233974050), (((/* implicit */int) (unsigned char)86))))) ? (var_5) : (((((/* implicit */int) var_12)) ^ (-2013371777)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1284483904) : (((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */long long int) 2013371776)) : (max((((/* implicit */long long int) (unsigned char)214)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((61073231) - (var_5)))) > (((long long int) var_3))))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                arr_41 [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((int) max(((unsigned short)4222), ((unsigned short)65535))));
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((-2013371778) & (12))))) ? (max(((~(var_6))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))));
                arr_42 [8LL] [8LL] [i_11] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) | (max((var_0), (((/* implicit */long long int) var_5))))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(((/* implicit */int) var_10)))))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 4; i_12 < 10; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */short) var_13);
                        var_31 = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_0))) + (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_11)))))))), (max((-6639815216329440184LL), (((/* implicit */long long int) (unsigned short)61428))))));
                        arr_49 [i_10] [i_10] [i_11] [i_12 - 3] [i_13] [i_12] [i_11] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_12] [i_12] [i_12 + 2])) ? (((/* implicit */int) (unsigned short)65504)) : (2013371786)))), (max((arr_18 [i_12] [i_12] [6] [i_10] [i_12 + 2] [i_12 - 2] [i_12 - 4]), (((/* implicit */long long int) (unsigned char)123))))));
                        arr_50 [7LL] [7LL] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_11))));
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) ((long long int) (~((~(277291237100696411LL))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (arr_32 [i_12] [i_12 - 1] [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12])))) ? ((((_Bool)0) ? (2305843009213693951ULL) : (((/* implicit */unsigned long long int) 5342159228100952941LL)))) : (((((/* implicit */_Bool) var_9)) ? (16140901064495857665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8077))))))))));
                        arr_55 [i_0] [i_0] [(unsigned short)8] [i_0] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((+(arr_17 [i_12 + 2] [i_12 - 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_53 [i_10] [i_0] [i_10] [i_0] [i_0]), ((signed char)-101)))), (((int) -2599609257363277688LL)))))));
                        var_34 = (~(min(((~(arr_0 [i_0]))), (16140901064495857664ULL))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-112))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_53 [i_10] [(unsigned short)11] [i_12 - 3] [i_12] [i_15 + 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_16 = 1; i_16 < 11; i_16 += 3) 
                    {
                        arr_60 [i_10] = ((/* implicit */short) var_14);
                        arr_61 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)127)))));
                        var_37 = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_62 [i_0] [i_11] [i_10] [i_0] [i_16] = var_5;
                        var_38 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (arr_0 [i_16 + 1]))) << (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned char)223))))));
                    }
                    var_39 = ((/* implicit */unsigned short) var_4);
                }
            }
            arr_63 [i_10] [i_10] = ((/* implicit */long long int) var_14);
            /* LoopSeq 1 */
            for (unsigned short i_17 = 1; i_17 < 10; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 3) /* same iter space */
                {
                    arr_69 [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_6 [i_0]))))), ((+(arr_24 [i_0] [i_10] [i_10] [i_17 + 2])))));
                    var_40 += max((max((-15), (((/* implicit */int) ((((/* implicit */_Bool) 31)) || (((/* implicit */_Bool) 6966129377431671373LL))))))), (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) (short)-9888)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) arr_31 [i_0] [i_10])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (arr_24 [(unsigned short)3] [i_10] [2LL] [i_10]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 3) /* same iter space */
                {
                    arr_72 [i_0] [i_10] [(short)7] [(short)7] = ((((/* implicit */_Bool) (unsigned short)61716)) ? (-1584960935) : (((/* implicit */int) var_14)));
                    arr_73 [i_0] [i_10] [i_17] [i_10] [i_17] = ((/* implicit */unsigned char) ((0) << (((/* implicit */int) (_Bool)1))));
                    arr_74 [(_Bool)1] [i_0] [i_19 - 1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)192)) ? (((/* implicit */int) arr_11 [i_10])) : (((/* implicit */int) var_13)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        arr_78 [i_0] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */short) ((_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0])) - (47172))))))) : (((/* implicit */short) ((_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0])) - (47172))) + (25802)))))));
                        var_41 = (+(((/* implicit */int) arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (signed char)123))))) / (arr_19 [i_0] [i_0] [i_0] [3LL] [i_0] [i_0] [i_10])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        arr_81 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)58489)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) var_13))));
                        arr_82 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) & (1217211224)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) % (1805571583415573813ULL)))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -835474708)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (arr_19 [i_0] [10] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_44 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (~(var_8))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (!(((/* implicit */_Bool) -818529951)))))));
                            arr_89 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                arr_90 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((1461524998749470799ULL), (((/* implicit */unsigned long long int) (unsigned short)37127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-23341)))))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 12; i_25 += 3) 
        {
            arr_96 [i_24] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)24789)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(0ULL)))));
            arr_97 [i_24] = ((/* implicit */long long int) ((unsigned long long int) arr_24 [i_24] [i_24] [i_24] [i_24]));
            var_46 = ((/* implicit */signed char) (~(-1011953056)));
        }
        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) var_10))));
    }
    for (long long int i_26 = 0; i_26 < 21; i_26 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_27 = 0; i_27 < 21; i_27 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_28 = 3; i_28 < 18; i_28 += 3) 
            {
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)11377)) ? (((/* implicit */int) (short)-23349)) : (((((/* implicit */_Bool) -3011135272880313742LL)) ? (var_5) : (var_9)))));
                /* LoopSeq 2 */
                for (int i_29 = 0; i_29 < 21; i_29 += 4) 
                {
                    var_49 = ((/* implicit */long long int) min((var_49), (6966129377431671392LL)));
                    /* LoopSeq 2 */
                    for (signed char i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        var_50 -= ((/* implicit */unsigned char) (((-(var_5))) | (((/* implicit */int) var_13))));
                        var_51 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((10072583734156772728ULL) - (((/* implicit */unsigned long long int) 1907959980))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23344)))))));
                    }
                    for (long long int i_31 = 1; i_31 < 18; i_31 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (short)23348)) : (((/* implicit */int) (unsigned short)61193)))))));
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 8374160339552778896ULL)) ? (((/* implicit */long long int) arr_108 [i_26] [i_26] [i_29] [i_26] [i_26])) : (2158688170186540871LL))) + (9223372036854775807LL))) >> (((arr_110 [i_26] [i_26] [i_29] [i_26]) - (331164557))))))));
                        arr_112 [i_26] [13] [16LL] [i_28] [i_27] [i_29] [i_31] = (-(-1165515282));
                        arr_113 [i_26] [(unsigned short)6] [i_27] [i_28 + 2] [i_29] [i_27] = ((/* implicit */unsigned long long int) arr_105 [i_26] [i_27] [i_28] [i_29] [i_31]);
                        var_54 = ((/* implicit */int) ((((long long int) 236102627)) >> (((((/* implicit */int) (unsigned short)11556)) - (11530)))));
                    }
                }
                for (int i_32 = 4; i_32 < 19; i_32 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_33 = 0; i_33 < 21; i_33 += 3) 
                    {
                        arr_119 [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned short) ((long long int) ((int) var_9)));
                        var_55 *= ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -326032245)))))) : (-3490732246769478551LL));
                    }
                    /* LoopSeq 2 */
                    for (int i_34 = 3; i_34 < 19; i_34 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */int) min((var_56), (((((/* implicit */_Bool) var_0)) ? (arr_110 [i_28 + 3] [(short)18] [6LL] [i_34 - 1]) : (arr_110 [i_28 + 3] [i_28 + 2] [18LL] [i_34 - 1])))));
                        arr_124 [i_27] = ((/* implicit */unsigned long long int) ((var_8) | (var_1)));
                        var_57 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned short)40119)))));
                    }
                    for (int i_35 = 3; i_35 < 19; i_35 += 2) /* same iter space */
                    {
                        arr_128 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned short) (-((-(1733101114)))));
                        var_58 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 370728246)) ? (((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (4110))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)63363)) == (((/* implicit */int) (short)11377)))))));
                        arr_129 [i_27] [(_Bool)1] [(_Bool)1] [i_32] [i_32] [i_35 - 2] = (-(-4021560510876490259LL));
                        var_59 = ((/* implicit */int) (_Bool)1);
                        var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6589)) ? ((+(((/* implicit */int) (unsigned short)24166)))) : (((/* implicit */int) (signed char)11))));
                    }
                }
            }
            var_61 *= ((/* implicit */_Bool) ((((/* implicit */long long int) -1540577060)) & (-4021560510876490244LL)));
        }
        for (long long int i_36 = 0; i_36 < 21; i_36 += 1) 
        {
            var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)64965)) < (((/* implicit */int) (signed char)5)))) ? (max((((/* implicit */long long int) (unsigned short)44352)), (-3011135272880313742LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)7217)))))))) ? (min((((/* implicit */unsigned long long int) 7908244327260830890LL)), (max((((/* implicit */unsigned long long int) var_15)), (13953635128096407875ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_1) < (16776704)))))))));
            /* LoopSeq 1 */
            for (int i_37 = 2; i_37 < 18; i_37 += 3) 
            {
                var_63 = (unsigned short)53992;
                var_64 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)107))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_7)) - (146))))))));
                /* LoopSeq 1 */
                for (int i_38 = 0; i_38 < 21; i_38 += 3) 
                {
                    var_65 -= ((/* implicit */long long int) (unsigned char)84);
                    var_66 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21557)) || ((!(((/* implicit */_Bool) (unsigned char)84))))))) >> (((((/* implicit */int) var_7)) - (155)))));
                }
            }
            var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58301))))) : (((((/* implicit */_Bool) arr_125 [i_26])) ? (-1877332241) : (((/* implicit */int) var_7)))))))))));
        }
        for (long long int i_39 = 0; i_39 < 21; i_39 += 2) 
        {
            var_68 = ((/* implicit */long long int) max((var_68), (((/* implicit */long long int) 16140901064495857665ULL))));
            var_69 = ((/* implicit */signed char) (((~(18446744073709551612ULL))) * (((/* implicit */unsigned long long int) ((int) arr_115 [i_26] [i_26] [i_39] [i_26] [i_26] [i_26])))));
        }
        arr_141 [i_26] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 530993990)))))));
    }
    var_70 = ((/* implicit */int) max((var_70), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) var_3))))))));
}
