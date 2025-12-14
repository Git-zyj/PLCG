/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 *= ((!(arr_1 [i_0] [i_0])));
        var_14 -= ((!(arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((((!(arr_0 [i_0] [i_0]))) ? ((var_2 ? 2937116394 : (arr_1 [i_0] [i_0]))) : (var_4 % 16383)));
        var_15 += (arr_1 [i_0] [i_0]);
    }
    var_16 *= (((max((var_8 + 65535), ((var_9 ? var_0 : 32246)))) >= (max(var_5, ((((-32767 - 1) <= var_11)))))));

    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!((((arr_3 [i_1] [i_1 - 4]) ? (arr_3 [i_1] [i_1 - 3]) : (arr_3 [i_1] [i_1 - 4]))))));
        var_17 ^= 14038467238655940599;
        arr_8 [i_1] [i_1] = ((arr_6 [i_1 - 1]) ? ((((arr_4 [i_1 - 4] [i_1]) * (((!(arr_4 [i_1] [i_1]))))))) : var_5);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        var_18 = (min(1, ((((!(arr_6 [i_2]))) ? (((arr_13 [i_4] [i_4]) ? var_1 : var_1)) : (-32767 - 1)))));
                        var_19 *= (((((-var_9 ? (max(var_10, (arr_4 [i_2] [i_3]))) : 22624))) ? (((!var_5) ? (!1377054946) : var_12)) : (((!((min((arr_3 [i_2] [i_3]), var_1))))))));
                        arr_19 [i_2] [i_2] = 16442;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((((arr_3 [i_6 - 1] [i_6 - 1]) ? (arr_3 [i_6 - 1] [i_6 - 1]) : -32247)) >> ((((16382 ? -32246 : (arr_3 [i_6 - 1] [i_6 - 1]))) + 32259)))))));
                        arr_28 [i_8] [i_6] [i_6] [i_2] = (!(((56728 ? ((((!(arr_22 [i_6]))))) : 3849553118676623369))));
                        var_21 += (max((arr_26 [i_6] [i_7 + 1] [i_7] [i_8] [i_7]), ((((((arr_13 [i_7] [i_2]) ? (arr_14 [i_2] [i_6] [i_7] [i_8]) : 281474976710655))) ? (((!(arr_13 [i_8] [i_6])))) : var_2))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
