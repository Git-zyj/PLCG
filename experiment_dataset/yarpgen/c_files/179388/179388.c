/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (!var_8);
                    arr_9 [i_0] = (arr_1 [i_2]);
                    var_16 = (((((arr_0 [i_0 + 1]) <= (arr_0 [i_0 + 1])))) <= ((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                }
            }
        }
    }
    var_17 = ((-(~1220526352)));
    var_18 = var_6;
    var_19 = var_3;
    #pragma endscop
}
