/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126984
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((_Bool) -3472083768176440101LL)))));
                    arr_6 [i_0] [i_1] [i_1 + 1] [i_2] |= arr_2 [i_0 - 1] [i_2];
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2] [3LL] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_6), (arr_8 [i_3 - 1] [i_3 + 2] [(_Bool)0] [i_3 + 2] [i_3 + 3])))), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_1] [i_1]) : (arr_5 [i_2])))) ? (-6616047541012164893LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                        arr_10 [i_0] [(_Bool)1] [i_0] [5LL] [i_2] [i_3 + 3] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                        var_20 = var_6;
                    }
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
                    {
                        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_1 + 3] [i_1 + 2]), (arr_4 [i_0 - 1] [i_1 + 1] [i_1 + 3])))) ? ((-(arr_4 [i_0 - 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
                        var_22 = (~(((long long int) ((_Bool) var_7))));
                        arr_13 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) min((((((_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))))) : ((-(-2623735368484072676LL))))), (3840811579553205205LL)));
                        arr_14 [i_4] [9LL] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_16)))))), (((arr_5 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 2])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_23 = max((max((-26LL), (-8131162241121773215LL))), (((/* implicit */long long int) (_Bool)0)));
            var_24 -= ((long long int) (_Bool)1);
            var_25 = ((/* implicit */long long int) ((_Bool) ((long long int) arr_16 [i_5 - 1] [i_5 - 1])));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((arr_8 [i_0 - 1] [i_0 - 1] [i_0] [6LL] [(_Bool)1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            arr_19 [i_0 - 1] = ((((long long int) -2623735368484072668LL)) != (((/* implicit */long long int) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (max((((long long int) -3515595307193919986LL)), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
            var_28 *= arr_17 [i_0 - 1];
            var_29 = ((/* implicit */long long int) (+(((var_14) ? (((/* implicit */int) arr_18 [i_0 - 1])) : (((/* implicit */int) (_Bool)0))))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((_Bool) (_Bool)1))));
        }
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_23 [(_Bool)1] [i_7 - 1] &= ((/* implicit */long long int) ((_Bool) arr_20 [i_7 - 1]));
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 += (_Bool)1;
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((_Bool) ((arr_27 [i_7 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_7 - 1]))))))));
                var_33 = max((((_Bool) ((_Bool) (_Bool)1))), (((((arr_17 [i_9]) ? (-2366918371787085311LL) : (var_17))) == (((/* implicit */long long int) ((var_14) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                var_34 -= ((long long int) arr_26 [i_7]);
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_35 *= ((/* implicit */_Bool) ((long long int) ((long long int) (~(arr_2 [i_7] [i_7])))));
                    var_36 = (+((+((-9223372036854775807LL - 1LL)))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_37 = arr_17 [i_7];
                    var_38 |= arr_3 [i_7] [i_9] [i_11];
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), (((long long int) ((long long int) arr_3 [i_7] [i_7] [i_7 - 1])))));
                        var_40 = (-(((arr_24 [i_7]) >> (max((((/* implicit */long long int) arr_20 [i_7 - 1])), (arr_5 [i_7]))))));
                        var_41 = ((/* implicit */long long int) max((var_41), ((-((-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_17)))))))));
                        arr_38 [i_7 - 1] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (_Bool)1);
                        var_42 = arr_5 [i_9];
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_41 [i_7] [i_8] [i_9] [i_7] [i_12] [i_12] [i_14] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((_Bool) arr_30 [i_7] [i_8] [10LL] [i_12] [i_14]))), (9223372036854775801LL))));
                        arr_42 [i_7] [i_14] [i_14] [i_14] = -2919896738509370125LL;
                        var_43 *= ((/* implicit */_Bool) var_9);
                    }
                    arr_43 [i_7] [i_8] [i_8] [i_8] [i_9] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [i_7 - 1])), (var_0)))) ? (max((-590358642107149597LL), (((/* implicit */long long int) arr_26 [i_7])))) : (((long long int) arr_29 [i_7 - 1] [i_7 - 1] [i_7] [5LL]))))));
                    arr_44 [i_7 - 1] [i_7] [i_8] [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-590358642107149597LL) | (arr_15 [i_7])))) ? (arr_15 [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2366918371787085310LL)) ? (((/* implicit */int) arr_31 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_31 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_44 *= ((/* implicit */_Bool) ((long long int) arr_4 [i_7] [i_7] [i_7 - 1]));
                    arr_48 [i_7] [i_7] = (+((+(arr_35 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                    arr_49 [i_7] = ((min((arr_16 [i_7 - 1] [i_7 - 1]), ((_Bool)1))) ? (min((((/* implicit */long long int) arr_16 [i_7 - 1] [(_Bool)0])), (9223372036854775744LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1]))))));
                }
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_45 -= ((/* implicit */_Bool) 3703500147931255470LL);
                arr_53 [i_7] [i_7] [i_8] [4LL] = ((/* implicit */_Bool) ((((var_1) ? (((long long int) var_5)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) >> (max((((/* implicit */long long int) (_Bool)1)), (arr_15 [i_7])))));
            }
            for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (long long int i_19 = 1; i_19 < 10; i_19 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) ((max((2366918371787085309LL), (((/* implicit */long long int) arr_32 [i_7] [3LL] [i_17])))) % ((-(-6701863825434270486LL)))));
                            var_47 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_54 [i_18 - 1] [i_18 - 1] [i_18 - 1]))))));
                            var_48 += ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_58 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_18 - 1] [(_Bool)1])))));
                        }
                    } 
                } 
                arr_60 [i_7] = (((+(arr_4 [i_7] [i_7 - 1] [6LL]))) != (((/* implicit */long long int) ((/* implicit */int) var_2))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_63 [i_8] [i_7] = ((/* implicit */_Bool) ((arr_12 [i_7] [i_7 - 1] [i_8] [i_20]) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : (((min(((_Bool)1), ((_Bool)1))) ? (arr_25 [i_7 - 1] [i_7]) : (var_15)))));
                var_49 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_11 [i_7 - 1] [(_Bool)1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
            }
            var_50 *= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_52 [0LL])))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_67 [i_7] [i_21] = ((/* implicit */_Bool) 9223372036854775801LL);
            var_51 = arr_27 [i_7];
            var_52 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -1225019544743212162LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) ((_Bool) var_8)))));
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((_Bool) (_Bool)1)))) ? (((long long int) arr_55 [(_Bool)1] [i_7 - 1] [i_7 - 1])) : (7477157591123978630LL)));
            var_54 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 4528658586773572065LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [(_Bool)1] [i_21] [i_21] [(_Bool)1]))) : (-5149410605663612667LL))))) < ((((_Bool)1) ? (min((var_12), (((/* implicit */long long int) arr_0 [i_7] [(_Bool)1])))) : (((long long int) 2192816161949504253LL)))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_55 += ((/* implicit */_Bool) max((((long long int) ((arr_32 [i_7] [i_7 - 1] [i_22]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2117102861157765432LL)))), (((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_3))))))));
            arr_72 [i_7] [i_22] = ((/* implicit */long long int) var_2);
        }
        arr_73 [(_Bool)1] |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_27 [i_7])) << ((((-(var_8))) + (7495442470376189245LL))))));
    }
    var_56 = max((((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_12)))), (((/* implicit */long long int) var_11)));
    var_57 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (max((var_9), (((/* implicit */long long int) (_Bool)1)))) : (((long long int) var_4))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((long long int) (_Bool)0)) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12))))) : (var_15));
}
