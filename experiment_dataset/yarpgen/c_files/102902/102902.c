/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_16 ? var_1 : (((~(((-2147483647 - 1) & var_3)))))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_16));
                arr_6 [i_0] = 54833;
                var_20 ^= (((~(arr_5 [i_1 - 2]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_21 = (min(((min(10702, (arr_5 [i_3])))), 1));
                arr_11 [1] [4] [i_3] = var_2;
                var_22 = ((!(((+(((arr_8 [i_2]) ? var_12 : (arr_9 [i_2] [i_3]))))))));
                arr_12 [14] = var_7;
                var_23 = var_8;
            }
        }
    }
    #pragma endscop
}
