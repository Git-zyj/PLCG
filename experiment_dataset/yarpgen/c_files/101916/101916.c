/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [4] [11] = 2696710762464225804;
                    var_13 = (arr_6 [2] [i_1] [9] [i_2]);
                    var_14 = ((((((var_3 ? 13392139867483858093 : 20))) ? (arr_5 [0] [10] [0]) : ((((arr_2 [i_1]) ? var_6 : 248))))));
                }
            }
        }
    }
    #pragma endscop
}
