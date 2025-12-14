/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = ((var_8 ? 5216730923491393350 : ((~(arr_5 [0] [i_2 - 1] [i_2 - 3] [i_0])))));
                    arr_7 [i_0] [i_1] [3] = ((((((max((arr_5 [i_0] [i_1] [i_2] [i_2]), 23630))) << (((max((arr_1 [i_0]), (arr_6 [i_1] [i_2]))) - 3523590376791144047)))) & ((~((~(arr_5 [8] [1] [i_2] [3])))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (max((min(159, (arr_5 [8] [i_2 - 2] [i_2 - 2] [i_2]))), ((min((arr_5 [i_0] [i_2 + 3] [i_2 + 2] [1]), (arr_5 [i_1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                    var_11 = 3771423102408375620;
                }
            }
        }
    }
    var_12 -= (var_2 / var_2);
    var_13 = 1;
    var_14 = (max(var_14, ((max(var_9, (max((5216730923491393350 && 1), var_7)))))));
    #pragma endscop
}
