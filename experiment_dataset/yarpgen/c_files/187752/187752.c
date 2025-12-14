/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (3670682819565020066 + -7181);
                var_20 = 110;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = ((1 <= (((((1 || 4294967281) > 7))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_14 [i_2] [i_4] [i_3] = 1;
                        var_22 = (max(var_22, 1807850788));
                        var_23 = 2618985560;
                    }
                }
            }
        }
        var_24 = -7;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    arr_23 [i_6] [i_6] [i_7] [i_6] = 19;
                    var_25 = (7 >= 6);
                }
            }
        }
        var_26 &= 25;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_27 = (((1 | 1) < (((4294967281 != (1 + 2487116507))))));
        arr_26 [i_9] [i_9] = 1;
        var_28 = (max(var_28, 4294967279));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_29 = (max(var_29, 2487116507));
                        arr_36 [i_9] [i_9] [i_9] [i_12] [i_9] [i_9] = (((65 ^ 2866543404) * (((79 >> (((3454751278964559753 * 68) - 13562158085075443785)))))));
                        arr_37 [i_12] [i_10] [i_11] = 1807850788;
                    }
                }
            }
        }
    }
    #pragma endscop
}
