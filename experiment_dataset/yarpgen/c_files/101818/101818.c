/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = (max(var_9, var_3));
                    arr_8 [3] [13] [i_1] [i_0] = (arr_3 [i_0] [i_1]);
                    var_13 ^= (((((var_1 | 152251066) <= (((max(var_11, var_0)))))) ? ((-((max(var_4, 15311))))) : ((-62 ? -68 : var_0))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {
                {
                    var_14 = (!var_5);
                    var_15 = ((((((arr_5 [i_0] [i_3] [i_3 - 1]) ? 98 : -21809))) ? (((var_11 == (arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) : (arr_5 [i_0] [i_3] [i_3 - 2])));
                    var_16 ^= (((((arr_10 [i_3 - 2] [i_3 + 1]) == (arr_10 [i_3 - 1] [i_3]))) ? ((((max(0, var_1))))) : (((max(63, var_9)) * ((((-265138252 == (arr_12 [8])))))))));
                }
            }
        }
        var_17 = ((!387809611) & 255);
    }
    var_18 ^= ((max((var_11 && var_6), var_9)));
    var_19 = (max(var_2, -var_11));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    arr_24 [5] [i_6] [i_7] |= (var_10 & -80);
                    arr_25 [i_7] [i_6] [i_6] [6] = (((((-1 ? ((max((arr_19 [i_6 - 2] [i_7]), var_11))) : (((!(arr_15 [i_5]))))))) ? (var_2 <= 1) : (var_6 != 46)));
                    arr_26 [i_6] [i_6] &= ((-(max((arr_16 [i_7 + 1] [i_7]), var_1))));
                }
            }
        }
    }
    #pragma endscop
}
