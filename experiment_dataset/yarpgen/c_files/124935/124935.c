/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 - 2] = arr_4 [i_0 - 2] [i_1] [i_1];
                arr_7 [i_1] = (((((((!(arr_2 [i_0 + 1]))) ? var_1 : ((max(var_7, -785333044)))))) && 31));
                arr_8 [i_1] = -29189;
                arr_9 [i_1] [i_1] = 825662672;
                var_11 = (min(var_11, -114));
            }
        }
    }
    var_12 = (29197 || var_6);
    var_13 = (max(var_6, ((182 ? -117 : 1145827512))));
    #pragma endscop
}
