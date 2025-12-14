/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1755
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)0)));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) max((((max((var_0), (arr_2 [i_0 - 1]))) ? (((arr_3 [i_0 - 1] [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) max((arr_4 [i_1]), (arr_1 [i_1 - 1] [i_2])))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_17 = var_11;
    var_18 = ((/* implicit */_Bool) ((min((((((/* implicit */int) var_6)) | (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_3), ((_Bool)1)))))) & (((/* implicit */int) min((((_Bool) (_Bool)1)), (min(((_Bool)1), ((_Bool)1))))))));
}
