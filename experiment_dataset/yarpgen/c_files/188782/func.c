/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188782
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [8LL] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(min((67553994410557440LL), (-351919502941290534LL))))))));
                    var_13 = ((/* implicit */long long int) arr_3 [i_0] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = min((min(((+(-67553994410557434LL))), (((/* implicit */long long int) (signed char)-47)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_4] [i_3] [i_0] [i_1] [i_0])))) : (((long long int) var_7)))));
                                arr_13 [i_2] = (-((-((~(-67553994410557416LL))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 67553994410557456LL))))), ((signed char)46)))) ? (67553994410557439LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))))));
                                arr_14 [i_2] [i_3 + 1] [i_3 + 1] [3LL] [i_4] [i_2] = ((long long int) (signed char)48);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((long long int) var_6));
                    arr_15 [i_2] = ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-2089464045454800341LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_11 [i_0] [7LL] [7LL] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_17 |= var_4;
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_18 = (+(-4897356718441383635LL));
        arr_18 [i_5] = ((/* implicit */signed char) min((arr_17 [i_5]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_5] [i_5]) : (var_1)))))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) max((var_19), (var_6)));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((arr_20 [i_5]) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)68)) - (21))))))))));
        }
        for (long long int i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((((~(((/* implicit */int) arr_22 [i_7])))) + (2147483647))) << (((((-351919502941290535LL) + (351919502941290552LL))) - (17LL))))))));
            arr_24 [i_5] [i_7 + 3] = ((/* implicit */signed char) max((max((arr_16 [i_7] [i_7 + 2]), (((/* implicit */long long int) (signed char)20)))), (((((/* implicit */_Bool) (-(var_2)))) ? (var_1) : (((((/* implicit */_Bool) var_12)) ? ((-9223372036854775807LL - 1LL)) : (var_0)))))));
            var_22 = ((/* implicit */long long int) (signed char)1);
            arr_25 [2LL] = ((signed char) (-(6763812754310610244LL)));
            var_23 += ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) (signed char)47)) || (((/* implicit */_Bool) var_10)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (-9198020904974552249LL) : (arr_17 [i_7]))))))));
        }
        for (long long int i_8 = 2; i_8 < 22; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_9 = 3; i_9 < 22; i_9 += 2) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), ((-(-5780939596810398725LL)))));
                var_25 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_3)), (-351919502941290541LL)))));
                arr_33 [i_5] [i_5] [i_8] [i_9] &= ((/* implicit */long long int) ((signed char) arr_20 [i_9]));
                arr_34 [i_5] [i_8] [i_9] [i_9 - 3] = ((/* implicit */signed char) max(((~(-4775612833822454033LL))), ((-((-(var_12)))))));
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 3; i_11 < 23; i_11 += 3) 
                {
                    arr_39 [i_5] [i_11] [i_5] [i_11] = ((/* implicit */long long int) var_4);
                    var_26 = ((/* implicit */long long int) var_9);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) / (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((var_0), (((/* implicit */long long int) arr_31 [i_10] [i_8] [i_5]))))))) : (((-1LL) * (-2305843009213693952LL))))))));
                    arr_40 [i_11] [11LL] [i_11] [i_11] = ((/* implicit */long long int) var_8);
                }
                for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_46 [i_13] [i_13] [i_13] [i_12] [i_13] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_8))))));
                        var_28 = ((/* implicit */signed char) ((long long int) var_12));
                    }
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) : (arr_20 [i_5])))) % (((arr_16 [i_12] [(signed char)15]) / (2089464045454800341LL))))))));
                        var_30 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((long long int) (signed char)51))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (351919502941290523LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                    }
                    var_31 = (signed char)-15;
                    arr_50 [i_5] [i_5] [i_5] [i_5] [i_5] = (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(351919502941290540LL))) : (max((-4425545074753831997LL), (arr_47 [i_12] [i_12] [i_12] [i_10] [i_12] [i_8] [i_5]))))));
                    var_32 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_43 [i_5] [i_8 + 2] [i_8] [i_8] [0LL] [i_5] [i_8]))))))), ((+((~(var_6)))))));
                }
                var_33 = ((/* implicit */signed char) ((long long int) 7957548238805103288LL));
            }
            for (signed char i_15 = 3; i_15 < 23; i_15 += 1) 
            {
                var_34 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))) : ((~(max((arr_52 [i_5] [i_15] [15LL] [i_5]), (((/* implicit */long long int) (signed char)-101)))))));
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? ((+(-7957548238805103288LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
            }
            var_36 = (-(var_6));
        }
        arr_54 [(signed char)12] [i_5] = ((/* implicit */signed char) var_1);
        /* LoopNest 3 */
        for (long long int i_16 = 1; i_16 < 23; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    {
                        arr_64 [i_5] [i_16] [i_18] [i_17] [1LL] = (((!(((/* implicit */_Bool) max((-6763812754310610244LL), (((/* implicit */long long int) (signed char)-101))))))) ? ((~(6763812754310610244LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_47 [i_5] [i_16 - 1] [i_18] [i_5] [i_16 - 1] [14LL] [i_18])))) ? (((((/* implicit */_Bool) 4897356718441383624LL)) ? (4897356718441383636LL) : (var_10))) : (((((/* implicit */_Bool) 6763812754310610235LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) : (6763812754310610242LL)))))) ? (8778913153024LL) : (max((arr_62 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]), (((/* implicit */long long int) (signed char)52))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
    {
        var_38 = ((/* implicit */signed char) -6763812754310610249LL);
        var_39 = ((/* implicit */signed char) ((long long int) arr_66 [i_19]));
    }
    var_40 = ((/* implicit */long long int) var_4);
}
