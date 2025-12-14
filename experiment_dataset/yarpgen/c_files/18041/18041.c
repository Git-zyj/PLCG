/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((((!(arr_0 [i_0] [i_0])))))) && (((-(min(var_2, (arr_2 [i_0] [i_0])))))))))));
        var_21 += (min((arr_2 [i_0] [i_0]), (arr_1 [i_0])));
        arr_3 [i_0] = ((11157 ? ((var_7 ? (arr_0 [i_0] [i_0]) : var_6)) : (((arr_2 [i_0] [i_0]) ? (((32767 || (arr_1 [i_0])))) : var_6))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                var_22 = (-(((-32767 - 1) ? -var_7 : -var_13)));
                arr_8 [i_1] [2] = ((!(((~(arr_4 [i_1]))))));
            }
        }
    }
    var_23 = -var_12;
    var_24 = (~var_9);
    #pragma endscop
}
