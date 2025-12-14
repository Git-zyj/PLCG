/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178758
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
    var_17 = ((short) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((short) var_16)))));
    var_18 = ((short) max((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)-1266)) : (((/* implicit */int) var_16)))), (((/* implicit */int) var_16))));
    var_19 = var_7;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */short) ((((((/* implicit */int) ((short) (short)-11170))) / (((/* implicit */int) max(((short)-9236), ((short)-9236)))))) % (((/* implicit */int) arr_4 [i_0] [(short)17]))));
                arr_6 [i_0] [i_0] = var_2;
            }
        } 
    } 
}
