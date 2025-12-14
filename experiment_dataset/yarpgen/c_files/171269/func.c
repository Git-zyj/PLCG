/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171269
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
    var_13 = var_1;
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_6) <= (var_3)))), (var_7)))) && (((/* implicit */_Bool) ((((var_9) < (var_4))) ? (min((var_4), (var_9))) : (((((/* implicit */_Bool) 6995660207711638647ULL)) ? (var_12) : (var_1))))))));
    var_15 = max((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))));
    var_16 = var_0;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 -= ((((/* implicit */_Bool) ((var_8) ^ ((~(arr_1 [i_0] [i_1])))))) ? (var_0) : (((((((/* implicit */_Bool) arr_3 [5ULL] [8ULL])) ? (var_10) : (var_0))) & (arr_7 [14ULL] [i_0] [i_2 - 1]))));
                    arr_8 [i_1] = ((unsigned long long int) 18446744073709551603ULL);
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((arr_6 [i_0]) & (((((/* implicit */_Bool) var_10)) ? (9220946675611423086ULL) : (var_7))))), ((-(var_8)))))));
                }
            } 
        } 
    } 
}
