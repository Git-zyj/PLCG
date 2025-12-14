/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_15 = ((12410287037030407265 ? (-8751578461578697983 | var_12) : 8751578461578697983));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) != (arr_0 [i_0])));
        arr_4 [i_0] = ((-978059267498101677 / 4493463057293757885) - var_8);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2] = 4493463057293757887;
                arr_11 [i_2] [i_2] [i_1] = (max((((max(-9223372036854775805, (arr_9 [i_2] [9]))))), 17370447395522425648));
            }
        }
    }
    #pragma endscop
}
