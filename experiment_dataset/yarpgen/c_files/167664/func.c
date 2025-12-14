/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167664
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
    var_17 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? ((~(-1))) : (((/* implicit */int) (signed char)-4)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) var_11)), (arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_1 [9U])) : ((+(((/* implicit */int) ((unsigned short) var_5))))))))));
                var_20 += ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
}
