/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((min(var_3, (~var_10))));
                    arr_10 [i_1] [i_1] [i_0] [i_2] = -var_5;
                    var_17 = (max((((((min(48, (arr_2 [i_1] [i_1])))) | (arr_8 [i_0] [i_1 - 3])))), (min(48, (arr_3 [i_1 + 1])))));
                }
            }
        }
    }
    var_18 = var_13;
    var_19 = (((((~((0 ? 4808 : 0))))) ? var_13 : (min((((254981350483175684 ? var_13 : 164))), (var_5 | -9195331681650947980)))));
    var_20 = (min(var_14, 39820));
    #pragma endscop
}
