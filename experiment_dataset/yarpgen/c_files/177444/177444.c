/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((~(min(((var_11 ? (-9223372036854775807 - 1) : var_0)), (arr_7 [i_0] [13] [i_0] [i_0])))));
                    arr_10 [i_2] [9] [i_0] = (((-2147483647 - 1) * (min(((((arr_8 [i_0] [i_0] [i_0] [i_0]) > (arr_7 [i_2] [20] [i_1] [i_0])))), (arr_0 [i_2])))));
                    var_15 = var_10;
                }
            }
        }
    }
    var_16 = (min(2147483647, 52739));
    #pragma endscop
}
