/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((min(-14, var_7)))));
    var_11 |= var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_3;
        var_12 = (max(var_8, (max((22725 > 113), ((4 ? 0 : var_2))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_13 = ((((((max(1, (arr_1 [i_0])))) >> ((min(58731, (arr_5 [i_1 + 1] [i_1] [i_0])))))) < (max(1, (-9688 & var_4)))));
            var_14 = ((-(max(5998, var_3))));
            var_15 = var_0;
            arr_7 [10] [i_0] = (14370367462615147165 + 14370367462615147165);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 = var_9;
                        var_17 = var_7;
                    }
                }
            }
            arr_16 [i_0] = var_0;
        }
        var_18 = max((arr_9 [i_0] [i_0] [i_0]), ((((arr_10 [i_0] [i_0] [i_0]) % (((1 ? (-2147483647 - 1) : (arr_0 [i_0]))))))));
        var_19 = (((((var_6 * (min((arr_3 [i_0] [i_0]), (arr_8 [i_0])))))) ? (arr_6 [i_0] [i_0] [i_0]) : ((((((var_6 ? var_1 : -25980))) == var_1)))));
    }
    var_20 = (max(var_20, -var_6));
    var_21 = var_8;
    #pragma endscop
}
