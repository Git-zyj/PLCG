/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 = ((~(arr_3 [i_3] [i_2 + 3] [i_2 - 1])));
                        var_13 = (((arr_6 [i_2 - 2] [i_3] [i_2] [i_2]) >= (((arr_6 [i_2 - 2] [i_1] [i_2] [i_2]) ? (arr_6 [i_2 - 2] [11] [i_2] [i_2]) : (arr_6 [i_2 - 2] [i_1] [i_2 - 2] [i_2])))));
                        var_14 = ((((arr_2 [i_2 - 1] [i_2 - 2] [i_2 + 2]) != (arr_4 [i_2 - 1] [i_2 + 3] [i_2 - 3]))));
                    }
                }
            }
            arr_9 [i_1] [i_1] [i_0] = ((~(var_6 == var_0)));
            var_15 = (((((arr_5 [i_0] [i_0] [i_1]) ? var_1 : (arr_5 [i_0] [i_0] [i_0]))) > (((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_1] [i_1] [i_0]) : (arr_5 [i_1] [i_1] [i_0])))));
            arr_10 [i_0] = (((((((var_0 - (arr_6 [i_0] [i_0] [i_1] [6]))) ^ (arr_7 [9] [i_1] [i_1])))) % (((arr_3 [i_0] [i_1] [i_1]) ? var_6 : var_5))));
            var_16 |= (((((max((max((arr_4 [i_0] [i_0] [i_0]), var_10)), var_2)))) == (min((min(var_5, 18446744073709551609)), (arr_3 [i_0] [i_1] [i_1])))));
        }
        arr_11 [i_0] = (-var_1 || ((((((-30858 ? var_9 : (arr_5 [i_0] [i_0] [i_0])))) ? (var_8 == var_9) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
