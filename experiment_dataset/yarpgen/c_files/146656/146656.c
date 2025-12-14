/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(var_13, (var_8 % 157))))));
    var_15 = (((var_2 % 201) ? (((var_1 >= ((1 ? 60 : 1))))) : (((max(var_13, var_1))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_16 = ((!(32763 * 1)));
        var_17 = ((78 ? 20 : 110));
    }
    var_18 = (max(var_18, ((max(var_2, (max(-32765, ((0 ? 1 : -89)))))))));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_19 *= ((0 ? 1 : 41188));
                var_20 = 2048;
            }
        }
    }
    #pragma endscop
}
