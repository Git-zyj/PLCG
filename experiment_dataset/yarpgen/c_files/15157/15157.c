/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= max(-var_6, (((min(var_1, var_1)))));
    var_14 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = (max(1, 61294));
                    arr_7 [i_0] [i_0 - 2] [i_0 - 2] = (max((((arr_6 [i_0 - 4]) & (arr_6 [i_0 - 1]))), (((!(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_16 *= (!(arr_9 [i_3] [i_3 - 1] [i_3 - 1] [i_0]));
                    var_17 = 1;
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_18 = (arr_3 [i_1] [i_4]);
                    var_19 = ((!(arr_9 [i_0] [i_0 - 2] [i_0 - 2] [20])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_20 -= (((arr_1 [i_0]) ? (((~(arr_9 [i_0 - 1] [i_1] [i_1] [i_5 - 2])))) : 18446744073709551614));
                    var_21 &= (((arr_0 [i_0] [i_1]) || (arr_15 [i_0] [i_1] [10])));
                }
                var_22 &= ((max(1, 3221225472)) == ((((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 2]) ? (arr_12 [i_0] [i_0 - 4] [i_0] [i_0 - 4]) : (arr_12 [i_0] [i_0] [i_0] [i_0 - 2])))));
                arr_18 [8] [i_0 - 2] = (~23);
            }
        }
    }
    #pragma endscop
}
