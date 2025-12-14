/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((max(65533, var_5))) + ((((var_7 < ((248 ? 1257707313 : 18446744073709551615)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((((max(142, 125)))) ^ (max(var_8, ((max(var_4, var_4)))))));
                arr_4 [i_0] [19] [19] = ((~((max(var_0, (arr_1 [i_0 + 1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_13 ^= ((48705 ? 26 : ((((-127 - 1) / var_4)))));

        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_14 |= (!5674400698072285410);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_15 = ((!(arr_10 [i_2] [i_2] [i_2] [i_3 + 3])));
                            var_16 = (max(var_16, (arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2])));
                            var_17 = (((((((~8126464) == -5674400698072285385)))) / -1721970579514656072));
                            var_18 ^= ((~(0 & 24)));
                            var_19 = (arr_12 [0] [3] [i_4] [10] [10]);
                        }
                    }
                }
            }
            var_20 = (min((125 > 5822989487679880681), (arr_10 [i_2] [i_3] [i_3 + 1] [i_3])));
            var_21 += 235;
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] [10] = ((~((((min((arr_8 [i_2] [11]), 1))) ? 231 : (((arr_3 [1]) ? (arr_13 [i_2] [4] [i_7] [i_2]) : (arr_8 [i_2] [i_7])))))));
            arr_22 [i_7] [i_2] = var_4;
        }
        arr_23 [i_2] = ((((arr_5 [i_2]) & 8126485)));
    }
    var_22 = -125;
    #pragma endscop
}
