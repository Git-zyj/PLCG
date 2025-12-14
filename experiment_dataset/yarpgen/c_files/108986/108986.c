/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (max(2854, (((0 && -52) | 1))));
                var_20 = (((16138970901923156660 > 1) >= 834590310));
                var_21 = ((((((((~(arr_2 [i_1])))) ? (((((arr_0 [i_0]) >= (arr_3 [1] [i_1]))))) : (max((arr_5 [i_0]), (arr_3 [i_0] [i_0])))))) ? (arr_3 [i_0 + 3] [i_1 + 1]) : (63 > 2147483647)));
            }
        }
    }
    var_22 = ((+(((!-4789504816507602513) | var_7))));
    var_23 = (((min(4, 58))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_12 [i_4] [i_2] [i_2] [i_2] = arr_9 [i_2];
                    var_24 -= 1;
                }
            }
        }
    }
    #pragma endscop
}
