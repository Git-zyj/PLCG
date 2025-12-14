/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((~((var_8 ? 1 : var_4)))), var_9));
    var_14 = (((((var_4 + (var_8 - var_7)))) ? 0 : (var_10 && var_7)));
    var_15 = (max(var_5, (((((253 ? 4294967291 : var_0)) >= (((194 ? 255 : -7160382718874800207))))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, (((max((arr_1 [i_0 - 3] [i_0 - 1]), 233))))));
        var_17 = 169684226;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (max(((min(var_12, (arr_4 [i_1 - 1] [i_0 - 2])))), (arr_6 [i_0 - 2] [i_0 - 2] [i_1])));
                    var_18 = (max(var_18, ((((((((var_0 ? 7 : var_0)) <= ((max(var_5, (arr_3 [i_2] [i_2] [0]))))))) + (((min(17698, (arr_2 [i_1] [i_1 + 2]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
