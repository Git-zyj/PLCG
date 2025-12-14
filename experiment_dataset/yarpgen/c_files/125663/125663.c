/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_5, 4294967294));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] [i_0] &= (arr_0 [i_0]);
        var_15 = 4294967292;
        var_16 = (max(var_16, ((min((min(var_4, -2453196835831785391)), ((((max((arr_1 [10]), (arr_0 [i_0])))) ? 4294967294 : (4294967294 / 279275953455104))))))));
    }
    var_17 = (max((min((279275953455129 / 249174772), (~var_7))), ((-279275953455104 ? 59 : ((4294967287 ? 3915211327892405001 : 5))))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [4] = ((((arr_4 [i_1]) && (arr_4 [i_1]))) ? ((-(arr_0 [i_1]))) : 18446744073709551594);
        var_18 = ((((arr_0 [i_1]) < var_13)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 = (min(var_19, (arr_6 [i_2])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_20 -= ((!(((var_5 + (arr_7 [i_2]))))));
            arr_12 [i_2] = (arr_10 [24] [i_3]);
            arr_13 [i_2] [i_3] = ((-(arr_9 [i_2] [i_3] [i_3])));
            arr_14 [i_2] [i_2] &= ((var_2 ? ((var_11 ? var_3 : var_13)) : 142));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_21 |= (8726341564753523219 % var_2);
            var_22 += (62774 < var_1);
            arr_18 [i_4] [i_2] [i_2] = (((arr_7 [i_4]) ? var_12 : var_11));
        }
        arr_19 [23] [23] = ((((((arr_16 [i_2]) ? var_12 : (arr_7 [i_2])))) ? (var_5 + 4045792524) : -var_10));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((arr_11 [i_5 + 2] [i_5 + 2]) | (9 >= 3426736790437463046));
                        var_23 &= ((18446744073709551602 ? (arr_20 [i_5 + 2] [i_5 + 1]) : ((((arr_24 [i_2] [i_5 + 1] [i_7] [i_2] [11] [i_2]) || (arr_23 [22] [i_5 + 2] [i_7]))))));
                        arr_27 [7] [1] [4] &= (arr_9 [i_6] [10] [i_6]);
                        var_24 -= var_1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
