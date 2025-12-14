/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-(var_11 != var_11)));
                    var_17 = (arr_0 [i_0]);
                    var_18 = (min(((((((arr_5 [i_0] [i_1] [12]) ? var_13 : var_4)) - (arr_8 [i_0] [i_0] [i_0] [i_0])))), 23));
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
