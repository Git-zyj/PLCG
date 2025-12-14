/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145258
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)89)) ? ((-(((/* implicit */int) arr_0 [(short)8])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_2 [i_0]))))));
                    arr_7 [6U] [i_1] [i_1] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_12 = (signed char)95;
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 736024167))));
}
