/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_2 ? ((-var_6 ? var_6 : var_3)) : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] = (((-(arr_2 [i_2]))));
                        var_14 += 0;
                    }
                    var_15 = 1956731140;
                    arr_10 [i_0] [i_0] [i_2] [i_0] = 0;
                    var_16 = 1956731140;
                }
            }
        }
    }
    #pragma endscop
}
