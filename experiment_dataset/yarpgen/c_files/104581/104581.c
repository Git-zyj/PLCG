/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((var_5 / var_6) ? var_4 : (((1 ? var_13 : var_8)))));
    var_15 = (min(1, -3848));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1 + 1] = ((~(~var_6)));
                var_16 = (arr_3 [i_0] [i_0]);
                var_17 = (min(var_17, ((min(-1, var_10)))));
            }
        }
    }
    var_18 = var_7;

    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        var_19 = (((((15249819512942102635 ? (arr_5 [i_2 - 2]) : var_4))) ? ((((arr_6 [i_2]) ? var_11 : var_7))) : (((var_10 <= var_11) ? (~2689050809) : ((~(arr_3 [i_2] [i_2])))))));
        var_20 = ((((var_9 ? (var_2 / var_2) : -var_12)) ^ ((((!(arr_0 [i_2])))))));
        var_21 = (1 == 65534);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] = var_2;
            arr_14 [i_3] [i_3] [i_3] = ((((max((arr_12 [16] [13]), -7870054))) ? (max((((arr_11 [i_3] [i_3]) ? var_9 : var_10)), (arr_8 [i_3]))) : (((~((var_12 ? 54510 : var_2)))))));
            var_22 = (((6 >> (-831218619 + 831218633))));
            var_23 = (((((-100 ? ((((arr_9 [i_3]) ? 1036773342 : var_10))) : (arr_9 [i_4])))) ? (var_9 + -3844) : ((-89 & ((var_3 << (((arr_11 [i_3] [6]) - 2108049171))))))));
            var_24 = ((-(((var_13 ^ var_2) / var_5))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_25 = (arr_7 [i_3] [i_3]);
            var_26 = (min(var_26, (((((var_5 || (((-89 ? (arr_8 [i_3]) : var_0))))) ? var_1 : (arr_11 [i_5] [i_3]))))));
            var_27 = (min(var_27, (((3061259702 ? 1 : 3848)))));
        }
        var_28 = ((!var_0) * (arr_7 [i_3] [i_3]));
        var_29 = (min(var_29, ((((((3061259695 ? var_1 : (arr_12 [i_3] [1])))) ? var_11 : ((-var_8 ? ((((arr_16 [i_3] [i_3] [i_3]) ? (arr_12 [i_3] [i_3]) : var_9))) : var_6)))))));
        var_30 = ((var_10 ^ ((((arr_12 [i_3] [i_3]) % (arr_12 [i_3] [i_3]))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        arr_27 [i_6] [16] [i_6] [i_6] [i_6] = ((1 ? 65 : 1));
                        var_31 ^= (!((max((arr_8 [i_8]), (min(var_2, -2854465547238571681))))));
                        var_32 = (((max((max(var_10, var_4)), (var_0 || var_1))) >= var_11));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_33 -= ((var_9 ? ((-(max(var_10, 3)))) : (+-89)));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_33 [i_7] [i_8] [i_10] = ((((max((arr_19 [i_6] [i_7]), (3844 & 3861765944)))) ? var_10 : var_5));
                            var_34 = (arr_7 [i_11] [i_7]);
                            var_35 = (4194303 || -47121);
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_36 [i_6] = var_13;
                        arr_37 [i_6] [i_6] [i_8] [19] = var_7;
                        arr_38 [i_6] [8] [i_6] [i_12] [i_6] = (arr_34 [i_6] [8] [i_6] [i_6] [i_12] [i_12]);
                    }
                    var_36 = (max((arr_23 [i_6] [i_7] [1] [i_8]), (arr_25 [i_6] [i_6] [i_6] [i_7] [i_6])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_44 [i_6] = var_5;
                    arr_45 [i_6] [i_6] [i_13] [i_6] = (((((162 > (var_9 / 283726776524341248))))) == ((((((arr_17 [i_13]) & var_4))) ? (!var_13) : ((var_2 ? var_6 : var_0)))));
                }
            }
        }
        var_37 = ((((!(arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) ? (arr_24 [i_6] [i_6] [i_6] [i_6] [14] [i_6]) : ((-(arr_28 [i_6] [i_6] [i_6] [i_6])))));
    }
    #pragma endscop
}
