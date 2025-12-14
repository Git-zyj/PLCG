/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172829
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3992684883U)) ? (908836793U) : (((/* implicit */unsigned int) 2147483642))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_1] [i_0]))) : ((~(arr_0 [i_0])))))) || (((/* implicit */_Bool) arr_0 [i_1]))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) 908836797U))));
                var_12 ^= ((/* implicit */int) ((unsigned int) var_9));
            }
        } 
    } 
    var_13 = max(((+(((/* implicit */int) (short)9)))), (((/* implicit */int) ((3299959770U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)28903)))))));
}
