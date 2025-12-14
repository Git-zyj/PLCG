/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = 1885893060;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1 + 2] [i_2] [i_3] = 1885893060;
                        arr_12 [i_0] [i_0] = (((var_4 ? (((arr_0 [i_2]) & 3772326685)) : (arr_2 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_18 &= (32767 + -32765);
                        var_19 = (max(var_19, (arr_8 [i_1 - 2] [0] [i_4])));
                    }
                    arr_16 [i_2] [i_2] [i_2] [i_2] = (((arr_3 [i_0] [22]) < (((!(arr_3 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_20 = -21367;
    #pragma endscop
}
