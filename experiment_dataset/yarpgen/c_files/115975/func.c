/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115975
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_2])))) << (((((/* implicit */int) arr_0 [i_0 - 3])) - (10))))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2 - 1]))));
                    var_10 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_0 [(unsigned char)10])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) arr_3 [9ULL] [i_1 - 1] [i_0 - 3]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) != (max((var_7), (((/* implicit */unsigned int) ((var_9) >= (((/* implicit */int) var_4)))))))));
}
