/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173743
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
    var_12 = ((/* implicit */short) var_4);
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (var_7) : ((-(var_6)))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_6 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))) : (var_7)))) : (arr_1 [i_0])));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_2 [(signed char)4]))));
                }
            } 
        } 
    } 
}
