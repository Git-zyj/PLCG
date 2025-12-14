/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((~((((arr_1 [i_0]) > (arr_1 [i_0]))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((21 <= 1) != -32748));
                    var_21 = (25993 == -103);
                    arr_9 [i_0] [i_0] [i_2] = ((((61 ? 55 : (arr_5 [i_0])))));
                    var_22 |= (arr_3 [i_0]);
                }
            }
        }
    }
    var_23 = var_15;
    var_24 = (!var_10);
    var_25 *= ((!((var_13 > ((526995376564622563 ? var_2 : 1))))));
    #pragma endscop
}
