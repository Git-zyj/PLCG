/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1476
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 3296880108595346357ULL)))), ((_Bool)1))))) + (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
        var_17 = var_1;
    }
    var_18 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) 11698479086847315421ULL);
                arr_10 [i_1] = max((((var_7) ? (arr_9 [i_1]) : (var_11))), (((((/* implicit */_Bool) 3296880108595346370ULL)) ? (var_8) : (arr_9 [i_2]))));
            }
        } 
    } 
}
