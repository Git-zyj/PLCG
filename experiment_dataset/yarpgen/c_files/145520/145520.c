/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, (((-((12 ? (arr_2 [i_0 - 3]) : (arr_0 [i_0 - 2]))))))));
        var_14 = ((max(-2563300644359880075, var_2)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 |= (-((32755 | (arr_9 [i_0] [i_0]))));
                var_16 *= (~((((arr_3 [i_0] [i_1] [i_0]) >= (arr_7 [i_1] [i_1] [12] [i_0 - 1])))));
                var_17 ^= arr_6 [i_0 + 1];
            }
            arr_10 [i_1] [i_1] [i_0] = -1306242893;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] = (((max((arr_7 [i_3] [i_3] [7] [7]), ((var_0 > (arr_13 [i_0] [i_0]))))) ? ((981368246 ? (arr_2 [i_0]) : var_6)) : ((min((((arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0]) ? (arr_12 [i_0] [9]) : (arr_4 [1]))), (arr_3 [i_0] [i_3] [i_0]))))));
            arr_15 [9] = max((arr_3 [i_0] [6] [6]), ((((((arr_0 [i_3]) ? (arr_6 [i_3]) : (arr_1 [i_0]))) == var_6))));
        }
        var_18 = ((928654115 ? 13598092030344545413 : -1306242868));
    }
    var_19 = (((+-101) ^ (((((var_12 ? var_6 : var_1))) ? -var_11 : var_7))));
    #pragma endscop
}
