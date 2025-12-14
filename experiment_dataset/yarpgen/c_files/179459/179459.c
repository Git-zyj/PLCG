/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((((1017529912 ? 3277437384 : 3277437388)))) << (((((var_0 * 1017529912) ? var_3 : (var_6 != var_9))) - 2750982630074900537))));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 -= ((((var_6 / (arr_1 [i_0 - 2] [i_0]))) / (arr_4 [i_0] [i_0])));
                    var_13 += (min(((max((((arr_7 [i_0] [1] [i_0 + 2]) < (arr_1 [i_0] [7]))), (-47 != var_8)))), ((var_7 ? ((min(24, (arr_1 [i_0] [i_0 - 2])))) : (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_3))))));
                }
            }
        }
    }
    var_14 ^= (((238 ? 0 : 18)));
    var_15 = ((~(~var_9)));
    #pragma endscop
}
