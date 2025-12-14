/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = 2147483647;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (min((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 1]), (((!(arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 1]))))));
                    var_16 ^= ((((~0) ? 3377782532531859776 : ((573056037 ? 2304055742569354160 : var_1)))));
                    var_17 |= (min((((arr_5 [i_0 - 1] [0] [i_1 + 1] [i_2]) ? ((((var_2 == (arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_1]))))) : ((2573857677 ? -573056026 : 0)))), ((((((3377782532531859777 << (((arr_2 [9] [5] [14]) - 165))))) ? -8 : (arr_5 [i_0] [i_1] [i_1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
