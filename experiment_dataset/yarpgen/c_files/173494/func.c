/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173494
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-869470653370988749LL))))))), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (signed char)5)))))) % (var_10)))));
    var_13 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (0)));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(arr_3 [i_0]))))));
                var_16 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-7) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [8LL])) != (((/* implicit */int) (unsigned short)12057))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_0])), (var_11))))))));
            }
        } 
    } 
}
