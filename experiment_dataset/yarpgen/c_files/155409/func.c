/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155409
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_17 ^= min((min((arr_5 [i_0 - 2] [i_2 - 2]), (arr_5 [i_0] [i_1]))), (((/* implicit */long long int) ((arr_5 [i_0 - 3] [i_1]) != (arr_5 [i_1] [i_1])))));
                        var_18 = (-(((var_6) + (arr_3 [i_0 + 1]))));
                        arr_12 [i_1] [i_1] [i_1] = var_5;
                        var_19 &= -3767939684749981843LL;
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_17 [i_3] [3LL] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((var_5) / (arr_16 [18LL] [i_1] [i_2 + 1]))), (arr_9 [4LL] [12LL] [i_0 + 2] [i_0 + 2] [i_0] [i_0]))))));
                            arr_18 [7LL] [7LL] [i_2] [5LL] [i_2] = ((-1007523491328872423LL) - (-9223372036854775789LL));
                            var_20 = min((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 1] [i_0 - 2]))), (((/* implicit */long long int) ((arr_1 [i_0 - 3] [i_0]) >= (-9223372036854775763LL)))));
                            var_21 = ((((/* implicit */_Bool) ((-1961125170949742169LL) ^ (arr_4 [i_0 + 1] [i_0 + 1] [i_4])))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (var_8))))));
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_0 + 1] = var_14;
        var_22 = max((((long long int) arr_8 [i_0 - 3])), (max((((-2471488641614341767LL) ^ (arr_16 [i_0] [i_0] [i_0]))), (((274877906432LL) / (var_2))))));
    }
    for (long long int i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max((var_23), (min((var_15), (arr_11 [i_5 - 3] [6LL] [i_5])))));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            for (long long int i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_24 &= min((min((8131966866222073921LL), (274877906444LL))), (((((274877906457LL) ^ (9223372036854775778LL))) & ((~(var_9))))));
                        arr_30 [i_5] [i_6] [i_6 - 3] [i_7] [i_5] = ((min((((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_7] [i_8])) ? (var_9) : (arr_20 [i_8]))), (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (-118040316928914513LL) : (arr_2 [10LL]))))) | (min((2251799813683200LL), (-5011701467834656294LL))));
                        arr_31 [i_6] [i_6] [i_7] [i_8] = (-((~(2471488641614341780LL))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_10 = 1; i_10 < 21; i_10 += 2) /* same iter space */
        {
            var_25 = -9084294679861932319LL;
            var_26 = (-(((arr_32 [i_10 + 2] [i_10 + 2]) * (-1LL))));
        }
        for (long long int i_11 = 1; i_11 < 21; i_11 += 2) /* same iter space */
        {
            arr_40 [i_11] = ((long long int) var_4);
            var_27 = ((/* implicit */long long int) ((min((arr_34 [i_9 + 2]), (274877906425LL))) > (((long long int) 0LL))));
        }
        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_28 = ((long long int) max((arr_38 [i_9 + 1]), (arr_36 [i_9 + 1])));
            arr_43 [i_9 + 1] = ((((/* implicit */_Bool) (-(max((var_11), (1656357999599729815LL)))))) ? (((((/* implicit */_Bool) arr_38 [i_9 + 2])) ? (2251799813683227LL) : (arr_36 [i_9 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3))))))));
            var_29 = ((/* implicit */long long int) ((34359738367LL) <= (3697572675933638959LL)));
        }
        arr_44 [i_9 + 1] = ((((/* implicit */_Bool) min((arr_41 [2LL] [2LL] [i_9 + 3]), (((var_14) / (-9223372036854775772LL)))))) ? (max((-1840185798667876151LL), (8950639647327837248LL))) : (((long long int) arr_36 [i_9 + 2])));
        var_30 = min((((long long int) (!(((/* implicit */_Bool) -9223372036854775776LL))))), (min((arr_35 [i_9]), (arr_35 [i_9 + 1]))));
    }
    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        var_31 = 2690626714216449333LL;
        var_32 = ((((long long int) arr_29 [i_13] [i_13] [i_13] [i_13] [i_13])) | ((((-9223372036854775807LL - 1LL)) / (5489989114734111207LL))));
        /* LoopSeq 1 */
        for (long long int i_14 = 1; i_14 < 14; i_14 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_15 = 1; i_15 < 12; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        {
                            arr_57 [i_13] [i_13] [i_13] [i_13] [i_13] = 2685459691241289150LL;
                            var_33 = ((/* implicit */long long int) min((var_33), (((long long int) ((((((/* implicit */_Bool) -6393871690808362487LL)) ? (-2830660123312897674LL) : (-6393871690808362475LL))) >= (5489989114734111222LL))))));
                        }
                    } 
                } 
                var_34 = ((long long int) (+(arr_52 [i_14] [i_13])));
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        {
                            arr_63 [i_13] [i_14] [i_15 + 2] [i_13] [i_18] [1LL] = arr_35 [i_15];
                            var_35 = min((min((arr_14 [i_14 + 1] [i_15] [i_15] [i_15 - 1] [i_18]), (var_16))), (min((8086618444431336170LL), (-3384962900908199886LL))));
                        }
                    } 
                } 
            }
            for (long long int i_20 = 1; i_20 < 12; i_20 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1731704802903413711LL) | (7706446354930081172LL)))) || (((/* implicit */_Bool) max((1606109743152135703LL), (var_16))))));
                var_37 ^= ((/* implicit */long long int) (((~(arr_65 [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1]))) < (((long long int) arr_49 [i_13]))));
                arr_66 [8LL] [i_13] = ((((/* implicit */_Bool) ((arr_24 [i_13] [i_20 + 3] [i_14 + 1]) & (-2202035580772750889LL)))) ? (min((arr_24 [i_13] [i_20 + 1] [i_14 - 1]), (var_9))) : (((arr_27 [i_20] [i_13] [i_14 + 1] [i_14 + 1]) ^ (arr_52 [i_14 - 1] [i_13]))));
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 13; i_21 += 4) 
                {
                    for (long long int i_22 = 1; i_22 < 11; i_22 += 2) 
                    {
                        {
                            var_38 = min((-9084294679861932319LL), (((((/* implicit */_Bool) (-(var_12)))) ? (var_14) : ((~(var_11))))));
                            var_39 = min((-730833970817388862LL), (4032133697112790393LL));
                            arr_71 [i_13] [i_21] = min((min((arr_3 [i_14 + 1]), (var_14))), (max((arr_35 [i_14 + 1]), (arr_1 [i_21 + 1] [i_21 - 1]))));
                        }
                    } 
                } 
            }
            for (long long int i_23 = 1; i_23 < 12; i_23 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */long long int) max((var_40), (((long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (var_10) : (-9037298782188998475LL)))))));
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775796LL)))))) < (-6789603943117907582LL))))));
                var_42 = min((((/* implicit */long long int) ((4032133697112790401LL) >= (var_7)))), (max((1658108868706098592LL), (-3697572675933638952LL))));
            }
            for (long long int i_24 = 1; i_24 < 12; i_24 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_25 = 2; i_25 < 14; i_25 += 3) 
                {
                    arr_79 [i_13] [i_14 + 1] [i_13] [i_24] [i_24] [i_13] = arr_4 [i_25] [i_25 - 2] [i_25 - 2];
                    var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (((+(6789603943117907593LL))) >= (((arr_70 [i_13] [i_13] [i_14 - 1] [8LL] [i_25 - 2]) << (((arr_70 [i_13] [i_14] [i_14 - 1] [4LL] [i_25 - 2]) - (8843349383903388046LL))))))))));
                    arr_80 [8LL] [i_24] [2LL] [i_13] [i_13] &= max((0LL), (var_15));
                }
                arr_81 [i_13] [i_13] [0LL] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_58 [i_13] [i_14]) : (var_14)))) ? ((-(var_7))) : (min((35184372086784LL), (6789603943117907582LL))))), (arr_39 [i_13] [i_13]));
                arr_82 [i_13] [i_14 - 1] [i_13] [8LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_37 [i_24 - 1]), (arr_37 [i_24 - 1]))))));
                arr_83 [i_13] = 1870683609066309238LL;
            }
            var_45 = ((/* implicit */long long int) ((((min((var_14), (-8967519617397242995LL))) - (((long long int) -6357555910538739627LL)))) < (((arr_0 [i_14 + 1]) / (((long long int) var_15))))));
            /* LoopSeq 3 */
            for (long long int i_26 = 0; i_26 < 15; i_26 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_27 = 4; i_27 < 13; i_27 += 2) 
                {
                    for (long long int i_28 = 2; i_28 < 13; i_28 += 2) 
                    {
                        {
                            var_46 = min((max((-9217232584406252631LL), (9223372036854775807LL))), ((-(((((/* implicit */_Bool) 4120262330543669534LL)) ? (arr_27 [i_27] [i_13] [i_13] [i_27 - 1]) : (arr_76 [i_13]))))));
                            var_47 = min((min((-8979162963385015580LL), (-7135241760200239338LL))), (-3697572675933638952LL));
                            arr_92 [i_13] [i_14 + 1] [i_14] [i_26] [7LL] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_93 [i_13] [i_14] [i_26] [i_27] [i_13] = ((/* implicit */long long int) ((min((arr_77 [i_28] [i_28] [i_28] [i_13] [i_28 + 2] [i_28]), (var_4))) == (((-9223372036854775787LL) ^ (-5566619677073662229LL)))));
                        }
                    } 
                } 
                var_48 = var_6;
                var_49 = ((/* implicit */long long int) max((var_49), (((-2LL) + ((+(5093047738145301297LL)))))));
                var_50 = ((/* implicit */long long int) max((var_50), (min((max(((~(-6038852497955517262LL))), (((long long int) arr_24 [i_13] [i_13] [i_13])))), (max((min((4387944970242193059LL), (-9217232584406252607LL))), (((-1LL) + (-955945296707881968LL)))))))));
            }
            for (long long int i_29 = 0; i_29 < 15; i_29 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_30 = 0; i_30 < 15; i_30 += 2) 
                {
                    for (long long int i_31 = 0; i_31 < 15; i_31 += 1) 
                    {
                        {
                            arr_101 [i_31] [i_13] [i_29] [i_13] [i_13] = min(((+(arr_67 [i_13] [i_13] [i_13] [4LL] [i_13]))), ((((-9223372036854775807LL - 1LL)) ^ (4975599229909999338LL))));
                            var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((var_3) <= ((+(-6753214074848788031LL))))))));
                            var_52 = arr_74 [i_14 - 1] [i_14];
                        }
                    } 
                } 
                var_53 = ((long long int) 862971507047149220LL);
                arr_102 [i_13] = ((/* implicit */long long int) ((min((var_4), (var_13))) <= (min((arr_99 [i_13] [i_14] [i_29] [i_13] [i_13]), (arr_55 [i_13] [i_13] [i_13] [i_13] [i_13])))));
            }
            for (long long int i_32 = 0; i_32 < 15; i_32 += 4) /* same iter space */
            {
                var_54 = (+(arr_75 [3LL] [i_14] [i_14] [i_14]));
                var_55 = ((long long int) arr_60 [9LL] [i_13] [2LL] [i_14 - 1] [i_14]);
                /* LoopSeq 1 */
                for (long long int i_33 = 0; i_33 < 15; i_33 += 4) 
                {
                    var_56 = ((long long int) (+(-4387944970242193045LL)));
                    arr_109 [13LL] [i_13] [i_13] [i_13] = ((long long int) 6789603943117907581LL);
                    var_57 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_77 [i_14 - 1] [i_14 - 1] [i_32] [i_13] [i_32] [i_32]))));
                    var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -9217232584406252607LL))) ? (((/* implicit */int) (((-(var_3))) >= ((-9223372036854775807LL - 1LL))))) : (((/* implicit */int) ((-3098468451202672898LL) > (arr_108 [i_13] [i_14 - 1] [i_33]))))));
                }
            }
        }
        /* LoopSeq 2 */
        for (long long int i_34 = 0; i_34 < 15; i_34 += 4) 
        {
            arr_112 [i_13] [8LL] [i_13] = (-(((long long int) arr_41 [19LL] [i_13] [19LL])));
            arr_113 [i_13] [i_34] [i_13] = ((long long int) ((4382994180954362269LL) != ((-(arr_68 [i_13])))));
            /* LoopNest 3 */
            for (long long int i_35 = 0; i_35 < 15; i_35 += 4) 
            {
                for (long long int i_36 = 3; i_36 < 14; i_36 += 2) 
                {
                    for (long long int i_37 = 1; i_37 < 14; i_37 += 3) 
                    {
                        {
                            var_59 = ((/* implicit */long long int) max((var_59), (((long long int) arr_3 [i_35]))));
                            arr_120 [i_13] [i_34] [i_13] [i_36] [i_36] [i_13] [i_36 - 3] = arr_59 [i_13] [i_34] [i_35];
                            arr_121 [i_34] [i_34] [i_13] [i_13] [12LL] [i_34] [i_34] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) -7511105023832895787LL)) ? (5687202906518931887LL) : ((-9223372036854775807LL - 1LL)))));
                            var_60 = ((/* implicit */long long int) max((var_60), (((long long int) -6789603943117907582LL))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_38 = 2; i_38 < 11; i_38 += 4) 
        {
            var_61 = ((((arr_74 [i_38] [i_38 + 4]) | (-7511105023832895776LL))) ^ (4382994180954362293LL));
            arr_125 [i_13] [i_13] = (~(4382994180954362271LL));
        }
    }
    var_62 = ((min((((var_2) ^ (var_2))), (max((var_2), (-4975599229909999339LL))))) ^ (((4382994180954362289LL) << (((((-1251614452413690643LL) + (1251614452413690676LL))) - (32LL))))));
}
