/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((3583668393357464506 ? 14863075680352087119 : 3223979969820741841));
    var_18 = ((((((max(3583668393357464506, var_6)) >= (((var_4 >> (var_7 - 80))))))) <= (!29)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                arr_7 [i_0 - 4] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
