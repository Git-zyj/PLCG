/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = (-1449110365 >= -6364830631144989314);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 3] [i_0] = ((~((((max(var_14, (arr_7 [i_0] [i_1])))) << (99 - 94)))));
                    var_19 = (min(((~(arr_2 [i_0]))), (arr_2 [i_1])));
                }
            }
        }
        var_20 = var_10;
    }
    var_21 = (((max(var_1, -1449110365))) & 17413);
    #pragma endscop
}
