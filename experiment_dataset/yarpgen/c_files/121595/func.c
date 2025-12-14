/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121595
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
    var_16 -= ((/* implicit */signed char) 0ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (26ULL) : (arr_6 [5ULL] [i_0 - 2] [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)112)))))));
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2] [i_1 - 1]))))), (max((var_0), (((/* implicit */unsigned long long int) (signed char)-7))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) max((var_1), (((/* implicit */signed char) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_10 [i_2 + 2] [i_2])))) : (((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9)))));
        arr_12 [(_Bool)1] = ((/* implicit */_Bool) (~(max((arr_8 [i_2 + 1]), (arr_8 [i_2 + 3])))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_15 [i_3 - 1] [i_3 + 3])));
                    var_21 += min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7425515324090262189ULL))))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_3]), (arr_9 [i_3]))))) : (var_14))));
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9127230835535560846ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-47))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        var_22 += ((/* implicit */signed char) ((((unsigned long long int) arr_22 [i_3 + 1] [i_3 - 1] [22ULL] [i_3 + 1])) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) == (var_5)))) : (((/* implicit */int) arr_19 [i_3 - 1] [i_4] [i_6] [i_6])))))));
                        var_23 = ((/* implicit */signed char) var_0);
                        var_24 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_19 [22ULL] [i_4] [i_5] [i_6])) : (((/* implicit */int) arr_10 [17ULL] [i_5]))))) : ((-(var_15))))), ((~(var_7)))));
                        arr_24 [6ULL] [21ULL] [i_5] = min((18446744073709551615ULL), (12710426969440867350ULL));
                        arr_25 [i_3] [7ULL] [7ULL] [(signed char)21] = var_14;
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) (((~(18446744073709551615ULL))) - (var_10)));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min(((~(arr_27 [i_3 + 2]))), (((arr_23 [i_3 - 3] [i_3 - 3] [i_3 + 2] [i_3]) ? (arr_27 [i_3 + 3]) : (arr_20 [i_3 + 1])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 24; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) var_0);
                            var_28 = ((unsigned long long int) (signed char)-109);
                            var_29 += ((/* implicit */signed char) ((((var_2) ? (var_10) : ((-(18446744073709551615ULL))))) << (((/* implicit */int) ((((/* implicit */_Bool) 536870911ULL)) && (((/* implicit */_Bool) 0ULL)))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (0ULL))), ((_Bool)1)));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((18446744073709551591ULL) + (5559249072191500895ULL)))))) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                            var_32 = (+(15ULL));
                            arr_36 [i_3] [i_4] [i_8] [i_8] [i_10 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-1)), (3277560600433361101ULL)))) ? (((((/* implicit */_Bool) 10505770515929781778ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) : (1821706321621968396ULL))) : (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))))))) ? (((((/* implicit */_Bool) (~(arr_20 [i_5])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (7848452011581584320ULL))) : (1956678139323702171ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                        }
                        arr_37 [i_3] [i_3] [i_8] [i_5] [i_8] = var_12;
                        arr_38 [i_3] [i_8] [i_5] [i_4] = arr_15 [i_8] [11ULL];
                    }
                }
            } 
        } 
        var_33 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_3 - 1] [i_3 + 3] [2ULL] [i_3])) : (((/* implicit */int) arr_23 [i_3 - 1] [i_3 + 3] [(_Bool)1] [i_3 - 3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (13941275437063314949ULL) : (arr_8 [i_3])))) ? (arr_26 [i_3 + 3] [i_3 - 2]) : (((((/* implicit */_Bool) 12764702570734391903ULL)) ? (6168570053075653441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        arr_39 [i_3] |= ((((/* implicit */_Bool) ((((unsigned long long int) 10505770515929781778ULL)) ^ (((((/* implicit */_Bool) arr_28 [i_3] [i_3] [(signed char)9] [i_3] [(signed char)9])) ? (12764702570734391903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((arr_27 [i_3 - 1]), (arr_27 [i_3 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_43 [i_11] = ((/* implicit */unsigned long long int) var_3);
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_10)))))))));
    }
}
