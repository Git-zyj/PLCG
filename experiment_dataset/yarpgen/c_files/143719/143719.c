/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = (min(var_21, (((((((max(var_3, var_7))) && (-11131 | var_8))) || var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [1] = var_4;
                    arr_8 [0] = (min(-11395, -67));
                    arr_9 [i_0] [15] = (((-11140 % var_11) || (!var_18)));
                }
                arr_10 [i_0] [13] [i_0] = ((((arr_0 [9]) == (arr_0 [i_0]))));
                var_22 += (arr_0 [i_0 + 1]);
                var_23 = (min(var_23, ((((arr_1 [i_1 + 3]) >= -107)))));
                var_24 ^= ((-1412444959 / (((((var_3 ? var_14 : (arr_3 [5] [13])))) ? var_15 : (arr_1 [7])))));
            }
        }
    }
    #pragma endscop
}
