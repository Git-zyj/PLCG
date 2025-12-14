/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 &= ((((((-1268616 + 2147483647) >> (var_8 - 10392139207919303846)))) ? ((((arr_3 [i_0]) ? ((var_3 ? var_10 : (arr_4 [i_0] [i_2]))) : 1531560006))) : ((((max(var_10, var_9))) ? (((var_7 ? var_0 : 1268616))) : (arr_3 [i_0])))));
                    var_15 -= (min((((!(arr_0 [7])))), (max(((-6571542444642956677 ? var_6 : var_4)), (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (max(((((arr_3 [4]) < ((var_9 ? var_4 : var_8))))), var_0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_16 -= ((~(min(var_0, ((max(58177, var_7)))))));
                var_17 += ((((((min((arr_10 [i_4] [i_4] [i_4]), var_10))) ? (min(var_8, (arr_7 [i_3]))) : ((min(var_11, var_10))))) >> ((((-1268624 ? (((~(arr_7 [1])))) : 0)) - 18446744072090214031))));
            }
        }
    }
    #pragma endscop
}
