/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111331
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
    var_15 = ((/* implicit */int) min(((((!(((/* implicit */_Bool) (unsigned short)32764)))) ? (min((((/* implicit */long long int) var_2)), (140737488355327LL))) : (((/* implicit */long long int) var_9)))), (var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (short)4096)))))), (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */unsigned long long int) 140737488355340LL)) : (arr_1 [i_1 + 1])))));
                arr_6 [i_1 + 1] [14LL] = ((/* implicit */signed char) max((((/* implicit */int) (short)-17761)), (arr_3 [(unsigned short)6] [7ULL])));
            }
        } 
    } 
}
