/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159611
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) var_8);
        arr_2 [19] [19] &= ((long long int) max((((long long int) 1433186548)), (((arr_1 [i_0]) ^ (arr_1 [5LL])))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(arr_3 [i_1] [i_1])))), (arr_1 [i_1])))) ? (min((arr_3 [i_1] [i_1]), (((((/* implicit */_Bool) 1433186548)) ? (-1433186543) : (arr_0 [i_1]))))) : (((int) max((var_13), (-1433186555)))))))));
        arr_5 [0] [0] = ((/* implicit */long long int) ((int) max((max((var_4), (arr_4 [i_1]))), (0LL))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_2] [i_1] [i_2] = min((((/* implicit */long long int) max((arr_0 [i_3]), (arr_0 [i_1])))), (min((arr_6 [i_1] [i_2]), (0LL))));
                    arr_15 [i_1] [i_1] = ((/* implicit */int) max((arr_13 [0LL] [i_2] [i_3] [i_3]), (((/* implicit */long long int) -1433186549))));
                }
            } 
        } 
        arr_16 [i_1] [3LL] = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_20 = (~(max((min((arr_6 [i_4] [i_4]), (arr_1 [i_4]))), (((((/* implicit */_Bool) 0LL)) ? (3302489753183295868LL) : (arr_11 [i_4]))))));
        var_21 = -1433186548;
    }
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (var_9) : (var_11)));
    var_23 = (+(((min((((/* implicit */long long int) var_15)), (var_16))) | (((/* implicit */long long int) ((var_3) | (-1094806448)))))));
    var_24 = ((((/* implicit */_Bool) var_13)) ? (((long long int) (-(var_8)))) : ((-9223372036854775807LL - 1LL)));
    var_25 = var_3;
}
