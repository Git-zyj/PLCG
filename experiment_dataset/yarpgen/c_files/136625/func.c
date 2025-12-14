/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136625
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
    var_20 = ((/* implicit */signed char) max((var_20), (var_11)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_2 - 3]))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (69))))) >> ((((((~(((/* implicit */int) arr_2 [(signed char)18] [(signed char)18] [i_1 - 1])))) | (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_2])) - (64))))))) + (23217))))))));
                    arr_6 [i_1 + 1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (55))))))));
                }
            } 
        } 
    } 
}
