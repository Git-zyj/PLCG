/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_3 ? ((var_6 ? 8191 : -6511014985893662367)) : (!61189)))) ? (--8) : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_19 ^= arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((arr_5 [i_0]) + 1));
                    arr_10 [i_0] = ((((arr_0 [i_0]) ? 0 : (arr_6 [i_2]))) ^ var_15);
                    arr_11 [i_0] = (((arr_4 [i_2]) ? (arr_4 [i_0]) : (arr_4 [i_2])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((~(max(((27007 ? 2147475456 : (arr_0 [11]))), -19433))));
        var_21 = (((1 > 2789527007) ? 3775 : (arr_5 [2])));

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_22 = ((~(!var_15)));

            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                arr_22 [i_4] = (((((var_1 ? 17 : (arr_19 [i_4] [i_4])))) ? (((((!(arr_20 [i_3] [i_3] [i_3] [i_3]))) && (((-(arr_12 [12] [12]))))))) : 1));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_23 *= arr_20 [i_7] [1] [i_4] [i_3];
                            arr_28 [i_7] [i_4] [i_5] [i_4] [i_3] = 21;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_24 = (arr_13 [5] [5]);
                            var_25 += 1;
                        }
                    }
                }
                var_26 = ((-((~(arr_18 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1])))));
                arr_39 [i_4] [i_4] = 4539628424389459968;
                var_27 = (arr_19 [i_4 + 1] [i_4]);
            }
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_43 [i_11] = (!((((arr_14 [i_3]) ? (2147491838 != var_15) : -114))));
            var_28 = (((~(arr_20 [i_11] [i_11] [i_11] [i_3]))));
        }
    }
    #pragma endscop
}
