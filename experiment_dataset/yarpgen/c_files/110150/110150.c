/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, (~var_5)));
    var_14 = 1671432515;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((var_11 ? -var_6 : var_4));
                arr_5 [i_0] = (!32764);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_2] = (((((var_5 ? (!-14414) : 1078379298))) || ((((arr_7 [i_3] [i_3]) ? var_7 : (!var_8))))));
                arr_13 [i_3] = (~(-7210036624800592818 - -4853320234983713512));
                arr_14 [i_2] [i_3] = (((max(-1365891969, (((var_0 + 2147483647) >> (var_10 - 2015157991))))) | ((-((-(arr_9 [i_3])))))));
            }
        }
    }
    #pragma endscop
}
