/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 ^= (min(((((arr_4 [i_0 + 1] [i_1] [12]) != (arr_4 [i_0 - 1] [i_1] [8])))), (min((max((arr_4 [i_0] [i_0] [6]), 4194210540)), (((var_4 ? var_11 : var_11)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = ((((((arr_2 [i_3] [i_1] [i_0 - 1]) ? 1688127494 : (arr_5 [i_1] [i_2])))) ? (arr_3 [i_2] [i_1]) : (((arr_4 [i_1] [i_1] [i_1]) ? var_2 : (arr_0 [i_0])))));
                        arr_9 [i_1] = var_1;
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (arr_6 [11] [11] [i_2 - 1] [i_2 - 1]);
                        var_21 = min(var_16, 15065530582984161936);
                        var_22 = (max(var_22, var_6));
                        arr_13 [i_0] [i_2] [i_1] = (((((((((arr_8 [i_0] [i_0] [i_0] [i_4]) ^ (arr_12 [i_1] [i_2])))) ? var_14 : ((10102983013805631092 ? 3486978956 : 1688127494))))) ? var_6 : (((-161 ? ((18118145142289632941 ? (arr_8 [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_4 [i_1] [1] [i_1]))) : (!18193786756796125822))))));
                        var_23 = (max(var_23, ((min((arr_4 [i_1] [i_2] [6]), (((((-21266 ? 505054038564205585 : 214))) || ((max(var_4, (arr_4 [i_0] [i_1] [6])))))))))));
                    }
                }
            }
        }
    }
    var_24 += (((((var_12 ? ((var_6 ? var_9 : var_16)) : (var_4 != var_11)))) ? ((((var_4 ? var_17 : var_6)))) : ((((min(var_9, var_12))) ? (max(var_6, var_5)) : (var_4 > 1995537304)))));
    var_25 = (max(var_25, (((~((var_0 ? ((max(var_11, var_13))) : ((50 ? 1998247873 : 7)))))))));
    #pragma endscop
}
