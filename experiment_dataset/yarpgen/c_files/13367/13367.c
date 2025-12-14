/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_7;
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (((arr_7 [12] [i_1]) ? var_11 : var_8));
                    var_19 = ((((((arr_5 [i_2]) ? (var_5 / var_11) : ((max(var_1, 1)))))) ? (arr_7 [i_0] [i_2]) : var_0));
                    arr_9 [i_0] = (max((((65518 ^ var_3) ? ((max(1627, (arr_2 [i_1])))) : (11991 ^ 1627))), (((!(arr_2 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
