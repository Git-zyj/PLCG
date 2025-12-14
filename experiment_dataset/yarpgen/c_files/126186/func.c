/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126186
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */signed char) arr_4 [i_0]);
                arr_6 [i_1] [i_1] [i_1 + 2] = ((((((/* implicit */_Bool) ((arr_4 [i_1]) & (10470778040285232557ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) : ((~(var_9))))) << (((/* implicit */int) ((((/* implicit */_Bool) 10470778040285232557ULL)) || (((/* implicit */_Bool) min((7975966033424319037ULL), (7975966033424319037ULL))))))));
                var_12 = ((/* implicit */signed char) 9684588543914911786ULL);
            }
        } 
    } 
    var_13 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)109)))))));
}
