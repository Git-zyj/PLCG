/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132919
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)-668)))))));
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((short) var_12)), (min(((short)4096), (((/* implicit */short) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */short) ((((((((/* implicit */int) min(((short)-31217), (arr_6 [10LL])))) | (max((((/* implicit */int) (short)-26270)), (var_2))))) + (2147483647))) >> (((max((var_7), (((var_13) << (((((/* implicit */int) arr_3 [(_Bool)1] [i_1])) - (137))))))) - (6972433753900867974LL)))));
                var_20 = var_12;
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) arr_6 [i_0]))))));
            }
        } 
    } 
}
