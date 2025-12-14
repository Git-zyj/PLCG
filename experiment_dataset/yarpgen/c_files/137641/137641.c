/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    var_16 = (max((min((var_14 ^ var_13), var_9)), ((((((0 ? var_0 : 1701462103))) != var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = max(-3, 22169);
                    var_17 = var_1;
                    var_18 ^= ((0 ? 15 : 15));
                    arr_10 [i_0] [i_0] [i_0 - 3] [i_0] = var_6;
                }

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_14 [i_0 - 3] [i_0 - 3] [i_3] [i_0] = ((((max((min(var_8, (arr_4 [i_0 - 3] [i_3]))), ((((arr_13 [i_0]) ? (arr_11 [4] [i_0] [i_1] [21]) : -3)))))) && ((max(4187723858055535300, (arr_0 [i_0 - 2]))))));
                    arr_15 [i_0] [i_0] [i_1] = (!20);
                }
                arr_16 [i_0] [i_0] [i_0] = ((9679133965541047549 > ((var_4 ? var_14 : (var_8 & 32767)))));
            }
        }
    }
    var_19 = (((((31834 ? -985520469 : 6771733141131790362))) ? var_1 : (((var_13 ? -1 : 8040460394897911908)))));
    var_20 = var_4;
    #pragma endscop
}
