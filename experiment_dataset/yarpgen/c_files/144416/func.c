/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144416
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
    var_10 = ((min((17336612614610508181ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4852222802319371568ULL)) && (((/* implicit */_Bool) var_0))))))) | (((var_3) << (((((unsigned long long int) var_2)) - (16248826209796765227ULL))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((unsigned long long int) (-(7485128701137578055ULL))))));
                    arr_9 [i_0] [i_2] [i_0] = arr_7 [i_0] [i_1] [i_1] [i_0];
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [14ULL])) ? (arr_2 [i_0]) : (var_1));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = var_9;
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), ((~(((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? ((~(var_7))) : ((+(3ULL)))))))));
                                var_13 ^= ((((/* implicit */_Bool) min((arr_2 [i_4 + 1]), (arr_2 [i_4 + 2])))) ? (min((6489506347775578457ULL), (17944029765304320ULL))) : ((~(arr_2 [i_4 - 1]))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] [i_0] [i_3] = max((((((/* implicit */_Bool) 17944029765304324ULL)) ? (16489926174724636889ULL) : (1956817898984914753ULL))), (var_2));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (8677145562622486268ULL)))) ? (max((min((0ULL), (16489926174724636872ULL))), (arr_17 [4ULL] [0ULL] [0ULL] [i_0]))) : (((unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) 
                {
                    {
                        arr_29 [i_9] [i_9] = ((((min((11340620365793823626ULL), (arr_4 [i_0] [i_7]))) > (var_5))) ? (arr_19 [i_0] [i_0] [i_0] [i_8 - 2] [i_9]) : (((((/* implicit */_Bool) 3300697914320308084ULL)) ? (1827432830075139226ULL) : (18428800043944247303ULL))));
                        var_15 = ((((/* implicit */_Bool) arr_24 [i_0] [i_9 + 1])) ? (((((/* implicit */_Bool) 3499287448579870259ULL)) ? (arr_26 [i_9 + 3] [i_8 + 1]) : ((-(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(10904521278110582289ULL))) < (((((/* implicit */_Bool) arr_12 [2ULL] [i_7] [i_0])) ? (var_4) : (arr_2 [i_7]))))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_7) < (arr_8 [i_7])))) : (((/* implicit */int) ((17944029765304319ULL) <= (var_2))))))));
            var_17 *= min((var_5), ((~(arr_28 [i_0] [i_0] [i_0] [i_7]))));
            arr_30 [i_7] = var_2;
        }
        for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 2) 
        {
            var_18 += arr_3 [i_0];
            arr_34 [i_0] = (((~(var_2))) / (((((/* implicit */_Bool) max((var_8), (var_1)))) ? (var_3) : (min((var_9), (arr_16 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_26 [i_11] [i_11])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_45 [i_0] [i_10] [i_11] [i_12] [i_12] [i_13] [i_12] = (-((+(arr_37 [i_10 + 3] [i_11 + 1]))));
                            arr_46 [i_13] [i_12] [i_12 - 1] [i_11] [i_10] [i_12] [i_0] = (+(((unsigned long long int) 4262559221054140436ULL)));
                            var_20 = max((((/* implicit */unsigned long long int) ((max((arr_25 [i_0] [i_0] [i_11 + 1] [i_12 - 1]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL]))) <= (((unsigned long long int) arr_37 [i_13] [i_10]))))), (var_5));
                        }
                        arr_47 [i_11 - 2] [i_10 + 1] [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((unsigned long long int) min((17314353344010445399ULL), (var_0)))) > (((((/* implicit */_Bool) max((var_3), (4294967296ULL)))) ? (arr_35 [i_10 - 4] [i_10] [i_12 + 1]) : (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_12 + 1] [i_11 - 1]) : (var_7)))))));
                        var_21 = ((((/* implicit */_Bool) (-((~(var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4611686018418999296ULL) : (17314353344010445399ULL)))) ? (arr_32 [i_11] [i_10]) : (min((3300697914320308084ULL), (arr_7 [i_0] [i_0] [i_11 - 1] [i_12]))))) : (arr_24 [i_0] [i_0]));
                    }
                } 
            } 
            var_22 ^= ((((/* implicit */_Bool) 18446744069414584339ULL)) ? (13350301677203211534ULL) : (17944029765304337ULL));
        }
    }
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        arr_51 [i_14] = 14023826972333083222ULL;
        var_23 = ((((/* implicit */_Bool) ((unsigned long long int) 17ULL))) ? (arr_48 [i_14] [i_14]) : (((((/* implicit */_Bool) 15879147974728237198ULL)) ? (arr_50 [i_14]) : (arr_48 [i_14] [i_14]))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_14])) ? (arr_48 [i_14] [i_14]) : (((arr_48 [i_14] [i_14]) << (((arr_50 [i_14]) - (1078128381469514495ULL)))))))) ? (18309348924650118791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) max((9769598511087065348ULL), (var_4))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    {
                        var_25 = ((8085405904963395016ULL) - (arr_55 [i_15 + 3] [i_15] [i_15 - 1]));
                        arr_61 [i_17] [i_16] [i_15 - 2] [i_14] = (~((+(8677145562622486262ULL))));
                    }
                } 
            } 
        } 
        arr_62 [i_14] = var_4;
    }
    for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            arr_67 [i_18] [i_19] [i_19] = ((((/* implicit */_Bool) (~(max((arr_49 [16ULL]), (6ULL)))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_52 [i_18] [i_18 - 1] [i_19]) : (arr_52 [i_18] [i_18 - 2] [i_18]))) : (min((min((305091616986331822ULL), (13314863516378996438ULL))), (18178155568852397923ULL))));
            var_26 = (~(((unsigned long long int) min((4405104018447331248ULL), (arr_60 [i_19] [i_19] [i_19] [i_19])))));
            arr_68 [i_19] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((max((var_4), (arr_60 [i_18 + 1] [i_19] [i_18] [i_18]))), (((unsigned long long int) 7298602467282032096ULL)))))));
        }
        for (unsigned long long int i_20 = 1; i_20 < 13; i_20 += 4) 
        {
            arr_71 [i_18] = ((((/* implicit */_Bool) ((unsigned long long int) arr_53 [i_20 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1956817898984914727ULL)) ? (18446744069414584350ULL) : (var_9))) == ((-(18446744073709551615ULL))))))) : ((-(((((/* implicit */_Bool) var_6)) ? (arr_59 [0ULL] [i_20] [i_18] [i_20 + 1] [3ULL]) : (arr_56 [i_18] [i_18] [i_20 - 1] [i_18]))))));
            arr_72 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 610843616501352129ULL))));
        }
        for (unsigned long long int i_21 = 2; i_21 < 15; i_21 += 3) 
        {
            arr_75 [i_18] [i_18] = max(((+(((((/* implicit */_Bool) var_3)) ? (var_5) : (arr_70 [i_18 + 1] [i_18]))))), (max((12ULL), (arr_56 [i_18 - 1] [i_18 - 1] [i_21 + 1] [i_21]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 1; i_23 < 15; i_23 += 3) 
                {
                    arr_82 [i_18 - 1] [i_18 - 1] [i_22] [i_22] [i_23 + 1] [i_18 - 1] |= (~(max((min((268588504857153700ULL), (arr_49 [i_18 - 1]))), (((((/* implicit */_Bool) arr_53 [i_23 - 1])) ? (arr_79 [i_18] [i_21 - 1] [i_22] [i_22] [i_18]) : (var_0))))));
                    var_27 = min((min((arr_64 [i_21 - 1]), (arr_53 [i_18 + 1]))), (max((((unsigned long long int) 7923979045279904895ULL)), ((-(var_4))))));
                    var_28 ^= min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) <= (9769598511087065348ULL))))))), (max(((-(13252439418801633034ULL))), (var_1))));
                }
                arr_83 [i_18 - 2] [i_18] [i_18 - 2] = var_1;
            }
            var_29 = 9223372036854775552ULL;
        }
        arr_84 [i_18] [2ULL] = min((var_9), (((((/* implicit */_Bool) 576460752303423487ULL)) ? (min((arr_53 [i_18]), (14933919113644291771ULL))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (arr_50 [i_18 - 2]))))));
    }
    for (unsigned long long int i_24 = 2; i_24 < 16; i_24 += 3) /* same iter space */
    {
        arr_87 [i_24] = (-(((var_8) ^ (arr_52 [i_24] [i_24 + 1] [i_24 + 1]))));
        arr_88 [i_24 - 1] = (-(((((/* implicit */_Bool) arr_54 [i_24 - 1] [i_24])) ? (((((/* implicit */_Bool) var_6)) ? (arr_65 [i_24] [i_24] [i_24]) : (3856628730841982234ULL))) : ((~(arr_70 [14ULL] [14ULL]))))));
    }
    var_30 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 4) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 3) 
        {
            {
                arr_94 [i_25] [i_25] = ((unsigned long long int) (~(((((/* implicit */_Bool) arr_90 [i_25])) ? (6425842542895912922ULL) : (arr_54 [i_25] [14ULL])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 1; i_27 < 19; i_27 += 3) 
                {
                    arr_97 [i_25] [i_25] [i_25] [i_25] = ((((/* implicit */_Bool) min((var_2), (arr_52 [i_27 - 1] [i_27 - 1] [i_27 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((5039455009681857349ULL), (var_7)))))))) : (var_1));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (14180684920039262495ULL)));
                    arr_98 [i_25] [i_26] [i_27 - 1] = ((((/* implicit */_Bool) 8388607ULL)) ? ((+(arr_50 [i_27 + 1]))) : (min((9566374568555308133ULL), (var_5))));
                }
            }
        } 
    } 
}
