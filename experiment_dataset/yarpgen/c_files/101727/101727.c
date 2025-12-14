/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 == 1);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 = ((+((-var_2 / (((arr_0 [i_0]) / (arr_0 [i_0])))))));
        var_12 = var_3;
        arr_2 [i_0] [i_0] = (min((((arr_1 [i_0] [i_0]) - ((var_4 ? var_6 : var_4)))), ((min(var_0, -1342849279)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_13 = (max((arr_9 [i_1] [i_2] [i_3]), 45344));
                            var_14 = ((~(arr_5 [i_0] [i_1])));
                            var_15 = var_6;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((+(((arr_0 [i_1]) ? ((((arr_0 [i_3]) ? var_2 : (arr_7 [i_3] [i_1] [i_2] [i_3])))) : var_1))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] = (((max(-4226902939827552652, (arr_13 [i_0] [i_0 - 2] [i_5]))) >> (((~65535) + 65579))));
                        }
                        var_16 = (max(var_16, ((max(var_3, (min(var_5, (arr_3 [i_1] [i_1] [i_1]))))))));
                        var_17 |= (arr_4 [i_3]);
                        var_18 = (var_1 / var_0);
                    }
                }
            }
        }
        var_19 = (max((((((65535 & (arr_3 [i_0] [i_0] [i_0])))) ? (min(var_7, (arr_4 [i_0]))) : (min((arr_7 [i_0] [i_0] [i_0] [i_0]), 4067701877)))), var_8));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_20 = (max(var_20, (min(63654, ((min((arr_18 [i_6]), (arr_18 [i_6]))))))));
        var_21 ^= var_8;
        var_22 &= (min(((~(min(var_2, var_4)))), ((((((arr_18 [i_6]) ? (arr_18 [i_6]) : (arr_17 [i_6]))) / (arr_18 [i_6]))))));
        var_23 = ((((((arr_17 [i_6]) & (arr_18 [i_6])))) || (((var_3 ? -2958391711123789780 : var_6)))));
        arr_19 [i_6] = ((((!(arr_17 [i_6]))) ? ((-(((3314679571233351093 && (arr_17 [i_6])))))) : ((((((~(arr_16 [i_6] [i_6]))) + 2147483647)) << (((((arr_16 [i_6] [i_6]) ? 4067701871 : 536870912)) - 4067701871))))));
    }
    var_24 += var_7;
    #pragma endscop
}
