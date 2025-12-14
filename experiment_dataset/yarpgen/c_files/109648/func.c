/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109648
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (_Bool)0;
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)))), (min((var_6), ((signed char)-49)))))) ? (((/* implicit */long long int) 34082130U)) : (-4806783504475227237LL)));
                arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                var_13 = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
    var_14 = (+(((/* implicit */int) max(((short)-1), (((/* implicit */short) var_6))))));
}
