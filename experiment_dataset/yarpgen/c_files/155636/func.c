/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155636
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] = arr_2 [4ULL];
        arr_5 [i_0] = (+(var_4));
        var_17 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_18 = arr_2 [i_1];
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 3] [i_2]))) : (var_4))))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) var_14))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 += var_7;
}
