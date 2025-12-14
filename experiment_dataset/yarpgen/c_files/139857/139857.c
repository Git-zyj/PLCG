/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_10 = (max(var_10, ((max((arr_0 [i_0]), (arr_0 [i_0 - 4]))))));
        var_11 = ((~(min(-1, -28819))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 += ((((((!(arr_4 [i_1]))))) ^ (((((1248716953 ? -28819 : (arr_3 [i_1])))) ? ((max((arr_0 [8]), (arr_2 [i_1] [i_1])))) : ((21508 ? -1 : (arr_3 [i_1])))))));
        var_13 = (((((1255216376 ? (arr_1 [i_1] [i_1]) : 1262683515))) ? 2259580503 : (((-1 & 2035386793) ^ (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_14 = (((((((2259580503 ? var_8 : (arr_1 [i_2] [i_2]))) - (arr_2 [6] [i_2])))) ? (max(2035386792, (arr_1 [i_2] [i_2]))) : (((28819 << (((arr_3 [i_2]) + 2625250098206583061)))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_15 = ((-((1142731904 & (arr_5 [i_4])))));
                arr_14 [i_3] [i_3] [i_4] [i_4] = 31744;
                var_16 = (min(var_16, 2287595502));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_17 [i_2] [i_3] [i_5] [i_3] = 1262683529;

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_17 = ((arr_18 [i_3] [i_5] [i_3] [i_3]) ? (arr_11 [i_3]) : (arr_21 [i_2] [i_3] [i_5] [i_6] [i_6]));
                    arr_22 [i_3] [i_5] [i_3] = (((-2012675368 ? (arr_0 [i_2]) : (arr_4 [i_5]))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_2] [i_2] [i_3] [i_3] [i_3] [i_2] = (1262683515 * 8062);
                    var_18 = (max(var_18, (((arr_21 [i_7] [i_5] [i_3] [i_2] [11]) ? (-32767 - 1) : 32752))));
                }
                var_19 = (((((-32753 ? 1262683515 : var_8))) ? (-32767 - 1) : 1675190324493218504));
                arr_28 [i_3] = ((arr_5 [i_2]) << (((arr_5 [i_5]) - 1882756833)));
            }
            var_20 ^= (70368744177663 ^ 31744);
        }
    }
    var_21 = var_2;
    var_22 = (min(((((2012675368 ? 2546035541 : var_6)))), ((var_7 ^ (min(var_8, 4095))))));
    #pragma endscop
}
