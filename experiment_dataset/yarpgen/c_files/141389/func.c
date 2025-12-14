/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141389
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                    var_16 = ((/* implicit */unsigned short) var_8);
                    arr_6 [i_0] [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) min((var_4), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_2]))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-27931)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_13))))))) ? (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)36355)))), (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) var_14)), ((unsigned short)49279))))))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40950)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (short)27936)))) + (8)))));
}
