/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_12 != ((26716 ? 1 : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_1 [i_0])));
                    var_17 += (max(((((min(1, -4108038810649581464))) ? (((arr_4 [i_0] [i_0] [i_2]) ? (arr_6 [i_0] [2] [i_0]) : (arr_0 [i_1]))) : ((var_11 % (arr_3 [i_0]))))), (arr_5 [i_0] [i_0] [i_0] [i_2])));
                    arr_7 [i_1] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
