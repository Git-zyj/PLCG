/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101290
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_2 [i_0 + 1])) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned int) 255)), (var_6))) : (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [6ULL] [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-7681157037884539643LL)))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7681157037884539642LL))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [0ULL])) ? (var_2) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [5ULL] [5ULL])))))) : (((/* implicit */unsigned long long int) arr_4 [i_1] [1LL] [1LL]))));
                        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) ? (arr_8 [i_0] [i_0 + 1] [10LL]) : (arr_8 [i_0] [i_0 + 1] [i_0])))) || (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 3; i_4 < 23; i_4 += 4) 
    {
        arr_16 [(signed char)9] = ((/* implicit */int) (!(((/* implicit */_Bool) min((-7681157037884539643LL), (arr_14 [i_4 + 1] [i_4 - 1]))))));
        var_12 = ((/* implicit */int) arr_15 [i_4]);
    }
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_0))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(14410063051605254906ULL)))) && (((/* implicit */_Bool) var_4))));
}
