/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = 2514950555;
                    var_14 = (((8845706433286932744 ? var_6 : 0)));
                }
            }
        }
    }
    var_15 = var_10;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_16 = arr_8 [i_3];
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_17 = (arr_10 [i_5]);
                    arr_14 [i_3] [i_3] = (arr_9 [i_4] [i_4] [i_5]);
                    arr_15 [i_5] [i_4] [i_3] [i_3] = 1;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 = var_12;
                                var_19 += ((1 ? 1 : 113716717));
                                arr_20 [i_6] [i_5] [i_6] = (((((var_5 ? (arr_7 [i_3]) : 113716717))) ? (arr_16 [i_3] [i_7] [1] [i_6] [16] [1]) : 2144878608));
                            }
                        }
                    }
                    var_20 = ((((~(arr_16 [i_5] [i_4] [i_5] [i_5] [i_3] [i_3]))) <= (((113716717 ? 1 : -17123)))));
                }
            }
        }
        arr_21 [i_3] = 4181250578;
    }
    var_21 = (!4398046511103);
    #pragma endscop
}
