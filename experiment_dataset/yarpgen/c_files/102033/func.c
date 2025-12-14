/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102033
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)70))) || (((/* implicit */_Bool) 1671077108))))), (((((/* implicit */long long int) ((3860794188U) >> (((((/* implicit */int) arr_5 [i_0])) - (54676)))))) | (6971520393263560846LL)))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) < (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (3338878301U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) 845190166U);
}
