/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += (~3267115892);
                var_20 = ((max(var_16, 25)));
                var_21 = (min(var_21, 18));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_22 ^= (arr_1 [i_3]);
                arr_12 [i_3] = (arr_7 [i_2] [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_5] = (min((((-3322 ? (arr_16 [i_4] [i_4] [i_4]) : (min(var_2, var_17))))), var_4));
                arr_19 [i_4] [i_5] [i_5] = ((((((max(-22023, 3267115892))) ? var_9 : (((!(arr_15 [i_4] [i_4])))))) * 249));
                arr_20 [i_5] = 244;
                arr_21 [i_5] [8] [i_5] = 33;
            }
        }
    }
    var_23 -= var_8;
    #pragma endscop
}
