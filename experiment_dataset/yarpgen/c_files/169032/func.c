/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169032
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_2] [i_2] [i_2])))) : (((/* implicit */int) max((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */short) var_13)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) (short)17619)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_0);
}
