/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 ^= (((((~(arr_1 [i_0] [i_0])))) ? (((((15597 ? (arr_2 [i_0]) : 60588))) ? 15583 : 49935)) : ((((7309 >= 48109) ? ((((arr_2 [i_0]) ? 49953 : (-2147483647 - 1)))) : 1233271099)))));
        var_13 = ((-59494 ? (arr_0 [i_0]) : (min(var_1, 20522))));
        arr_3 [1] |= (~-var_10);
        arr_4 [i_0] = ((4939 ? 1 : -32223));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = 1;
        var_15 ^= var_11;
        arr_8 [i_1] [i_1] = var_4;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_16 ^= 49953;
                        var_17 = (min(var_17, ((((((2147483647 ? 17435 : 13886417882613575542))) && 65535)))));
                        var_18 *= ((var_1 ? 0 : 235));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_19 = ((+(min((((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) >> (-9011 + 9023))), ((((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) || 235)))))));

        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_20 = (max(var_20, (((+(max((arr_2 [i_6]), ((var_5 ? var_6 : 2147483639)))))))));
            var_21 = ((209 ? (min(((~(arr_22 [i_5]))), (arr_19 [i_6]))) : (arr_7 [4])));
            arr_23 [i_5] [i_5] = (((((~105553116266496) ? (max(198, 7999634975660724295)) : 1317195058)) ^ var_7));
        }
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_22 = (13446017407689776332 ? (!var_5) : 90);
                            arr_36 [i_10] [i_7] [i_7] [i_7] [i_7] [i_5] = 0;
                            var_23 *= (((var_10 ? ((54505 ? 7069643182295146804 : var_11)) : 2199792009528636920)) >= (((16792270581024806775 ? (-127 - 1) : 168))));
                        }
                    }
                }
            }
            arr_37 [i_5] [i_7] = ((!(-127 - 1)));
        }
    }
    var_24 ^= var_8;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            {
                arr_43 [i_11] [0] = ((((max(3476750299333646660, ((((arr_6 [i_11] [i_11]) ? (arr_16 [i_11]) : (arr_35 [i_11] [i_11] [i_11] [i_12] [i_11] [i_12] [i_12]))))))) ? (~21) : -1));
                arr_44 [i_11] = -2904636010038472782;
                var_25 = (min(((-2147483642 ? (arr_28 [i_12] [i_12] [i_11]) : (arr_28 [i_12] [i_11] [i_11]))), (((~((210 ? 3975 : 127)))))));
                var_26 = (max(var_26, (((~(((((1620140840064345447 ? 65514 : var_5))) ? 92 : 11653060312643526547)))))));
            }
        }
    }
    #pragma endscop
}
