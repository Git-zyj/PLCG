/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= min((((var_4 && var_4) ? (var_2 < var_5) : var_10)), ((min((~51), var_13))));
    var_19 = (min(var_19, (((max(var_11, var_3))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 2] = (((((((~(arr_0 [i_0]))) / var_1))) ? ((4 ? (min(var_7, var_9)) : (var_13 ^ var_12))) : ((((13210 > (min(733035131, 3))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = ((var_5 ? (min((arr_3 [i_0 + 3]), (arr_3 [i_0 + 2]))) : ((var_15 ? (arr_3 [i_0 - 1]) : (arr_7 [i_0 + 1] [i_0 + 1])))));
                    var_20 = (min((((arr_6 [i_0 - 1] [i_0 + 3]) + var_10)), (var_11 / var_11)));
                    var_21 = (((min((max(var_3, var_0)), (((!(arr_0 [i_0]))))))) ? (max(var_5, (var_13 != var_17))) : var_15);
                }
            }
        }
        arr_11 [i_0] &= var_8;
        arr_12 [i_0] [i_0] = ((~(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 2]) : 87))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = 44;
        var_22 = (max(var_22, 16861229648240764182));
        arr_17 [i_3 - 2] [i_3] = -56637;

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_20 [i_3] [i_3] = 5269418988816468673;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_27 [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3 - 1] = (2147483647 * 0);
                        arr_28 [i_3] [i_3] [i_3] [i_3 + 1] = var_17;
                    }
                }
            }
            var_23 += 13210;
            var_24 = (((var_7 ? (arr_6 [i_4] [i_3]) : var_16)));
            var_25 = ((536968069 ? var_1 : (arr_1 [i_4])));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_32 [i_7] = ((~(arr_1 [i_3 - 2])));
            var_26 = (25488 == var_12);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_40 [i_3] [i_7] [i_8] [i_9] [5] = (252 ? (((var_17 & (arr_29 [i_7])))) : (arr_38 [i_3 + 3]));
                        arr_41 [i_3] [i_7] [i_7] [i_9] = (((arr_14 [i_3 - 2]) ? (arr_1 [i_3]) : var_5));
                    }
                }
            }
            arr_42 [i_3] [i_7] [i_7] &= (var_11 + 14707);
            arr_43 [i_7] [i_3] = ((~(!18446744073709551613)));
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            {
                var_27 = (arr_50 [i_10] [8] [8]);
                arr_51 [i_10] [i_11] [i_10] = (~32759);
                arr_52 [i_11] = (arr_45 [i_11 - 1] [i_11 + 1]);
            }
        }
    }
    var_28 = ((max((((var_11 ? -13233 : 536968057))), var_3)));
    #pragma endscop
}
