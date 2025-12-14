/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_2 [i_0] [i_1] [i_1 + 2]) / var_8))) ? (arr_2 [i_1 + 2] [i_1] [i_1 + 2]) : var_0);
                arr_6 [13] [i_1] [7] = 169;
                var_11 = (arr_2 [i_1] [i_1] [i_1]);
            }
        }
    }
    var_12 = var_0;
    var_13 = 3880786969067534383;

    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_9 [0] [i_2] = -3880786969067534384;
        arr_10 [i_2] [i_2] = (min((max((-3880786969067534357 < 67108863), (((arr_7 [i_2]) ? (arr_2 [13] [i_2] [i_2 - 1]) : (arr_3 [8] [4] [i_2]))))), (!2668854193691186957)));
        arr_11 [i_2] = 1311600077;
        var_14 *= (var_10 > var_7);
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3 + 2] = ((((((arr_12 [i_3 - 1] [i_3 + 3]) ? (arr_12 [i_3 + 2] [i_3]) : (arr_12 [6] [6])))) ? (177 == -3900569227524146254) : var_2));
        arr_16 [10] = (min(var_6, var_7));
        var_15 = var_7;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_16 = (min(3880786969067534357, 131071));
        var_17 *= 1649157389;
    }
    #pragma endscop
}
