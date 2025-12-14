/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= (min(var_1, ((max((arr_1 [i_0] [i_0]), 6144)))));
        var_21 = max(10, var_12);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((+((+((((arr_1 [i_1] [i_1]) || var_10)))))));
        arr_6 [i_1] [i_1] = -4794;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_1] = ((((((var_8 ? 6154 : 59391)))) ? ((18 ? 18446744073709551606 : 10)) : (((~((min((arr_2 [i_1]), 108))))))));
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] = (max(((((min(1, 99))) ? (arr_15 [i_1] [i_2] [i_2] [i_3] [i_4]) : (max((arr_1 [i_4] [i_1]), (arr_12 [i_4]))))), (max((arr_12 [i_4]), (arr_12 [i_3])))));
                        var_22 = (min((max(var_11, ((~(arr_1 [i_1] [i_1]))))), ((((min(var_6, (arr_3 [i_1])))) ? var_4 : (arr_1 [i_4] [i_2])))));
                    }
                }
            }
        }
        var_23 -= (max((((+((max((arr_11 [i_1] [2] [i_1]), 126)))))), var_5));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (arr_21 [i_5]);
        var_24 = (min(var_24, ((max(-1, (arr_0 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = var_10;
        var_25 = 17685758817768368071;

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_26 = (((-25016 ? 10 : 25036)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_27 += (max((((arr_9 [i_6] [i_7] [i_7]) ? (((arr_3 [13]) ? (arr_2 [i_6]) : -31261)) : 101)), ((0 ? (arr_25 [i_8]) : (arr_19 [i_6] [i_6])))));
                        arr_37 [i_6] [i_7] [i_8] [i_6] = (max((min(var_2, var_2)), (min((arr_24 [i_7] [i_9]), (arr_24 [i_6] [i_6])))));
                        var_28 = ((1 ? -638426435221698425 : (arr_0 [i_7])));
                    }
                }
            }
            var_29 = (arr_7 [i_6]);
            arr_38 [i_6] = ((((1 % (arr_24 [i_6] [0]))) << (var_16 - 72)));
        }
    }
    var_30 = (max(((max(1, var_14))), ((32767 ? (!var_8) : var_5))));
    var_31 = var_10;
    #pragma endscop
}
