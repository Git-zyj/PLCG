/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [1] = (max(0, 24276));
                var_20 -= (var_8 >= ((var_9 ? var_17 : 45965)));
                var_21 = ((-((27150 ? ((max(253, (arr_2 [i_1] [i_0])))) : 253))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_22 = 236765476;
        var_23 = ((((((arr_6 [i_2 + 3]) * (!var_2)))) ? (((max((max((arr_7 [9]), (arr_6 [i_2]))), (arr_6 [i_2]))))) : ((3434 ? var_14 : ((min((arr_5 [i_2]), 47839)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = var_10;
                    arr_12 [0] [i_2 - 1] [i_3] [i_4] = (arr_8 [i_4] [i_3]);
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_25 &= ((((min((max(var_5, (arr_10 [16] [i_6] [7] [i_5]))), (((19592 == (arr_5 [i_5]))))))) ? -4398038122496 : var_10));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_23 [i_8] [i_8] [i_5] [i_5] [i_6] [i_5] = ((((max(((((arr_7 [i_7]) <= var_10))), (arr_16 [i_5 + 1])))) ? 0 : (arr_8 [i_5] [i_6])));
                        var_26 &= ((0 ? (((arr_18 [i_7 + 2] [i_8] [i_5 - 2]) ? (arr_7 [i_5 + 1]) : (arr_7 [i_5 + 3]))) : ((((max((arr_18 [i_5] [i_8] [i_8]), var_15))) ? ((min(1, 47852))) : 8188))));
                        var_27 = (min(var_27, (((-(max((arr_10 [i_5 - 2] [i_5 - 1] [i_6] [i_7 + 1]), ((min(-27150, (arr_8 [i_6] [i_7])))))))))));
                        var_28 = (((((var_16 == ((-(arr_6 [i_5])))))) != (((17147957715420835102 || (arr_19 [i_6] [i_6] [1] [i_6]))))));
                    }
                }
            }
        }
        var_29 = (max(var_29, (arr_9 [i_5])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 18;i_10 += 1)
            {
                {
                    arr_31 [12] [i_5] [i_5] [14] = 3841974953;
                    arr_32 [i_5] [i_5] [i_10] [i_9] = (arr_13 [i_5]);
                    arr_33 [i_5] = ((((~(arr_21 [i_5] [i_9] [i_10 + 1] [i_5 - 1]))) ^ (((((arr_8 [1] [i_5 + 4]) ? 956330169 : 7751))))));
                }
            }
        }
    }
    #pragma endscop
}
