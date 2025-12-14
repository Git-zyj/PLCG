/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] [2] = 692043616;
                arr_6 [i_0] [i_0] [i_1] = ((var_13 / (arr_1 [i_0 + 1] [0])));
                arr_7 [i_0] [i_0] [i_0] = (((arr_3 [i_0 + 1]) ? ((~(arr_3 [i_0 + 2]))) : ((((var_8 || 58266) > ((min(var_7, var_3))))))));
                var_17 ^= arr_4 [i_0];
                var_18 = (max(var_18, (((((var_4 * var_4) != ((~(arr_1 [i_0] [i_0])))))))));
            }
        }
    }
    var_19 = 22350;
    #pragma endscop
}
