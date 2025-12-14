/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 -= ((((((var_6 ? var_8 : (arr_1 [i_0 + 1]))) ? var_7 : ((1 * (arr_2 [i_0 + 1])))))));
        arr_3 [i_0] = (((arr_1 [i_0 - 2]) | (((var_8 ^ var_9) ? (arr_1 [i_0]) : (max(var_4, (arr_0 [i_0] [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (((arr_2 [i_0 + 1]) < var_7));
            var_15 = (971618932 % (arr_4 [i_1]));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_16 = (!(((~(arr_2 [i_0 - 1])))));
            arr_10 [i_0] [i_2] [i_0] = (max((arr_9 [i_0 + 1] [i_2]), (max((((arr_8 [i_2] [i_2]) ? var_0 : 3027491684)), ((((arr_1 [i_0 - 1]) & var_0)))))));
            var_17 = ((((arr_8 [i_2] [i_0 + 1]) ? (arr_8 [i_2] [i_0 - 1]) : 3323348363)));
            var_18 = ((971618932 ? var_1 : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_19 = (arr_4 [i_3]);
            arr_13 [i_3] = (((((0 << (4088687386 - 4088687375))) + (max(1, (arr_0 [0] [i_3]))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 = (((((((29569 ? (arr_18 [i_0] [i_3] [i_4 - 1]) : 1))) ? ((max(1267475611, (arr_7 [i_3])))) : (((arr_19 [i_0] [i_3] [i_4 + 1]) ^ var_9)))) | (~1)));
                        var_21 -= var_4;
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    {
                        var_22 = (min(var_22, ((((1 & var_6) ? (((arr_28 [i_0] [i_0] [i_7] [i_7] [i_8 + 3]) ? (arr_28 [i_0] [i_6 + 2] [i_7] [i_8] [i_8 + 3]) : (arr_28 [i_0 - 2] [i_7] [i_7] [i_7] [i_8 + 1]))) : 127)))));
                        arr_29 [i_0] [i_0] [i_0] [18] [i_7] [i_8] = (arr_25 [i_0] [i_0] [i_0]);
                        var_23 = (min(var_23, 3027491684));
                        var_24 = (max(var_24, (arr_17 [i_0] [i_0] [23])));
                    }
                }
            }
            var_25 = (min((((((((arr_26 [i_0]) ? 15640365490602597407 : 7342942827866047172))) ? (arr_5 [i_0 + 1]) : ((max(var_0, var_3)))))), ((3355680457988023209 ? var_6 : (arr_8 [i_6] [i_6])))));

            for (int i_9 = 4; i_9 < 22;i_9 += 1)
            {
                var_26 = (max(var_26, (max(((((-78 ? var_10 : 3250549743)) >> (((arr_19 [2] [i_0 + 1] [i_0 - 2]) - 3799697329)))), ((((((arr_20 [i_0] [i_0] [i_0]) ? (arr_27 [i_0] [12] [i_0] [18] [i_9]) : var_2)) | (((arr_5 [12]) ? (arr_4 [i_9 - 3]) : 211)))))))));
                var_27 = (max(var_27, 109));
            }
        }
    }
    var_28 = ((((!(!1))) ? (((((var_6 ? 0 : var_5))) ? var_3 : var_12)) : var_1));
    #pragma endscop
}
