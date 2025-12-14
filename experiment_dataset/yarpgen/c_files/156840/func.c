/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156840
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+((-(((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_10)))))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1 + 2] [i_1 + 1] [i_0]) / (arr_2 [i_1 - 1] [i_1] [i_0])))) ? (((/* implicit */int) max(((unsigned short)65527), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7940)))))))) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_18 = (~(((/* implicit */int) var_2)));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
