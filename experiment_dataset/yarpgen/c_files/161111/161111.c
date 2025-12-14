/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min((var_8 > var_11), var_10)), var_3));
    var_13 &= ((-(((min(5647278072642597391, 1)) % 1))));
    var_14 = (((min((var_1 | var_4), (max(var_0, -1)))) >> 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((~1856356555), (((arr_2 [i_0 + 2]) ? (arr_2 [i_0 - 1]) : var_2))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_10 [i_2] = ((!(arr_0 [i_0 + 2] [i_1 - 1])));
                    arr_11 [i_0 + 1] = (arr_0 [i_1 + 2] [i_0 + 1]);
                    arr_12 [i_0] [i_1] [7] [i_0 + 1] = 239;

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        arr_16 [i_3] [16] [5] [i_3] = (arr_6 [i_0]);
                        arr_17 [i_3] [i_3] [i_2] [i_3] = (arr_3 [i_0 + 2] [15]);
                    }
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    arr_20 [i_0] [i_0] [i_4] [2] = (((-(arr_15 [i_1] [i_4] [i_4] [19]))));
                    arr_21 [i_0 + 1] [i_4] = ((((~(arr_15 [13] [i_0 + 2] [i_4] [i_4 + 1]))) & (~75884014)));
                    arr_22 [i_4 + 1] [i_4] [i_4] [17] = (((((arr_9 [i_0] [i_0]) | var_7)) | ((((arr_4 [i_0 + 1] [i_1]) >= (5 >> var_8))))));
                    arr_23 [10] [8] [i_4] = arr_19 [i_0] [i_0 + 1] [i_4 + 1];
                }
                arr_24 [18] [i_0 + 1] = (((arr_2 [i_1 - 1]) - (arr_4 [i_0 - 1] [i_1])));
            }
        }
    }
    #pragma endscop
}
