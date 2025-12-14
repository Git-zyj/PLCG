/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155665
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) var_8);
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_2 [i_1 + 2] [i_1]);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                }
            } 
        } 
    }
    var_17 -= ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */signed char) var_2);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) var_3)), (var_5))))))) : (max((var_11), (((/* implicit */long long int) var_0))))));
}
