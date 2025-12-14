/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (var_16 * var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((1 ^ 1) >= ((((arr_2 [i_0] [i_0] [i_0]) < ((((arr_3 [i_0] [i_0] [i_0]) % 1))))))));
                var_19 = ((((((arr_2 [i_1] [i_1 - 3] [i_1]) ^ (arr_2 [1] [i_1 - 2] [i_1 + 1])))) && (((-7493268359691708417 * (-8088717556897511227 / -9045304239619147950))))));
                var_20 = (((65535 >> (22587 - 22568))));
                var_21 = (17389 || 18094769694216238709);
                var_22 ^= (var_11 * (var_10 == 17389));
            }
        }
    }
    var_23 = var_2;
    var_24 = var_16;
    #pragma endscop
}
