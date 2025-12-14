/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112383
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (var_17)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) min(((-(((((arr_1 [6] [i_0]) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1])) - (12355))))))), (arr_5 [i_0] [i_0])));
                arr_7 [i_1] [i_1] = arr_0 [i_1];
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -1230355283))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((var_15) - (5724627)))))) || (((/* implicit */_Bool) var_6))))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (27)))))));
    var_21 = ((((((((/* implicit */int) var_1)) << (((var_9) + (1317511595))))) > (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_12))))));
}
