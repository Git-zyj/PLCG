/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113432
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
    var_14 = ((/* implicit */_Bool) var_3);
    var_15 -= ((/* implicit */unsigned char) ((var_12) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_9)))) ? (var_1) : (((/* implicit */int) ((((/* implicit */int) (signed char)113)) > (((/* implicit */int) (signed char)-95))))))) - (1738595574)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)113)) != (((/* implicit */int) (signed char)100))))), (var_6)))) || (((/* implicit */_Bool) (unsigned short)14683))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (unsigned short)50835);
                arr_6 [i_1] [i_0] [i_0] = min((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
}
