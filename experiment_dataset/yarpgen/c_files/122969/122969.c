/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_2;
    var_18 = (((((var_4 ? (min(var_9, var_4)) : var_9))) ^ var_3));
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(9915234502547656866, (arr_2 [i_0])));
                arr_4 [i_0] [1] [i_1] = (arr_3 [i_0] [i_0] [1]);
                arr_5 [i_0] = (29437 <= 8531509571161894734);
                var_21 *= (arr_3 [i_1] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
