/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((-((~(arr_0 [i_0])))));
        var_16 = (min(var_16, (((((var_9 ? var_4 : (((!(arr_1 [i_0] [2])))))) == (((arr_0 [i_0]) ? 65535 : (((!(arr_1 [2] [i_0])))))))))));
        arr_2 [i_0] = (((((var_12 + ((var_11 ? (arr_0 [i_0]) : var_5))))) ? ((~(arr_0 [i_0]))) : (max((arr_0 [i_0]), 1))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (!(((~(arr_0 [i_0])))));
            arr_5 [i_0] [i_0] = ((((!(!17680493631231225046))) ? (((~-23473) ? (arr_0 [i_1]) : (~var_12))) : (((((((var_1 | (arr_4 [i_0] [i_1] [i_0])))) && (arr_0 [10])))))));
            var_18 = (min(((!(((var_5 + (arr_3 [i_1])))))), (!var_14)));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_2] = (273101425 >= 1);
                    var_19 &= var_12;
                    var_20 &= (arr_12 [i_4] [i_2] [3] [i_2]);
                }
            }
        }
        var_21 = (+((((((106 ? (arr_10 [i_2]) : var_12))) || ((max(2202048776387297026, var_14)))))));
        arr_16 [12] [12] &= 0;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_22 = (var_2 % var_4);
        var_23 = (max((~var_0), (((arr_19 [i_5]) ? (arr_9 [i_5] [i_5]) : (var_6 <= 1)))));
        var_24 = (((max((arr_10 [i_5]), (arr_10 [i_5]))) + (((0 == (arr_10 [i_5]))))));
    }
    var_25 = var_7;
    #pragma endscop
}
