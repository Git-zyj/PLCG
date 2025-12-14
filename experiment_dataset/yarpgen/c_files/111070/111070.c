/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(0, (((var_4 / -24) ? ((-10 ? 1475394818160695555 : -69)) : (arr_3 [5] [5])))));
                arr_5 [i_1] [i_1] = (((max((max(2156354738146145124, 18106617839249462480)), ((max(1877, 9223372036854775795))))) >= ((((arr_2 [7] [2]) + ((max(63659, var_6))))))));
            }
        }
    }
    var_12 = ((var_7 ? 1876 : ((((max(var_4, -23))) ? (15 * 80) : ((min(var_6, var_6)))))));
    #pragma endscop
}
