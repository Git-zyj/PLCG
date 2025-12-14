/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = 11514;
                var_13 = ((~(((!(arr_1 [1]))))));
                var_14 = (((min(0, 11517))) ? (arr_0 [4]) : (((arr_0 [i_1]) ? ((-(arr_1 [i_0]))) : var_9)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] &= (min((min((arr_9 [i_2]), -var_12)), -var_7));
                    arr_15 [i_2] [i_4] = (((((-(arr_8 [i_4] [i_3 + 2])))) ? ((-(arr_8 [21] [i_3 + 2]))) : (((!(arr_8 [i_2] [i_3 + 1]))))));
                }
            }
        }
    }
    var_15 = var_10;
    var_16 |= var_4;
    var_17 = var_5;
    #pragma endscop
}
