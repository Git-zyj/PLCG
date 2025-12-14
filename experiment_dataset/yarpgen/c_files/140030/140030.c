/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 &= var_10;
                    var_17 = (min(var_17, ((((((min(var_13, 201326592))) ? var_13 : ((min(4294967282, (arr_6 [i_2] [i_0] [i_0])))))) != (((arr_1 [i_0] [i_2]) | (((arr_5 [i_0] [i_2]) ? (arr_1 [i_2] [i_0]) : var_4))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (((max((arr_6 [i_0] [i_1] [i_1]), (arr_1 [i_0] [i_2]))) <= (((max((arr_5 [i_0] [i_0]), var_0))))));
                }
            }
        }
    }
    var_18 = var_15;
    #pragma endscop
}
