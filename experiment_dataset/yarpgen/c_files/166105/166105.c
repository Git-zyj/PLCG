/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(1, var_3))) || (0 == var_5))) ? ((((var_4 ? var_3 : 384388243)) & var_12)) : var_7));
    var_14 = 31;
    var_15 = ((-(((var_9 && 39577) - var_3))));
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [15] [i_1] [i_2] = arr_3 [i_0] [i_1];
                    var_17 &= (max(((((arr_5 [i_0] [i_2]) || (arr_5 [i_2] [i_1])))), (max(var_12, (arr_5 [2] [i_1])))));
                    var_18 = (((~var_8) - var_6));
                }
            }
        }
    }
    #pragma endscop
}
