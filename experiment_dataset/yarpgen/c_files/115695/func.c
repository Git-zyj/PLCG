/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115695
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
    var_17 = ((/* implicit */unsigned short) max((((var_5) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))), (((/* implicit */long long int) ((_Bool) -1891967201597849234LL)))));
    var_18 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (((unsigned long long int) ((((/* implicit */_Bool) 1891967201597849226LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_0 [i_0] [i_0]))))));
                var_20 = ((/* implicit */int) arr_1 [i_0] [i_1]);
            }
        } 
    } 
}
