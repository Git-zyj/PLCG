/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [2] = (28424 < var_1);
                var_13 = -var_2;
                var_14 = (((((~(arr_2 [i_0] [i_1])))) ? (((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [8]) : (arr_2 [4] [i_1]))) : (min(83235325, 201))));
                var_15 = (max(var_15, ((((arr_5 [i_1]) ? var_2 : (((arr_4 [i_0]) ? (min(10027307902609674339, (arr_2 [i_1] [i_0]))) : ((max(201, (arr_4 [i_1])))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_16 += (max(61, (((var_1 || (248 || 127))))));
                    var_17 = (((((-var_0 ? 251 : var_1))) ? (min(-var_9, -var_6)) : (((((((arr_11 [i_2] [5]) ? var_0 : var_8))) ? ((~(arr_9 [i_2] [i_4]))) : var_6)))));
                    var_18 = (max(((0 ? (~110) : ((18446744073709551615 ? -2038210441 : 4071374100251264963)))), ((min((arr_2 [i_3] [i_4]), 4294967295)))));
                    arr_14 [i_2] [i_3] [i_4] = (((~(arr_7 [9] [9]))));
                }
            }
        }
    }
    var_19 = (((((108 ? (((230 / (-2147483647 - 1)))) : 131072))) ? (~var_12) : (127 / 2147483647)));
    var_20 += (~816600228);
    #pragma endscop
}
