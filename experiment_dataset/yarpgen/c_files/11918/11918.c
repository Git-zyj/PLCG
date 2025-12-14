/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 *= ((((min(((3287432878 ? var_1 : var_4)), var_4))) ? var_8 : (((!((!(arr_9 [4] [i_1] [4]))))))));
                    var_13 = (min(var_13, ((max((max(15228, var_2)), var_2)))));
                }
            }
        }
    }
    var_14 = ((var_9 ? var_0 : 1927974124));
    #pragma endscop
}
