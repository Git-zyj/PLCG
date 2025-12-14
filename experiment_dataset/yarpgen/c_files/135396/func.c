/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135396
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
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1546165618)) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)-17)))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18565)) ? (((var_2) + (18446744073709551600ULL))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (arr_0 [20])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)41))))) : (min((((/* implicit */unsigned long long int) (signed char)-12)), (4156669153122210944ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 146925770)) ? (4156669153122210944ULL) : (((/* implicit */unsigned long long int) 930638047))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12455))) : (var_9)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 *= ((/* implicit */unsigned long long int) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */int) arr_0 [i_2]);
            arr_8 [i_1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1]) : (var_11)))) ? (var_11) : (((((/* implicit */_Bool) 610310246)) ? (((/* implicit */int) (short)-18557)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) > (-146925777)))));
        }
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) ^ (6923504353660420136ULL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 610310244))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_3]))) : (var_5)));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] = 15813900379270416779ULL;
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_1] [i_3] [i_1] [i_4] [i_6])))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (-6983100293136096199LL)));
                            var_19 = arr_4 [i_4];
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_20 += ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)26)))));
            arr_24 [i_1] = ((/* implicit */long long int) (~(-393165377)));
            arr_25 [i_1] [i_7] = 9277236764769490433ULL;
            var_21 = ((/* implicit */unsigned long long int) var_3);
        }
        for (signed char i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_22 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_1]));
                    var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)18551)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (6860559111960587489LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) : (var_2)))));
                    arr_36 [i_1] [i_1] = ((signed char) ((((/* implicit */_Bool) arr_2 [i_8 - 1] [i_8 + 1])) ? (arr_2 [i_8 - 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (13ULL)));
                    arr_37 [i_1] [i_8] [i_9] [i_9] [i_9] = 16252928;
                }
                for (short i_11 = 2; i_11 < 23; i_11 += 4) 
                {
                    var_25 |= ((/* implicit */long long int) min((min((9741419720501520098ULL), (((/* implicit */unsigned long long int) var_0)))), (((((/* implicit */_Bool) var_9)) ? (arr_32 [i_11 - 2]) : (((/* implicit */unsigned long long int) var_5))))));
                    arr_41 [i_1] [i_1] = ((/* implicit */int) ((1089195642) == (1425834378)));
                }
                var_26 = (-(((((/* implicit */_Bool) ((long long int) var_4))) ? (arr_2 [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_47 [i_1] [i_1] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */long long int) (~(-1425834379)));
                        var_27 = ((/* implicit */long long int) arr_13 [i_8 + 1] [i_1]);
                    }
                    arr_48 [i_8] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_1] [i_8 - 1] [i_8 - 1] [i_1] [i_12]))));
                    var_28 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_8 - 1] [i_1])) ? (((/* implicit */int) arr_28 [i_8 - 1] [i_1])) : (((/* implicit */int) arr_18 [i_12] [i_1] [i_8 - 1] [i_1] [i_8]))));
                    arr_49 [i_1] [i_12] [i_12] [i_9] [i_12] [i_12] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)18554)) ? (14463864374127943394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))));
                }
            }
            for (int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((unsigned long long int) var_10)), (((((/* implicit */_Bool) -470805263)) ? (((/* implicit */unsigned long long int) -16252949)) : (11329532919178202074ULL))))))));
                var_31 = 3557247872514087353ULL;
            }
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8178757692765135113ULL)) ? (17005507302585110328ULL) : (5055006887262729801ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-31))))) : (max((((/* implicit */unsigned long long int) (short)6788)), (arr_20 [i_1] [i_8 + 1])))));
        }
    }
    var_33 = ((/* implicit */signed char) var_4);
}
