/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? var_5 : (arr_2 [i_0]))) : ((max((arr_2 [i_0]), (arr_2 [i_0])))));
        var_16 = (max((((max(var_10, var_9)) - (arr_0 [i_0]))), (arr_1 [i_0])));
        var_17 = (min(var_17, ((min((max((((var_3 || (arr_0 [18])))), (arr_2 [i_0]))), (max(((var_4 ? (arr_2 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_18 = (max(var_18, ((((max(var_4, var_10)) <= (max((((~(arr_3 [12] [12])))), (max(var_10, (arr_4 [20]))))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_19 = ((-(((arr_8 [i_1] [i_1 + 1] [i_2] [i_3]) >> (var_5 - 8444514806576589653)))));
                    var_20 = var_6;
                    var_21 = min((arr_9 [i_1 + 1] [i_2] [i_3] [i_3]), var_3);
                }
            }
        }
        arr_11 [i_1] [i_1] = (min(((min((min(480, 1937609729)), ((max(var_14, var_0)))))), ((~(arr_3 [i_1 + 1] [i_1])))));
        var_22 = (max(var_22, (((-(max((arr_4 [12]), (arr_4 [18]))))))));
    }
    var_23 = (1937609729 ? (max(-1937609730, var_11)) : (min((max(4498038781242481923, -1937609730)), var_8)));
    #pragma endscop
}
