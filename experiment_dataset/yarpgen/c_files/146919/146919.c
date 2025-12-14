/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1807966284 | -275150645);
        arr_3 [i_0] = -4096;
        arr_4 [i_0] [i_0] = -var_2;
        var_18 ^= ((-3052968224530442558 ? 49662 : 1442554149));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!(((-(arr_6 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = 3692206233140021209;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_20 -= var_6;
                            arr_18 [i_1] [i_2] [i_2] [i_2] [i_4] [i_5] = (~72);
                        }
                    }
                }
            }
            var_21 = (max(var_21, 11760502172574494927));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_22 = ((517002621 << (3948752434949000695 - 3948752434949000693)));
                            arr_28 [i_2] [i_7] [i_7] [i_6] [i_2] [i_1] [i_2] = ((var_8 ? -99 : -2640689641857176343));
                            var_23 = (var_0 >= 1761108057);
                            var_24 = ((-(arr_17 [i_1] [i_2] [i_6] [i_7])));
                        }
                    }
                }
                var_25 = (((arr_13 [i_1]) | var_3));
            }
        }
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            var_26 = (max(var_26, (arr_9 [i_1] [i_9])));
            var_27 *= -23;

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_1] [i_1] [i_9] [i_10] = 0;
                arr_34 [i_1] [i_9] = ((~(~var_0)));
            }
        }
    }
    var_28 -= (min(((((14550174673086674476 ? -8679427856634277978 : (-32767 - 1))))), 15555978978624090296));
    var_29 = var_16;
    #pragma endscop
}
