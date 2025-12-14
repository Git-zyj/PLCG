/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14081
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
    var_14 -= (+(var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] |= var_8;
                    var_15 = (~(var_0));
                    var_16 = ((((/* implicit */_Bool) var_13)) ? (var_5) : (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_2 - 3] [i_0]) : (arr_5 [i_0] [i_0] [i_2]))));
                    arr_9 [19] [i_0] [17] [i_2 - 1] = ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0]) : (var_8)))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (var_12))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_3) : (var_4))))) : (arr_7 [i_0]));
                }
            } 
        } 
    } 
    var_17 -= (~(var_2));
}
