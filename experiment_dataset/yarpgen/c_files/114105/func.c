/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114105
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
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((((/* implicit */int) max((max((arr_0 [i_2]), (((/* implicit */short) var_4)))), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_12)))))))) ^ (((/* implicit */int) var_8)));
                    var_18 = ((/* implicit */short) max((var_18), (min((min((var_2), (var_1))), (((/* implicit */short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_10)))))))));
                    arr_8 [i_0] [i_0] [i_0] = var_2;
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_2 - 1] [i_0])) ? (min((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])))) : ((~(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_1)))) ^ (((((/* implicit */int) var_2)) | (((/* implicit */int) var_3)))))) & (((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))))))));
    var_20 = ((short) (!(((/* implicit */_Bool) var_7))));
}
