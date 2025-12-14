/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((var_10 << (var_7 - 2171408799391532733)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [4] = ((!((var_4 && ((max((arr_1 [10]), (arr_7 [i_0]))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (~((((min(13044102689546597437, var_11))) ? ((var_4 ? 15827728977095422717 : (arr_0 [0]))) : (((arr_2 [i_2]) ? (arr_1 [4]) : (arr_5 [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
