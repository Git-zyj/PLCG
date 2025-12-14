/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!var_14) >> (((min(274877906944, (-2147483647 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((!((((-2045139459 + 2147483647) << (18446744073709551601 - 18446744073709551601)))))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_19 = (((11 <= 8) ? (((var_9 ^ (arr_0 [i_2 + 1] [i_0 + 1])))) : ((-var_10 ? var_0 : (arr_1 [i_0])))));
                    arr_6 [i_0 + 1] [i_0] [i_0 - 1] = ((((min((((arr_2 [i_0]) ? var_12 : var_15)), 0))) ? (max((!1), ((~(arr_3 [i_0] [i_2]))))) : ((max(var_7, var_9)))));
                }
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    var_20 = (42098 << (((-1487026924 + 1487026947) - 21)));
                    var_21 = ((max(var_4, (max(var_5, 2147483647)))));
                    arr_10 [i_0] [i_0] [i_0] = var_13;
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_22 = var_2;
                    var_23 = (max(((-(min(218025769, var_11)))), 20610));
                }
            }
        }
    }
    #pragma endscop
}
