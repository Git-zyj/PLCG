/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [7] [7] = max(((121 ^ (max(2147483647, 2649558729950218812)))), ((min(8644753302906160218, 102))));
                    var_18 = (arr_1 [i_1]);
                    arr_10 [i_0] [i_0 - 2] [i_0] [i_0] = (((((-(arr_8 [i_0] [18])))) && (arr_6 [i_0 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
