/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142388
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
    var_11 = ((/* implicit */_Bool) min((var_0), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))) : (min((var_10), (var_10)))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((unsigned long long int) (~(((/* implicit */int) ((11714380301112217804ULL) != (8396904763848910653ULL)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) ^ (var_5)));
        var_14 = ((/* implicit */unsigned long long int) min((((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))), ((~(((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_15 = min((((288221580058689536ULL) / (16006421931854726999ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_16 = ((max((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) && (((/* implicit */_Bool) var_5))));
        var_19 &= ((max((288221580058689533ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) > ((~(arr_2 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_20 |= ((/* implicit */_Bool) (-(arr_3 [i_2])));
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_2]) ? (var_10) : (arr_3 [i_2])))) ? (arr_4 [i_2] [i_2]) : (var_9)));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_22 &= 9223372036854775808ULL;
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((arr_0 [i_3]) ? (arr_4 [i_4] [i_3]) : (((arr_6 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                var_24 ^= ((var_6) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_2]))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (((var_2) / (var_2)))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (16006421931854726985ULL)))) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2]))) ^ (arr_20 [i_3] [i_3] [i_6] [i_7])))) ? (((arr_19 [i_2] [i_2] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_5] [i_7]))) : (var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_6] [i_5] [i_3] [i_3]))) * (var_5))));
                            var_28 &= arr_24 [i_2] [i_6] [i_7];
                        }
                    } 
                } 
                var_29 = ((((/* implicit */_Bool) 3482681130024848651ULL)) ? (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3])) ? (arr_18 [i_2]) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))));
            }
            for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_8 + 2] [i_3] [i_8])) != (((/* implicit */int) arr_19 [i_8 - 2] [i_3] [i_8]))));
                var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4468415255281664ULL)) ? (arr_13 [i_2] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_8 - 1]))))) % (((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                var_32 &= ((/* implicit */unsigned long long int) arr_17 [i_2]);
            }
            var_33 = ((((/* implicit */_Bool) ((arr_27 [i_3]) ? (arr_2 [i_2] [i_3]) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_2]))) : (arr_4 [i_2] [i_3]));
            var_34 = (((_Bool)1) || (((/* implicit */_Bool) 18158522493650862079ULL)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))));
            var_36 += ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9]))) >= (var_10))) ? ((~(arr_21 [i_2] [i_2] [i_9] [i_9]))) : (((arr_5 [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_9] [i_2])))))));
            var_37 = ((/* implicit */_Bool) var_10);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_38 = ((/* implicit */_Bool) min((var_38), (arr_8 [i_2])));
                    var_39 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [i_10] [i_2]))) != (arr_28 [i_10]))) && (((/* implicit */_Bool) ((arr_10 [i_11] [i_10] [i_2]) ? (16409923180596117590ULL) : (arr_28 [i_10])))));
                    var_40 = (+(arr_18 [i_10 - 2]));
                    var_41 += (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10 - 2] [i_10 + 1] [i_10]))) : (8112971847239058301ULL));
                    var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (arr_3 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10 - 2])))));
                }
            } 
        } 
        var_43 = arr_29 [i_2] [i_2];
    }
}
