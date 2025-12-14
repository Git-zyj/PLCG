/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_18 | 1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((arr_4 [i_0]) ? (((((6329 ? -1618395529 : 59233))) ? ((6329 ? (arr_3 [i_0] [1] [i_2]) : var_5)) : (arr_7 [i_0] [i_0] [i_1] [i_0]))) : ((((min(var_3, (arr_6 [i_0] [2] [i_2] [2])))) | (((arr_1 [i_0]) * var_13))))));
                    arr_8 [i_0] [i_0 - 1] [1] [i_2] = (((-((max(var_10, (arr_2 [i_0] [i_1 - 1])))))));
                }
            }
        }
    }
    var_21 = 1;
    var_22 = (max(var_14, var_2));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_4] = var_18;
                arr_14 [i_4] = (((arr_9 [i_3]) ? (arr_9 [i_3]) : 32640));
                arr_15 [i_3] [i_4] [i_4] = 59192;
                arr_16 [i_4] = (min((32664 == 32904), ((((min(6321, (arr_9 [i_4])))) ? (max(-124815753, 32632)) : (32874 + var_0)))));
            }
        }
    }
    #pragma endscop
}
