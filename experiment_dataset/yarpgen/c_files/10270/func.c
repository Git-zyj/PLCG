/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10270
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
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((_Bool) min((min((((/* implicit */int) arr_0 [i_0])), (var_12))), (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_2]))));
                    var_18 += ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                {
                    var_19 = min((min((((/* implicit */int) ((_Bool) arr_12 [i_3] [i_3] [i_3] [i_3]))), (((arr_8 [i_3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_3] [i_4])))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (var_8))));
                    var_20 = max((((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [(_Bool)1] [i_4 + 1] [i_4 + 1] [(_Bool)1])), (var_6)))) ? ((+(((/* implicit */int) var_15)))) : ((-(var_9))))), ((~(var_12))));
                }
            } 
        } 
    } 
    var_21 &= ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((int) var_3))));
}
