/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (((min((arr_5 [i_1]), (((113 ? 41 : 1))))) ^ (((~(arr_1 [i_0]))))));
                    arr_11 [i_0] [i_1] [i_0] = (min((((arr_3 [i_0] [i_1]) ? var_10 : (arr_3 [i_2] [i_0]))), ((66 & (arr_0 [i_0] [i_1])))));
                    var_11 = var_9;
                }
            }
        }
    }
    var_12 = (((41 % var_4) ? var_9 : -65));
    #pragma endscop
}
