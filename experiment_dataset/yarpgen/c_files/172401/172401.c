/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max((((1 ? ((1 ? var_9 : 2147483648)) : (min(805306368, 1))))), (min(1, ((28 ? var_6 : 0))))));
        var_16 += 1;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = ((-597139175 ? 597139154 : 1));
        var_18 = (max(var_18, 16776704));
        var_19 = (max(var_19, (((((min(182, ((var_6 ? 97217156 : 1))))) ? 3 : (-31313 / 597139182))))));
        arr_4 [i_1] = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_20 = -23;
                    var_21 = (15 % var_4);
                    var_22 = (max(var_22, ((max((min(var_9, (arr_10 [i_2] [i_2] [i_2] [1]))), (min(((23 ? 4294967295 : (arr_11 [i_2] [i_3] [i_4]))), (((1 % (arr_9 [i_2] [8])))))))))));
                }
            }
        }
        var_23 |= (max(26769, ((((arr_6 [i_2]) || ((((arr_10 [i_2] [i_2] [1] [i_2]) ? 1755422512 : (arr_8 [i_2])))))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_14 [i_5] [i_5] = ((((min((((1 != (arr_12 [i_5] [i_5])))), var_5))) ? (min(-23, 8388608)) : ((min(-23, (arr_12 [i_5] [i_5]))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_24 = (arr_12 [i_5] [i_6]);
                            var_25 -= (((-32287 ? 0 : 15)));
                            var_26 &= (arr_20 [i_8]);
                        }
                    }
                }
            }
            var_27 = (1 != 1);
            var_28 = (-105 ? (arr_12 [i_5] [i_6]) : var_8);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_29 = (var_0 ? (arr_25 [i_5] [i_12 - 3] [i_12 + 1] [i_12 - 2]) : (-127 - 1));
                            arr_32 [i_12] [i_12] [i_6] [i_11] [i_5] [i_6] = 1525478900;
                            arr_33 [i_5] [i_6] [i_6] [0] [i_5] [5] [3] = ((127 ? (arr_29 [i_12] [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]) : (arr_31 [i_12 - 3] [i_12 - 2] [i_5] [i_12 - 1] [i_12 - 1])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_30 = (min(var_30, (((~(arr_15 [i_13]))))));
            var_31 = (((arr_25 [i_5] [i_13] [i_13] [13]) + (arr_25 [i_5] [i_5] [1] [1])));
        }
        arr_36 [i_5] = ((((((max(-64, (arr_26 [i_5] [i_5] [i_5])))) ? var_10 : (arr_28 [i_5] [i_5] [i_5] [i_5]))) != (((max(1, 54))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_47 [i_5] = (max((min(((max(1, var_13))), (min(32265, (arr_30 [i_15] [i_14] [i_5] [i_16] [i_14] [i_14] [i_16]))))), (arr_12 [i_5] [i_17])));
                            arr_48 [i_5] [i_5] [i_15] [i_16] [i_17] [i_5] [i_16] = (!var_6);
                            var_32 = (432345564227567616 % -7);
                            var_33 &= (((1 << ((((max(56, -1))) - 46)))));
                            var_34 = (max(var_34, (((1536 ? (((1 ? 1065353216 : 3796086075))) : (((((var_3 ? var_3 : 1536))) ? (((arr_19 [16] [16]) ? -1 : (arr_37 [i_5]))) : 44)))))));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_35 = 1073479680;
                            var_36 = (((arr_24 [i_5] [i_5] [i_15] [i_15] [i_18] [i_16] [i_5]) ? (arr_24 [i_5] [i_5] [i_15] [i_16] [i_15] [i_16] [i_16]) : 30));
                            var_37 = (2248512450721561035 ? var_12 : 60);
                            var_38 = 48;
                        }
                        var_39 += arr_13 [i_5] [i_5];
                    }
                }
            }
        }
    }
    var_40 += ((~(((((-63 ? 1 : var_13))) ? var_0 : (var_2 | var_10)))));
    var_41 = 1;
    var_42 = 1;
    #pragma endscop
}
