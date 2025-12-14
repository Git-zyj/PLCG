/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((!(var_7 != -1721759282444968735))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 -= -var_5;
                arr_4 [i_1] = (((((223 ? var_10 : var_2))) | (((arr_3 [i_1 - 1] [i_1] [i_1]) + 5118841671720328066))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_5 [i_2 + 1] [i_2 - 1]);
        arr_10 [i_2] [i_2] = var_1;
        arr_11 [8] &= -17;
        arr_12 [i_2] = (((17442 <= var_6) ? (!var_3) : 145));
        arr_13 [i_2] = ((((~(~var_8))) <= var_3));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = (((~var_8) > (0 % -99)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_13 ^= ((-14797185678449534722 ? (3 < 1) : -7162070139218189084));
                    arr_23 [i_3] [i_3] [11] = ((~(arr_1 [i_4])));
                }
            }
        }
        var_14 |= ((+(((arr_20 [i_3] [10]) + 9223372036854775790))));
    }
    #pragma endscop
}
