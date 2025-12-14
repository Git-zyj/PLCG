/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!((min(var_7, var_5))))) ? (((max((!var_1), var_6)))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_1 - 1] [i_1 - 2]) - (((!((((arr_8 [i_0]) ? var_8 : (arr_7 [i_0] [i_0] [i_3 + 1])))))))));
                        var_15 = (arr_7 [i_0] [i_0] [i_1]);
                        var_16 -= (arr_0 [i_1] [i_3]);
                    }
                    var_17 ^= ((((((arr_5 [i_2]) ? (arr_8 [0]) : (((arr_0 [i_0] [1]) - (arr_7 [8] [i_1] [8])))))) * (((arr_3 [0]) ? (arr_5 [i_0]) : ((var_7 * (arr_8 [10])))))));
                }
            }
        }
    }
    #pragma endscop
}
