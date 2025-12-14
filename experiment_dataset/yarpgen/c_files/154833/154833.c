/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 += (+((-6942367011997219758 ? (var_11 + 112) : var_2)));
                    var_13 = ((-(((arr_4 [i_0] [i_0] [i_0 + 1]) & 27))));
                    var_14 |= (min((!var_2), (((!((var_4 || (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_15 = (min(var_15, ((min(1, 255)))));
    #pragma endscop
}
