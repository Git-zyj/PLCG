/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 ^= ((var_9 ? (arr_6 [i_2] [i_0]) : (arr_2 [i_0] [i_0])));
                    var_12 = (((max((max(var_9, 3)), (arr_8 [i_0] [i_1 - 1] [i_1] [i_1 + 1])))) || (arr_7 [i_0] [i_1] [i_0]));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 += ((~((min(var_2, 40)))));
                    var_14 = ((((max(23604, 8068))) ? (max((arr_16 [i_3] [i_3] [i_3]), (((!(arr_18 [i_5] [i_5] [i_5])))))) : var_3));
                    var_15 = ((+(max((arr_15 [i_4] [i_4 - 1]), 9))));
                }
            }
        }
    }
    #pragma endscop
}
