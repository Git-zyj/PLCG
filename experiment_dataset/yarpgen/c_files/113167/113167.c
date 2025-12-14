/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_14;
    var_17 = -var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((~(((var_4 <= (arr_1 [i_0]))))));
        var_19 &= (((2120046094 ? 1505314321 : -5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        arr_8 [i_0] [12] [3] [i_3 - 2] = ((-180138564 ? 2147483637 : 147));
                        arr_9 [i_0] [i_1] [i_1] [i_3 - 2] [i_3 - 2] = (((((-(arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_3 - 2])))) || var_6));
                        arr_10 [i_1] = ((((2147483637 ? 83 : 16440510210969002206)) / (4294967288 != 5)));
                    }
                    arr_11 [i_0] [i_1] [1] [i_0] = (((!18820) - -4539373255347170794));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_5] = 10;
                                arr_18 [i_5] [i_5] [i_5] [i_1] [i_5] [i_1] = ((12 ? var_10 : ((var_8 << (((min(4294967277, var_14)) + 8689825023044199008))))));
                                arr_19 [i_0] [i_1] [i_5] [i_0] [i_0] = (max((arr_0 [12] [i_2 - 1]), -2147483637));
                                var_20 = (min(var_9, var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_7] [i_7] [i_7] = (!-35506);
                                var_21 = (max(var_21, 32761));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
