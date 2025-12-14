/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155513
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
    var_10 = (!(((/* implicit */_Bool) var_9)));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((-2147483647 - 1)) : (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))))));
                var_13 = ((/* implicit */int) (-(min((((/* implicit */long long int) 1846349835)), (-3967577939614652782LL)))));
                var_14 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_4 [i_0 - 2] [i_1 - 1]))) != (arr_4 [i_0 - 3] [i_1 + 1])));
            }
        } 
    } 
}
