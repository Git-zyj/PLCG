/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_4 [i_0] [i_0]);
                var_18 = arr_5 [15];
                var_19 = (max((arr_4 [18] [i_1]), (min(((var_11 ? var_10 : 0)), ((var_15 ? (arr_4 [10] [i_1]) : var_3))))));
            }
        }
    }
    var_20 |= ((((4032 ? ((16 ? 174 : 4032)) : -4024)) != (((max((4294967295 == var_3), 65525))))));
    #pragma endscop
}
