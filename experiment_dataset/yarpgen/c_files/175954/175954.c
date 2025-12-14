/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((max((max((arr_5 [i_0]), (arr_0 [i_0 + 1] [i_1]))), (!0)))), (max(2, (~-113)))));
                var_19 = (min(var_19, (((-(arr_3 [i_0]))))));
            }
        }
    }
    var_20 = (min(-4488758709043918290, ((((max(14, 5)) & -var_7)))));
    #pragma endscop
}
