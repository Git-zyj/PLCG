/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124523
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
    var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2752975693513564275LL)), (18446744073709551597ULL)))) || (((/* implicit */_Bool) var_13)))))));
    var_16 = ((/* implicit */long long int) ((var_2) == (((unsigned long long int) min((((/* implicit */unsigned long long int) -2752975693513564276LL)), (11268162418877919058ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = 4386274486507269228ULL;
                var_18 ^= ((/* implicit */unsigned long long int) min((((long long int) 11268162418877919066ULL)), (var_6)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_19 = var_3;
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4386274486507269228ULL), (((/* implicit */unsigned long long int) -3349014480041583296LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8427630329818243511ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_1]) & (((/* implicit */unsigned long long int) var_5))))))))));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_2 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_13 [7ULL] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_11 [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) var_13)))))));
                        var_22 = ((/* implicit */unsigned long long int) var_4);
                        var_23 = ((unsigned long long int) ((arr_8 [i_0] [i_0] [i_3] [i_0]) & (arr_9 [i_4] [i_4 - 3] [i_0] [i_4])));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_19 [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) (+(var_6)));
                            arr_20 [i_5] [i_1] [5LL] [i_5] [i_5] = arr_1 [1ULL] [i_0];
                            arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((unsigned long long int) ((unsigned long long int) var_0));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_26 [i_1] [i_5] = max((7178581654831632567ULL), (7178581654831632576ULL));
                            var_24 = ((/* implicit */unsigned long long int) ((long long int) -2752975693513564275LL));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_25 = var_0;
                            var_26 *= max((min((((((/* implicit */_Bool) arr_14 [i_8] [i_1] [i_8])) ? (arr_18 [i_0] [i_5 - 1] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_3)))), (7178581654831632550ULL))), (((((/* implicit */unsigned long long int) var_3)) & (arr_9 [i_0] [i_1 + 1] [i_5 + 1] [i_5]))));
                            var_27 = var_7;
                            var_28 = ((/* implicit */unsigned long long int) var_6);
                            arr_31 [i_5] = ((/* implicit */unsigned long long int) 4352030853787521789LL);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_29 |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 662332270648015833ULL))))));
                            var_30 = ((/* implicit */unsigned long long int) var_13);
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (max((((((/* implicit */_Bool) 3ULL)) ? (3195476076598911921ULL) : (14060469587202282375ULL))), (((/* implicit */unsigned long long int) var_5))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) min((min((arr_14 [i_0] [i_1 - 2] [i_0]), (arr_14 [2ULL] [i_1 - 3] [i_0]))), (((unsigned long long int) arr_15 [i_0] [i_1 - 2] [i_1 - 2] [i_5 + 1])))))));
                            var_33 = arr_11 [i_1 + 1] [i_1 - 1];
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 4) /* same iter space */
                        {
                            arr_37 [i_10] [i_5] [i_5] [17ULL] = 7178581654831632565ULL;
                            arr_38 [i_0] [i_0] [i_3] [i_5] [i_5] [i_10] = ((/* implicit */unsigned long long int) arr_32 [9ULL] [9ULL] [i_10]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
                        {
                            var_34 += ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((((/* implicit */unsigned long long int) var_3)) % (15000058444030512441ULL))));
                            var_35 = ((/* implicit */unsigned long long int) ((long long int) ((var_12) % (var_1))));
                            var_36 = ((/* implicit */long long int) ((arr_36 [i_5] [i_5 + 1] [i_5] [i_5] [i_11 + 3]) * (((/* implicit */unsigned long long int) var_13))));
                            var_37 ^= ((/* implicit */long long int) ((arr_40 [i_5 + 1] [i_1 - 3] [i_1 - 1]) > (arr_40 [i_5 - 1] [i_1 - 3] [i_1 - 3])));
                            arr_42 [i_3] [i_1] [14LL] [i_1] [i_3] &= ((((arr_14 [i_1] [22ULL] [i_0]) <= (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_16 [i_5 - 3] [i_3] [i_3]));
                        }
                        arr_43 [i_5] [i_3] [i_5] [i_1 - 1] [i_5] = arr_29 [i_3] [i_5] [i_5] [i_5 - 3] [i_5 - 2] [i_5];
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        arr_46 [20ULL] [i_1] [i_3] [i_1] = ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) < (11245493806341128638ULL)))), (var_2)));
                        arr_47 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((7178581654831632537ULL), (11268162418877919049ULL))), (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) var_0))));
                    }
                    var_38 ^= min((12641174736475911819ULL), (18446744073709551615ULL));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            {
                arr_55 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((-273325258072706914LL), (var_10))), (arr_7 [i_14] [i_14] [i_13]))))));
                var_39 = ((/* implicit */unsigned long long int) var_6);
                arr_56 [6LL] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
}
