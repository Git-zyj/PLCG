/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105726
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1] [i_0 + 1])))));
                arr_6 [i_0] = ((/* implicit */unsigned short) 1311706935);
                arr_7 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)8)), (-7006096415844924825LL)))) ? (((int) var_4)) : (((/* implicit */int) (short)205))))) != (max((-881874952919113834LL), (((/* implicit */long long int) var_5))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */signed char) -1311706946);
    var_23 = ((/* implicit */signed char) max(((~((~(var_10))))), (max((((/* implicit */int) (_Bool)1)), ((~(0)))))));
}
