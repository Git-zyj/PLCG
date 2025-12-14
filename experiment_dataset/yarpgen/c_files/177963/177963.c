/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (min((min((((arr_4 [i_0] [10]) ? 1 : var_1)), (((192 ? (arr_1 [i_0]) : 192))))), (arr_7 [i_0 - 1] [i_0 + 2])));
                    var_16 += (((arr_6 [0] [i_1 - 1] [i_1 - 1]) * var_6));
                    var_17 = ((((((arr_6 [i_0] [i_1 - 2] [i_2]) ? var_14 : (arr_6 [i_0] [i_1 + 1] [i_2 - 1])))) ? (arr_1 [i_0]) : (~4294967295)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [i_3] [i_3] [i_4] [i_6] [i_4] [i_6] = arr_12 [i_4];
                            arr_23 [i_4] [i_4] [i_4] = ((((((arr_19 [i_3] [i_3] [i_3] [i_4] [i_4]) ? -973649573 : 1))) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : ((((var_2 && (arr_16 [i_3] [i_4] [i_4])))))));
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            arr_27 [i_3] [i_4] [8] [8] [i_3] = var_13;
                            var_18 = (min(var_18, ((((arr_19 [i_4] [i_5] [2] [i_5] [i_8 - 1]) ? var_6 : (arr_19 [i_4] [i_4] [i_4] [i_5] [i_8 + 2]))))));
                        }
                        var_19 = (arr_7 [i_6] [i_5]);
                    }
                }
            }
            var_20 &= 187;
        }
        var_21 = ((~((~(arr_16 [0] [i_3] [0])))));
    }
    var_22 = (~var_6);
    #pragma endscop
}
