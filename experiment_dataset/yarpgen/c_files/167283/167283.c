/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (max((max((arr_1 [1]), (arr_2 [i_0]))), ((((3501068761 || var_2) == (arr_4 [i_2 + 1] [i_0] [i_0 + 1]))))));
                    arr_12 [14] [12] [12] [i_0] &= ((-16 ? 3501068782 : 16256));
                    var_19 = ((max(var_12, ((793898534 ? var_8 : (arr_5 [i_0] [i_0] [1]))))));
                }
            }
        }
        var_20 = ((-(((arr_10 [i_0]) ? ((~(arr_2 [i_0]))) : (((max(188, var_3))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = ((var_5 ? var_12 : (arr_6 [i_3] [i_3] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_22 = (min(var_22, (~17816)));
                        var_23 += ((var_10 ? var_10 : (arr_4 [i_3] [i_5] [i_5])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_8] [i_8] = (((((93 << (((arr_23 [1]) - 9665))))) ? (!var_9) : 16764));
                    var_24 -= var_3;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_7] [i_8] [i_7] [i_3] &= (~77);
                                arr_36 [i_8] [3] [i_8] = var_3;
                                var_25 = ((((((arr_6 [i_8] [i_8] [i_10]) <= 45)))) >= var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_10;
    var_27 = (max(var_27, 1));
    var_28 = (~var_17);
    var_29 = (min(1, 1056964608));
    #pragma endscop
}
