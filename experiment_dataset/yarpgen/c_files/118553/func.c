/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118553
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
    var_18 ^= ((/* implicit */short) var_14);
    var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)11915)))) ? (((/* implicit */int) (short)-32761)) : (((var_11) ^ (((/* implicit */int) (short)13039))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((short) min((((((/* implicit */_Bool) (short)14038)) ? (((/* implicit */int) (short)-26215)) : (1850637980))), (-1472758760)));
                var_20 = ((/* implicit */short) min((((int) var_4)), (((((/* implicit */int) var_10)) - (min((((/* implicit */int) var_16)), (1370050695)))))));
            }
        } 
    } 
}
