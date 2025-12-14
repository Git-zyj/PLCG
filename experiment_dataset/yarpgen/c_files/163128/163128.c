/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [6] = (((((min(var_3, var_17)))) >> (-111 + 116)));
                arr_5 [i_1] = (min((min((min(1, var_5)), var_13)), 1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_18 = ((((var_5 ? 3 : 112)) != var_15));
                    var_19 = ((-(arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 - 1])));
                }
                var_20 = 1;
            }
        }
    }
    #pragma endscop
}
