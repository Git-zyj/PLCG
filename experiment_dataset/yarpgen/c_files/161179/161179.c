/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 += (min(((max(2305843009213693952, (min(30222, -2305843009213693952))))), (max(5361204944209053889, -52))));
        arr_2 [i_0] [i_0] |= (min((min(11855952857779896778, -2305843009213693952)), ((max((max(8191, 32)), 1)))));
        arr_3 [i_0] = 4032;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [2] [i_1] [i_1] &= 6590791215929654814;
                        arr_14 [i_2] = 28672;
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_17 [i_5] = 5877502637108684398;
            var_21 += 27984;
            arr_18 [i_1] [i_1] [i_5] = 11855952857779896778;
        }
    }
    var_22 = 2856856638;
    #pragma endscop
}
