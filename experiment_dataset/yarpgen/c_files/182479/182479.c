/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((225779460470638079 ? (arr_1 [i_0]) : (((((((arr_1 [i_0]) ? -32765 : 18220964613238913537))) ? var_2 : (arr_1 [i_0]))))));
        var_11 = var_9;

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_12 = (min((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (((arr_3 [i_1]) - (arr_3 [i_1])))));
            arr_5 [i_1] = 225779460470638087;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = 225779460470638080;
            var_13 = ((((max((max(var_0, 1)), (((18220964613238913528 == (arr_0 [i_0]))))))) ? 18220964613238913529 : (((arr_1 [i_2]) ? var_1 : (((arr_6 [i_0] [i_0]) ? (arr_1 [i_0]) : 225779460470638097))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [i_4] = (max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (18220964613238913543 < 71)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = -45045;
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = ((((min(var_2, 4194303))) && (arr_4 [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_22 [i_5] = ((((((arr_18 [i_5]) + (arr_20 [i_5])))) ? ((((((var_6 > (arr_20 [i_5]))))) / ((14952896322663777796 ? 4607869047477938542 : 225779460470638077)))) : (((((arr_19 [i_5]) == var_7))))));
        var_14 = ((((-((1 ? 47411984 : 20491))))) ? (arr_19 [i_5]) : (min(((min((arr_20 [i_5]), var_5))), 2255614562328145039)));
    }
    var_15 = ((min(((var_3 ? var_0 : 1)), ((18220964613238913544 ? var_8 : var_3)))));
    var_16 = (min(var_9, 225779460470638102));
    #pragma endscop
}
