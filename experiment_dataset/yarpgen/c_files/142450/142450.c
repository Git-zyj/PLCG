/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_1 ? var_7 : ((((var_9 || (((var_1 ? var_10 : 13002427681257333021))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [14] [i_2] [i_1] = (((((arr_7 [i_1] [i_3] [i_2] [i_3] [i_3]) && var_8)) && ((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [10] [i_1] [i_2] [i_3] [i_2]))))));
                            var_12 = (((!-1738023648) > var_8));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_0] = 1738023647;
                var_13 = 1073741823;
            }
        }
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [8] = ((!(!2402914577515157950)));
            arr_18 [i_4] [i_4] [i_4] = ((-1738023648 ? ((16384 ? 42024 : 2147483625)) : -2026423171));
            var_14 = max((((arr_12 [i_4]) ? 0 : 15125595402977636029)), (min((arr_1 [i_4]), ((min(32767, -1161994329))))));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_23 [i_4] [i_6] [i_4] = (min((min((arr_14 [i_4]), (arr_14 [i_4]))), (arr_14 [i_4])));
            var_15 = ((min((arr_0 [i_6]), 0)) ? -7823404617219597028 : ((max(((1473696342 ? var_6 : 112)), (arr_12 [2])))));
            arr_24 [i_6] [i_4] [i_6] = 0;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = ((-0 ? 4582743317795693921 : (((min(-119, 1536))))));
                    var_16 ^= 63;
                    var_17 = 26583;
                    arr_34 [i_4] [5] = max((max(14710087616158040035, (arr_16 [i_8 - 1] [i_8 - 1]))), (var_2 * 127));
                }
            }
        }
        arr_35 [i_4] [i_4] |= (!(~34366));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_18 = (max(var_18, var_2));
                    var_19 = (min(var_19, (((((max(14469398229930521821, (((-(arr_5 [i_9] [i_10] [i_11] [i_10]))))))) ? (max((arr_1 [i_11]), (arr_8 [i_11] [i_10] [i_11] [i_11] [i_10]))) : ((((arr_0 [i_10]) ? -1 : (arr_7 [i_11] [i_10] [i_10] [i_9] [i_9])))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_49 [i_9] [i_10] [i_11] [i_12] [i_13] = (min((((arr_39 [i_9]) * var_9)), ((((arr_39 [i_9]) * (arr_39 [i_10]))))));
                                arr_50 [i_9] [i_12] [i_11] [i_10] [i_9] = (min(((((max(-15, (arr_36 [i_9])))) && -38)), (((arr_1 [i_9]) && 10))));
                                var_20 = ((-((max((arr_39 [i_9]), (arr_39 [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            {
                arr_55 [i_14] [5] [i_14] = (arr_42 [i_14] [i_15] [i_14] [i_15]);
                var_21 &= (min(((((arr_38 [i_15]) == (min(62, (arr_53 [i_14] [i_15])))))), (min(var_5, (arr_44 [i_14] [i_15] [i_15] [i_15])))));
            }
        }
    }
    #pragma endscop
}
