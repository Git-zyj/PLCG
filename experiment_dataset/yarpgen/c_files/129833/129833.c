/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 += (((max(var_8, var_2))));
            var_17 = var_8;
        }
        var_18 += ((min((49596 + 266896811), 30825)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_19 *= 5543;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {
                        var_20 = (((((max(var_4, var_15)))) != (((min(3847855741, 3778577117))))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_8 [i_2] [i_2] [i_2]);
                        var_21 = ((~((var_3 ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))));
                        var_22 = ((((max(41473, 1564898658))) ? var_15 : (((var_7 ? (arr_9 [i_2] [i_4]) : 40821)))));
                    }
                }
            }
        }
        var_23 -= (~var_8);
    }

    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        var_24 = ((-(arr_1 [i_6] [i_6])));
        arr_19 [i_6] [i_6] = 30838;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_25 = var_6;
        var_26 = ((~((((arr_21 [1]) ? var_12 : var_12)))));

        /* vectorizable */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            var_27 = (arr_22 [i_8]);
            var_28 = 1728651417;
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_28 [i_9] [i_9] = ((!(48158 ^ 3428072799)));
            var_29 &= (max((21199 / 4294967295), 15940));
        }
    }
    #pragma endscop
}
