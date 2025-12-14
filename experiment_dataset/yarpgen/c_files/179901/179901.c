/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_15 = (((arr_8 [i_0] [i_0] [i_3 - 1] [i_3 - 3] [i_1]) ? (arr_9 [1] [1] [i_3 - 1] [1] [14]) : (arr_9 [i_2] [i_1] [i_3 - 1] [i_3] [i_0])));
                        var_16 *= ((-1597249197 ^ (arr_6 [i_0] [i_1] [i_2] [i_1])));
                    }
                    var_17 *= ((!(((var_11 ? 1 : 21827)))));
                }
            }
        }
        arr_10 [i_0] = (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_2 : (arr_7 [i_0] [i_0] [i_0]))) >= (21827 & 21838)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = ((!(arr_0 [i_4] [i_4])));
        arr_13 [i_4] [i_4] = ((((((arr_6 [10] [i_4] [i_4] [i_4]) ? (arr_6 [i_4] [i_4] [i_4] [2]) : (arr_6 [i_4] [i_4] [i_4] [i_4])))) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) : ((((arr_12 [i_4] [i_4]) && (arr_12 [i_4] [i_4]))))));
    }
    var_19 = var_2;

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_20 = (!42808);
                        arr_25 [i_6] = (((!22718) ? (255 | 255) : ((((((~(arr_23 [18] [i_6 - 2] [i_7] [i_8])))) == ((42818 ? var_9 : (arr_17 [i_7]))))))));
                    }
                }
            }
        }
        var_21 = (max(((((arr_23 [i_5] [i_5] [i_5] [i_5]) || (arr_23 [i_5] [i_5] [i_5] [i_5])))), (arr_19 [i_5] [18] [i_5])));
    }
    var_22 = var_3;
    #pragma endscop
}
