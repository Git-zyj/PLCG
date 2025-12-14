/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] = (arr_0 [i_0 + 1]);
            arr_7 [i_0] [i_0] [i_0 - 1] = (((arr_3 [i_0 - 3] [i_1]) ? (arr_5 [12] [i_1]) : (arr_0 [i_0])));
        }
        var_18 = (min(((65524 - ((0 ? -1 : 5290429288556119679)))), (2398192613 / -19)));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            var_19 += (-1 - 222);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2] = ((-25 ? ((19266 / (arr_16 [i_0] [i_0] [i_0] [i_0 - 3] [4]))) : (arr_4 [i_3])));
                            var_20 = (((arr_3 [i_0 - 3] [i_0 + 1]) ? (arr_3 [i_0 - 3] [i_0 - 1]) : (arr_8 [i_2 - 3] [i_0 - 2])));
                        }
                    }
                }
            }
            var_21 += var_5;
            var_22 = (max(var_22, ((((arr_5 [i_0] [i_2 - 1]) - (arr_16 [i_0] [i_0] [i_2] [i_0] [i_2]))))));
            var_23 = ((var_3 <= (arr_10 [i_0] [i_0] [i_0] [i_2 - 3])));
        }
        var_24 = var_5;
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_25 += (190 / 1);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_26 = (arr_21 [i_7] [i_8]);
                    var_27 = ((-(((arr_4 [i_7 + 3]) ? (arr_5 [i_6 - 1] [i_8 - 2]) : (arr_4 [i_7 + 2])))));
                    var_28 = ((((((((74 ? -20 : 1))) ^ 12265981335685888055))) ? (min((45061 & -5), ((~(arr_9 [i_6] [i_7] [i_8]))))) : (((~(arr_24 [i_6 - 1] [i_7] [i_8]))))));
                    arr_30 [i_7] [i_8] = 15438993216151903916;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = var_0;
        var_29 = (max(var_29, (arr_23 [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_38 [i_10] = (((24576 || 1) ? -9223372036854775807 : ((((25821 / var_10) ? ((var_6 / (arr_13 [i_10] [i_10] [i_10] [i_10]))) : 1)))));
        var_30 = var_16;
        var_31 = (max(var_31, (((((min(136, (arr_10 [i_10] [1] [i_10] [i_10])) < (((min((arr_4 [5]), var_5)))))))))));
    }
    var_32 ^= var_1;
    var_33 = var_4;
    #pragma endscop
}
