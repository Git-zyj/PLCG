/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min((((var_11 ? var_6 : var_1))), ((65535 ? var_4 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 &= var_10;
                arr_6 [i_0] = (max((((!(((43900837 ? var_13 : (arr_0 [i_0]))))))), (max((!-262851703220145959), (((arr_3 [i_1]) ? 2147483647 : var_11))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [19] [i_3] |= (min((((arr_2 [i_2]) ? -6 : (arr_2 [i_3]))), -198133600));
                    var_18 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
