/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_11));
                    var_15 = (min(-52743, ((var_7 ? (arr_6 [i_2 - 2] [i_1] [i_2]) : (arr_6 [i_2 - 1] [i_1] [i_1])))));
                    arr_7 [i_0] [i_0] = ((((((((arr_2 [i_2] [3] [i_0]) * var_6))) ? var_8 : ((1 ? var_4 : (arr_5 [19] [i_0] [i_0]))))) > -var_9));
                }
            }
        }
    }
    var_16 = 17346060481657869848;
    var_17 = ((var_2 ? ((((var_7 << (431735673 - 431735665))) + var_6)) : (((~((var_4 ? var_12 : var_9)))))));
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_21 [6] [i_4] [i_6] [i_4] [i_5] [i_3] = (!(arr_12 [i_4] [i_4] [12]));
                        arr_22 [i_3] = (((arr_14 [i_5] [i_6]) ? var_3 : var_3));
                    }
                    var_19 = (min(var_19, var_10));
                    var_20 = (min(var_20, ((min(((1100683592051681767 - (max(var_13, var_5)))), (((((min(12792, 21)))) / 17346060481657869847)))))));
                    var_21 = (((((17346060481657869857 ? (arr_13 [i_3] [i_4] [17]) : (arr_5 [i_3] [i_3] [i_3])))) || ((!(arr_6 [0] [i_4] [i_3])))));
                    var_22 &= (arr_4 [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
