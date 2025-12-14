/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        arr_2 [i_0] = arr_1 [i_0];
        var_14 = -7;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0 - 3] [i_0] [i_0] = 8741945580108737770;
            arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_0 - 3] [i_0 - 2] [i_1]);
            var_15 ^= (((~(arr_0 [i_0]))) <= (arr_3 [i_0 + 1] [i_0 - 3] [i_0 - 4]));
        }
    }
    var_16 = (((!-32761) ? var_9 : (((min(16383, var_10)) | (!48125)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_17 = (max((((!1) ? 16383 : -16361)), 16383));

                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    var_18 &= (min(((-3768893289708412336 / (arr_3 [i_4 + 2] [i_4 - 1] [i_4 - 3]))), 23889));
                    arr_16 [i_2] [i_2] [i_2] = ((-8990 ? -16381 : 16391));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((~(max(8795824586752, 1))));
                    var_19 -= var_3;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_21 [1] [i_3] [i_5] [i_2] &= (arr_13 [i_3] [i_2]);
                    var_20 = 4294967290;
                }
            }
        }
    }
    #pragma endscop
}
