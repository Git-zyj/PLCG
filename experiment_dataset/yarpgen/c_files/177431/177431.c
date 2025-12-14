/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 &= 433278767;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 &= (min(((((arr_2 [i_2 - 2]) & var_10))), (min((arr_4 [i_1 - 1] [i_0 + 2]), (arr_4 [i_1 - 1] [i_0 - 1])))));
                    var_19 ^= 467122985;
                    arr_7 [i_0] [i_1] [20] [i_1] = (arr_1 [i_1 - 2] [i_2 + 2]);
                    var_20 += (max((arr_6 [i_0 - 1]), ((((arr_6 [i_0 + 2]) % -927987207)))));
                    arr_8 [16] [i_0 + 1] [8] [10] &= (((arr_1 [i_1 - 1] [i_1 - 1]) ^ (467122982 < 467122982)));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((((arr_4 [i_0 + 1] [i_0 + 1]) / (arr_0 [i_0 - 1]))));
        var_21 &= var_0;
    }
    #pragma endscop
}
