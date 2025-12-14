/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111204
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] [(_Bool)1] = arr_4 [i_1] [i_2];
                        arr_10 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))) - (((/* implicit */int) arr_1 [i_1] [i_2]))));
                    }
                } 
            } 
        } 
    }
    var_16 = var_2;
}
