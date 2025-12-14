/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110852
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
    var_17 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (min((max((((/* implicit */long long int) (_Bool)1)), (-5023783648297361276LL))), (((/* implicit */long long int) var_2))))));
                var_18 = ((/* implicit */_Bool) min((max(((signed char)-75), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) var_5))));
            }
        } 
    } 
}
