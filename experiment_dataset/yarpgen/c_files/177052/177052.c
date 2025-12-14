/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((min(0, 0)));
                var_20 += (((arr_3 [4]) ? (max((arr_3 [2]), (arr_3 [4]))) : ((-(arr_3 [6])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        var_21 = (arr_0 [2]);
        arr_7 [i_2] [i_2 + 3] = ((~(arr_6 [i_2 + 3] [i_2])));
        var_22 ^= 0;
    }
    #pragma endscop
}
