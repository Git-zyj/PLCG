/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, (((((!(((~(arr_1 [i_0])))))) ? (arr_0 [i_0]) : ((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((+((+(((arr_1 [i_0]) ? var_11 : (arr_1 [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_13 |= ((~((~(~var_0)))));
                    var_14 = ((((((arr_3 [i_2] [i_3]) % (~var_1)))) ? (((((arr_4 [i_3 - 1]) <= (var_11 <= var_4))))) : ((~((var_1 ? (arr_5 [i_2] [i_1]) : (arr_9 [i_1] [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [4] [8] [4] [4] [i_1] = ((-1 % ((max(4294967295, (-32767 - 1))))));
                                arr_16 [i_1] [i_1] [i_3] [3] [i_5] [i_5] = var_1;
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] [i_3] = (arr_4 [7]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 6;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] [i_2] [2] [i_1] [i_1] = (((var_9 ? var_9 : var_9)));
                                arr_23 [6] [i_2] [i_1] [i_2] [i_1 - 1] = ((!((!(arr_14 [i_3 + 2] [i_7 + 4])))));
                                var_15 = ((var_8 ? (((arr_21 [i_3 - 2] [i_3 + 2]) ? var_2 : (arr_21 [i_3 + 2] [i_3]))) : (((arr_21 [i_3 - 2] [i_3 - 2]) ? var_8 : (arr_21 [i_3 + 2] [i_3])))));
                                var_16 = ((((((((arr_3 [i_6] [i_6]) ? (arr_0 [i_6]) : var_9))) ? var_11 : ((max(var_5, var_8)))))) ? ((min((min(-32766, var_11)), (((!(arr_13 [8] [8]))))))) : (((!(((var_3 ? var_0 : var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((var_6 ? var_8 : (var_4 % var_0))) != var_8));
    #pragma endscop
}
