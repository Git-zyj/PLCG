/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((min((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((5330 << ((9002176817058234998 ^ (((arr_1 [i_0]) ? 9002176817058234998 : (arr_1 [18])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (!1)));
        arr_6 [i_1] = 9002176817058234999;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_4] [i_3 + 2] [i_2] [i_1] [i_1] = ((-(((!(arr_0 [i_1] [i_1]))))));
                        var_15 = (max(var_15, ((((arr_5 [i_2 + 1] [i_2 + 1]) != var_4)))));
                        var_16 = (min(var_16, (((1550878838 % (arr_13 [0] [i_2 + 1] [i_3 - 1] [i_2 - 2]))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_17 = (min(-732847927, (arr_10 [i_5] [i_5] [i_5] [i_5])));
        var_18 = (((((arr_16 [i_5]) <= (arr_16 [i_5]))) ? (((((arr_16 [i_5]) == (arr_16 [i_5]))))) : (arr_16 [i_5])));
        arr_19 [i_5] [i_5] = (((-(arr_1 [1]))));
        var_19 = -9002176817058234985;
    }
    var_20 = ((var_8 - var_6) ? ((228287259 | ((-29119 ? var_12 : -60712724815387062)))) : ((((var_4 > ((18134493225082905363 ? 97 : var_10)))))));
    var_21 = (max(29118, 9002176817058234999));
    var_22 = (min(var_22, 17550062216038965964));
    #pragma endscop
}
