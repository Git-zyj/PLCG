/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;
    var_12 |= var_0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_13 = (((!var_0) ? (((var_5 ? var_4 : var_4))) : var_9));
        var_14 &= ((var_10 >> (var_10 - 2143575642607572928)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 = (var_5 || var_3);
                        arr_10 [i_0] [i_0 - 3] [i_0 - 3] [i_0] = ((var_4 ? var_6 : (((var_0 ? var_0 : var_4)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_16 = var_8;
                    var_17 = (min(var_17, (var_10 != var_1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = var_5;
        arr_20 [i_6] = (var_0 & var_3);
        var_18 = (var_4 & var_6);
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        var_19 ^= (((max((var_6 | var_1), var_1)) & ((((var_8 + 2147483647) >> (-var_2 + 207))))));
        var_20 = (min(((min((var_9 && var_9), (min(var_2, var_8))))), ((((max(var_4, var_1))) ? (min(var_7, var_9)) : (((min(var_2, var_2))))))));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_21 ^= (!var_10);
            var_22 &= (var_4 || var_9);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_30 [i_7 - 1] [i_9] = ((((((min(4, -17)) >= (!22))))));
            var_23 = (max(((max(-64, 4095))), (((max(var_3, var_5)) >> (var_4 - 8214)))));
            arr_31 [i_7] [i_7] = -var_3;
            var_24 = ((((((var_9 / var_4) ? var_0 : (min(var_6, var_10))))) ? (((((min(var_1, var_4))) << (((max(var_2, var_0)) - 605598619))))) : (((var_9 != var_1) ? var_8 : (var_2 == var_10)))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((((((var_2 < var_10) ? (~var_4) : (var_2 & var_10))) ^ (((((var_10 || var_2) && (!-5481323953005168792))))))))));
            var_26 = (max(((min(((min(var_9, var_0))), (min(var_7, var_0))))), (min(var_1, var_6))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_27 = (((~var_2) != (var_5 + var_0)));
                var_28 *= var_3;
            }
            /* vectorizable */
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                arr_39 [i_12] [i_7 + 1] [i_10] [i_7] = ((var_7 ? (~var_10) : (((var_5 ? var_8 : var_4)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_29 = (!var_6);
                            var_30 = ((var_2 ? ((var_4 >> (var_1 - 107))) : var_3));
                            arr_46 [i_12] [i_14] = ((var_7 ? var_1 : (var_3 / var_5)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                var_31 = (!var_6);
                arr_51 [i_7 + 1] [i_10] [i_15] = (var_5 < var_1);
                var_32 = var_10;
                arr_52 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1] = var_4;
            }
        }
        var_33 ^= (((var_2 & var_10) >= ((((~var_8) % var_7)))));
    }
    #pragma endscop
}
