/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -255;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 -= ((((((((var_8 ? var_1 : (arr_1 [3])))) ? 611277629 : (arr_0 [i_0 + 1])))) ? (arr_1 [i_0 - 1]) : ((((max(var_6, 9372445136845398650))) ? (max(var_0, var_9)) : ((min((arr_1 [i_0 - 1]), 29353)))))));
        var_15 = (min(var_7, (min((max(var_8, (arr_0 [1]))), (arr_0 [i_0 - 1])))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_16 = (max((((arr_4 [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1]))), (((36183 <= ((32 ? 11547 : 29353)))))));
            var_17 = (((((var_1 > (arr_3 [i_0 - 1] [10] [1])))) | ((max(var_9, var_2)))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_18 *= var_7;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 = (max(var_6, (((arr_1 [i_0 + 1]) ? (1 + var_1) : (min(1216392581200496720, var_12))))));
                        var_20 = ((((((((arr_6 [5] [i_2 + 1] [3]) ? (arr_1 [i_0 + 1]) : var_12))) ? (~122) : var_8)) == -36183));
                        var_21 = (min(var_21, (((((((arr_5 [7] [10]) ? ((var_7 ? (arr_0 [i_2 + 1]) : 0)) : (arr_5 [i_0 - 1] [i_2 - 1])))) ? (min(((var_2 ^ (arr_2 [i_4] [i_2 - 1]))), (arr_7 [i_2 - 1] [13] [3] [i_2 - 1]))) : (((((((-(-127 - 1)))) || (((arr_4 [i_0 + 1] [i_0 + 1]) != (arr_2 [i_0 - 1] [i_2 + 1]))))))))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_22 ^= (min(((((max(var_0, 36183))) ? (arr_12 [4] [0] [1] [i_0 + 1]) : (max((arr_0 [9]), var_12)))), (((arr_10 [i_0 + 1] [i_0 - 1]) ? var_3 : (arr_10 [i_0 + 1] [i_0 + 1])))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    {
                        var_23 = ((((arr_3 [i_6 - 2] [i_0 - 1] [i_7 + 1]) >= (arr_3 [i_6 - 1] [i_0 + 1] [i_7 - 3]))));
                        var_24 = ((((((max(var_11, var_1))) | ((var_6 ? (arr_7 [0] [10] [i_6 - 1] [6]) : var_6)))) / (arr_9 [i_0 - 1] [i_5] [13])));
                        var_25 = (max(var_25, ((((((((arr_2 [i_0 + 1] [i_0 - 1]) < (arr_2 [6] [i_5]))))) | (min((arr_2 [5] [13]), (arr_2 [9] [12]))))))));
                    }
                }
            }
            var_26 = (((~220) ? ((((min(var_2, (arr_12 [3] [6] [1] [i_5])))) ? ((max(0, (arr_12 [i_0 + 1] [9] [i_0 + 1] [i_0 + 1])))) : var_2)) : ((((max((arr_18 [i_5] [i_5] [12] [8]), (arr_3 [11] [i_5] [1])))) << (((arr_9 [8] [i_5] [i_5]) - 18989))))));
        }
        var_27 = (((!-463834678) < (((41796 != (arr_18 [i_0 + 1] [3] [0] [5]))))));
    }
    #pragma endscop
}
