/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((((0 / (max(3132041582, var_8))))) ? (~var_15) : var_14));
                var_17 &= (var_2 >= var_6);
            }
        }
    }
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_19 = ((+((var_4 ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                arr_12 [10] [i_3 - 1] [i_2] = (arr_2 [i_2] [i_2]);
                var_20 = var_8;
                arr_13 [1] [i_2] [i_2] = arr_10 [1];
            }
        }
    }
    #pragma endscop
}
