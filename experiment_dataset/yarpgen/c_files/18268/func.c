/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18268
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
    var_15 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */_Bool) ((short) (signed char)24));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = max(((signed char)58), (arr_3 [i_0] [i_1 - 1]));
                var_19 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)20))));
                var_20 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            }
        } 
    } 
}
