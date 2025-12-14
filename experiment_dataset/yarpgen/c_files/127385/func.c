/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127385
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((long long int) max((var_3), ((signed char)-109)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((var_11), (var_17))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) var_15)))))))), ((~(max((((/* implicit */unsigned long long int) var_2)), (var_6)))))));
                var_20 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) min((var_6), (var_8)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        arr_6 [i_2] = (signed char)-109;
        arr_7 [i_2] = max(((-(min((arr_4 [i_2 + 2]), (arr_4 [i_2]))))), (arr_5 [i_2 + 3]));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_21 = var_12;
                                arr_20 [i_2] [i_4] [i_4] [i_5 - 1] [i_6] = arr_19 [i_2] [i_3] [0LL];
                                var_22 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_3] [i_5 + 2] [i_3])), (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_6] [i_3] [i_4])))) : (min((arr_17 [i_6]), (var_5))))), (min((var_2), (((/* implicit */long long int) arr_11 [i_2]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_4] [11ULL] [i_4])), (var_7)))) || (((/* implicit */_Bool) arr_9 [i_4])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_2)))))))) : (max((1152479271624309533ULL), (min((var_8), (((/* implicit */unsigned long long int) var_1))))))));
                    var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_4] [5ULL] [11LL]), (((/* implicit */long long int) arr_8 [i_3] [i_2] [i_2 - 1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -7451840813308009339LL)), (14984371261726241420ULL)))))));
                    arr_21 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */signed char) max((262143ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_25 -= ((/* implicit */long long int) min((((signed char) arr_24 [i_7])), (((/* implicit */signed char) ((((unsigned long long int) arr_23 [i_7] [i_7])) != (((((/* implicit */_Bool) arr_25 [(signed char)3])) ? (arr_22 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                {
                    var_26 ^= ((/* implicit */signed char) 281474976710655ULL);
                    var_27 = ((/* implicit */signed char) var_8);
                }
            } 
        } 
        var_28 += ((/* implicit */signed char) ((long long int) (-(max((14984371261726241420ULL), (((/* implicit */unsigned long long int) var_13)))))));
        var_29 = (+(var_17));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_16)))) || (((/* implicit */_Bool) var_5))));
        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9007199254740992LL)) ? (17294264802085242072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) != (((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_34 [i_10] [i_10]))))));
    }
    /* vectorizable */
    for (long long int i_11 = 1; i_11 < 18; i_11 += 2) 
    {
        arr_41 [i_11] = (~(var_2));
        arr_42 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11])))))) && (((/* implicit */_Bool) ((unsigned long long int) var_10)))));
        var_32 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_39 [(signed char)4])))) || (((/* implicit */_Bool) (-(arr_37 [5LL]))))));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_37 [i_11 + 1]))));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_40 [i_11]))))) != (((/* implicit */int) var_10))));
    }
}
