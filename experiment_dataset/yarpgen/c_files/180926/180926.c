/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));
    var_15 = (min(var_15, var_13));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(max((arr_0 [i_0] [i_0]), ((5566395243031243744 ? (arr_0 [4] [i_0]) : var_0))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 *= ((!((max((arr_7 [i_3 + 2] [i_2 - 1] [i_1 + 1]), (((arr_6 [i_0] [i_1] [i_2] [i_3 + 2]) ? (arr_10 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_3]) : (-32767 - 1))))))));
                        var_17 = (((((~(((arr_7 [i_3] [i_1] [i_0]) ? (arr_8 [i_3] [i_2] [i_1] [i_0]) : (arr_7 [i_2 - 1] [i_1 - 1] [i_0])))))) ? ((max((min(var_10, var_6)), (arr_7 [i_3 - 1] [i_2 - 1] [i_1])))) : (arr_3 [i_3] [i_2])));
                    }
                }
            }
        }
        arr_11 [i_0] = 1576948417;
        arr_12 [i_0] [i_0] = ((~(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : ((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_18 = (max((((var_9 & var_6) > ((max(var_10, var_4))))), ((((max(var_5, var_4))) && (((var_9 ? var_2 : var_7)))))));
    #pragma endscop
}
