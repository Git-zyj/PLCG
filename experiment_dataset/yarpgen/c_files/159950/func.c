/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159950
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
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))));
                var_14 -= ((/* implicit */signed char) var_0);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (~((+((+(((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */long long int) (~((-(((/* implicit */int) ((signed char) var_4)))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_5)))))))), ((~(((/* implicit */int) var_1))))));
}
