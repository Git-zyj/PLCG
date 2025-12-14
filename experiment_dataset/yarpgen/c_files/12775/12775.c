/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((((arr_1 [i_0]) ? 19697 : ((var_6 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) ? (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) >= (((min(19697, 704)))))))) : ((((min(45850, (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((((arr_0 [i_0]) || 45839))))))));
        var_19 = (!(~0));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_20 = (((arr_10 [i_0] [i_0]) ? ((-(arr_10 [17] [i_0]))) : (arr_10 [15] [i_0])));
                            arr_15 [i_0] [i_0] [i_0] [1] [i_1] &= (((((-1677661803 == (arr_11 [i_1] [i_2 + 1] [i_2 + 1])))) / ((-(arr_11 [i_1] [i_2 + 2] [i_2 - 1])))));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_0] = (((((arr_0 [i_0]) + ((((arr_11 [i_0] [i_1] [i_0]) ? var_8 : (arr_14 [i_1] [i_0] [i_0] [i_0]))))))) ? (arr_13 [4] [i_0] [i_0] [i_0]) : ((-8195110584972171907 % (arr_12 [i_0] [i_0] [i_0] [i_0]))));
        }
        arr_17 [i_0] [5] = 1677661802;
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_21 = (~-0);
        var_22 = (!45846);
        var_23 = ((((max(var_2, (~1677661802)))) ? (((arr_19 [i_5 - 3] [i_5]) % ((~(arr_18 [i_5] [i_5]))))) : 19706));
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_24 = var_9;
        var_25 = (max(var_25, (((var_10 != (arr_18 [16] [i_6]))))));
    }
    var_26 = var_15;
    #pragma endscop
}
