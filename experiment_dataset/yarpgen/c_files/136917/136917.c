/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_11;
    var_18 = (min(((max(var_11, var_16))), (((var_16 | var_4) ? ((min(var_11, var_0))) : var_4))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = (((var_7 ? var_7 : 2797)));

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_20 = ((1 / (var_15 / var_12)));
            var_21 = ((1 ? 254 : 1));
            var_22 = (arr_1 [i_0 + 1]);
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_14 [i_5] = ((var_1 + ((((max(807184550, 18446744073709551615))) ? ((1614548498804204734 ? 807184556 : 1)) : 32630))));

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_23 &= (min(((max(var_5, var_1))), ((3487782746 ? (~127) : (arr_15 [i_6 + 1] [i_3] [i_6 + 1] [i_5] [i_6] [i_5] [i_4])))));
                            arr_17 [i_2] = -6584;
                        }
                        var_24 = -1260968517;
                        arr_18 [i_2] [i_2] [i_3] [i_4] [i_4] = max(var_3, (((((3287429843 * (arr_7 [i_2])))) ? (((max(var_14, var_7)))) : ((var_9 ? 448 : 25)))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_31 [i_9] [i_9] = (min((((((((var_15 + 2147483647) >> (16832195574905346882 - 16832195574905346875)))) ? ((((-8855 + 2147483647) << (((-1 + 22) - 21))))) : (min(var_15, var_8))))), (((var_13 ^ 7311829855663317635) >> (((3380854921144240654 & 2237115643) - 21432275))))));
                            var_25 = (min(var_25, (((var_8 ? -var_0 : (arr_16 [i_7] [i_10] [0] [i_8 - 1] [i_7] [i_2] [i_2]))))));
                        }
                    }
                }
            }
            var_26 = (max((max((((14808 ? var_10 : var_0))), var_13)), var_5));
            arr_32 [2] [i_7] [i_2] = (((max(var_15, (-1767929353 && -1233)))) ? (14802 && 0) : (max(var_3, (((arr_4 [i_2]) ? var_10 : var_14)))));
            var_27 = ((-((((var_16 & var_6) >= (((1 ? var_14 : var_9))))))));
            var_28 = -6579;
        }
        for (int i_11 = 4; i_11 < 16;i_11 += 1)
        {
            var_29 = (min((var_3 + 14806), ((-3380854921144240685 / ((3380854921144240714 ? 66 : -1947773208953763419))))));
            var_30 = (max((~-62), ((((((var_2 ? 6597 : var_2))) >= (5797082441561080935 / -1440717462340624891))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_31 = (min(var_31, (((25217 ? 50715 : 10897491962680125664)))));
            var_32 = (max(var_32, 2240134397));
        }
        var_33 = ((~(max(-6588, ((12 ? var_0 : var_3))))));
        var_34 = (max(var_34, var_16));
    }
    #pragma endscop
}
