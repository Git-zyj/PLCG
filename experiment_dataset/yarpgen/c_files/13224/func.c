/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13224
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = min((((((/* implicit */_Bool) var_10)) ? (var_4) : (((((/* implicit */_Bool) var_0)) ? (var_10) : (arr_0 [i_0] [1LL]))))), (var_5));
                var_14 = ((/* implicit */long long int) max((var_14), (min((min((var_1), (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1]) : (arr_4 [i_0]))))), (var_2)))));
                var_15 = ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (max((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0]) : (var_7))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (arr_4 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0])))) && (((/* implicit */_Bool) arr_2 [i_0])))))));
                arr_7 [i_0] [i_0 - 1] [i_0] = min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (var_4))), (((((/* implicit */_Bool) var_0)) ? (min((var_12), (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))))))));
                var_16 ^= ((long long int) ((((/* implicit */_Bool) arr_1 [5LL])) ? (max((var_12), (var_8))) : (var_8)));
            }
        } 
    } 
    var_17 = min((var_12), (min((max((var_11), (var_8))), (((((/* implicit */_Bool) var_12)) ? (var_5) : (var_10))))));
    var_18 = ((((/* implicit */_Bool) var_7)) ? (max((min((var_11), (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))) : (((((/* implicit */_Bool) min((var_2), (var_11)))) ? (min((var_7), (var_2))) : (((((/* implicit */_Bool) var_12)) ? (var_2) : (var_12))))));
}
