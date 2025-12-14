/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(1, ((152 ? 2563441359 : 2147483647)))), (((((-4002765767769050198 ? var_1 : (-2147483647 - 1))) + (2147483647 * 1))))));
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (((((arr_2 [i_0]) ? (arr_5 [i_0] [i_1]) : (-127 - 1)))));
                    var_15 = ((-(13421600040619414524 * var_2)));
                }
            }
        }
    }
    #pragma endscop
}
