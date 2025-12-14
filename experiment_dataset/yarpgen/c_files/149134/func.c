/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149134
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
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_7)), (((((/* implicit */int) ((((/* implicit */int) (short)30635)) < (((/* implicit */int) var_10))))) ^ (((/* implicit */int) (short)-32127))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [(short)11] [i_1] [i_2] [7U] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)29793))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [(short)1] [i_2] [i_2] [i_0]), (arr_4 [i_2] [i_1] [i_0 - 2])))) && (((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 - 1] [i_0 - 3]))))), (((((/* implicit */_Bool) (short)13245)) ? (2358825258U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22415))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (short)13250)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)22344)))))), (((/* implicit */int) var_10))));
}
