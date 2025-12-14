/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 &= (arr_0 [i_0] [i_0]);
                var_17 += (arr_1 [8] [i_1]);
                var_18 = (min(var_18, ((((((56328 / (((9207 ? 9221 : 9177)))))) ? (arr_1 [6] [i_1]) : (max(9177, -var_2)))))));
            }
        }
    }
    var_19 = var_4;
    var_20 = (min(var_20, var_2));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_12 [i_2] = (arr_10 [i_2]);
                    arr_13 [i_2] [9] [1] [i_4] = ((max(((~(arr_4 [i_2]))), (arr_10 [i_2]))));
                    var_21 = (min(var_21, ((((((arr_8 [i_2] [16]) ? (arr_9 [i_2] [i_3]) : var_8)) + (arr_5 [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
