/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = max(((-2170769077185661310 ? (arr_3 [i_0] [i_0]) : var_8)), (arr_0 [i_0] [i_0]));
                var_19 = (min(var_19, (((!((min(((2170769077185661312 ? var_18 : -2170769077185661312)), (arr_1 [i_0])))))))));
            }
        }
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_21 &= (max((arr_7 [i_2]), var_18));
                arr_9 [i_2] [i_3] = (arr_8 [1] [3] [13]);
                var_22 = ((((!(arr_6 [3] [i_3]))) ? ((((arr_7 [i_2]) ? var_9 : (arr_7 [i_2])))) : var_12));
                arr_10 [i_3] [i_3] = 2;
            }
        }
    }
    var_23 = (min(var_23, var_8));
    var_24 = ((var_18 ? var_14 : var_1));
    #pragma endscop
}
