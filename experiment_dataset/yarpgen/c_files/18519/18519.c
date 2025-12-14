/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((-(arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((arr_1 [i_0] [i_1 + 1]) ? (arr_0 [i_1] [i_2]) : ((var_9 ? (arr_2 [i_0] [i_1 - 1] [i_0]) : -185242386)))));
                    var_21 = (min(var_21, (arr_4 [i_1] [0])));
                    var_22 = ((!(((var_17 ? ((max(18, (arr_0 [i_1] [i_0])))) : var_9)))));
                    arr_7 [i_0] [5] [i_2] = (((arr_1 [i_0] [i_2]) || (!var_10)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] = -39256;
                        var_23 = (arr_10 [i_4]);
                        var_24 &= ((((((~(arr_5 [i_0] [i_4] [6]))) ? (((-(arr_5 [i_0] [i_4] [2])))) : (~var_0)))));
                        var_25 ^= (((min(-185242386, 18))));
                    }
                }
            }
        }
    }
    var_26 += ((((((var_0 ? 71 : -760221483672368365)) % var_17))) ? ((var_6 ? (var_7 - var_12) : ((var_16 ? var_5 : 0)))) : (var_6 || var_6));
    var_27 = var_8;
    #pragma endscop
}
