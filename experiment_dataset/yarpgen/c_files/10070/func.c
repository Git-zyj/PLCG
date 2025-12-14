/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10070
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [4] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((arr_6 [i_0] [i_0] [i_0]) * (arr_6 [i_0] [i_1] [i_2]))));
                    arr_10 [(_Bool)1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((arr_8 [12] [i_0] [i_0] [i_0 + 1]) < (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_1 + 1]))));
                    var_15 = ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1] [i_1 - 2]));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((_Bool) arr_5 [i_0]));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) var_5)) : (var_2)))) ^ (((((var_13) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) var_1)))))))));
    var_17 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))))) : (((var_3) ? (((/* implicit */int) var_3)) : (var_14))))), (((((int) var_12)) / (var_2)))));
    var_18 = ((((/* implicit */_Bool) min((((/* implicit */int) ((var_6) >= (var_12)))), (((var_6) & (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) var_7))))))));
}
