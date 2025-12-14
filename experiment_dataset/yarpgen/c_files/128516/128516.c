/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((0 ^ 1) ^ 87))) == (var_6 <= 0)));
    var_12 = (min((((((max(2048, var_5))) || (((-87 ? 142 : -616206226)))))), (min(55065, -87))));
    var_13 = ((((!(((65 ? var_2 : var_5)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((-((var_10 ? -var_9 : (0 + 46)))));
        arr_5 [i_0] = var_6;
        arr_6 [i_0] [i_0] = ((-(!var_8)));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_14 = -14275;
            var_15 = (arr_1 [i_1 + 3]);
            var_16 += (-87 - 87);
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_17 &= (((min(15, ((-(arr_1 [i_2 + 1])))))) ? 0 : (((15 < (1 < var_3)))));
            var_18 = max(var_7, (~var_10));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_19 = ((99 ? (~-87) : -93));
                var_20 = -22085;
            }
            var_21 = (!var_6);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        var_22 += ((var_3 ? (~49061) : var_2));
                        arr_23 [i_5] = 35;
                    }
                }
            }
            var_23 -= ((var_5 ? (!0) : 535822336));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_7] [i_0] = -8406287543970671031;

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                var_24 = (((arr_19 [i_8] [i_8 - 1] [i_8 + 1] [i_7]) ? var_1 : (arr_19 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_7])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, -40900689));
                            arr_36 [i_0] [i_0] [i_0] [i_8 - 1] [i_7] [i_9] [i_10] = 42;
                            var_26 = -117;
                        }
                    }
                }
                arr_37 [i_7] [i_7] [i_7] = ((~(var_3 != 0)));
            }
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_27 ^= (min(2436543933, ((~((4294967271 ? -65 : 4294967271))))));
        var_28 = (max(var_28, ((max(((~((var_2 << (178 - 153))))), (~0))))));
    }
    #pragma endscop
}
