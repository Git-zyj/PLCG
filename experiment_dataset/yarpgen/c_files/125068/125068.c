/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_19 ^= ((-((+((684316274 ? (arr_0 [i_1]) : var_4))))));
            var_20 = var_3;
            var_21 = (((-(min(var_0, (arr_4 [i_0] [1] [i_1]))))));
        }
        var_22 = (max(((var_3 - (arr_4 [i_0] [i_0] [i_0]))), (((2757615317 ? -684316271 : 50)))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_23 = var_13;
            arr_9 [i_0] = ((var_1 ? var_4 : var_8));
            var_24 += ((((((~var_3) >> (((arr_1 [13]) - 412303774))))) ? -var_12 : (((((max(var_10, var_8))) ? ((1 ? var_8 : (arr_8 [i_0] [i_0] [i_0]))) : 1)))));
        }
        var_25 = (min(var_25, (((4212166251 * (((194 >> (1685 - 1662)))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_15 [i_3] = (i_3 % 2 == zero) ? (((((-(max(var_4, 131071)))) >= (((((~var_6) >= (((((arr_11 [i_3] [i_3]) + 2147483647)) << (((((arr_14 [i_3] [9]) + 878475037)) - 19))))))))))) : (((((-(max(var_4, 131071)))) >= (((((~var_6) >= (((((arr_11 [i_3] [i_3]) + 2147483647)) << (((((((((arr_14 [i_3] [9]) + 878475037)) - 19)) + 1004182021)) - 30)))))))))));
                arr_16 [i_3] [i_4] = var_14;
            }
        }
    }
    #pragma endscop
}
