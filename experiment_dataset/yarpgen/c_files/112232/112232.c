/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min((((arr_3 [i_1 - 2]) ? ((4167965207 ? 134217728 : (arr_3 [i_0]))) : var_8)), var_11));
                arr_5 [i_0] = (((-1 | 1) - ((var_13 ? 2 : -19))));
                arr_6 [i_0] [i_1] = (min(((max((arr_2 [i_1 - 2] [0]), 1535103318))), ((var_3 ? (max(2199022731264, (arr_0 [1] [i_0]))) : (var_7 <= var_16)))));
            }
        }
    }
    var_18 = ((var_7 || ((max(-370137238, var_0)))));
    var_19 = (min(var_19, ((((((6256393509933297843 ? var_3 : -85392971))) ? (min(0, (((var_12 ? 4209574340 : var_15))))) : -var_15)))));

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (max(var_20, (((((((arr_7 [i_2] [12]) ? 4209574357 : (((max((arr_7 [i_2] [i_3]), (arr_10 [14] [i_2] [10])))))))) ? var_13 : (max(((((arr_7 [i_3] [i_2]) | 435333399))), (max(4209574338, 2147483647)))))))));
            arr_11 [i_2] [i_3] [i_3] = ((((min((arr_7 [i_3] [i_2]), (arr_7 [12] [i_3])))) ? (((((((arr_10 [i_3] [i_3] [i_3]) ? (arr_10 [i_3] [i_2] [i_3]) : 4209574340))) || var_16))) : ((85392988 ? 32767 : -39))));
            var_21 = (max(var_21, (((var_3 ? (~85392955) : (((~85392957) * (arr_10 [22] [i_3] [i_3]))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, (((+(((!((max((arr_12 [i_2] [i_2] [1] [i_5]), var_6)))))))))));
                        arr_16 [9] [i_3] [i_3] [9] = var_14;
                    }
                }
            }
        }
        arr_17 [i_2] = -92;
        var_23 = ((((((((arr_14 [i_2] [i_2] [11] [11] [i_2] [11]) || -25726)) ? (min(1633720347, 97)) : 215))) ? (((~(~-370137238)))) : (max((((4209574340 ? (arr_13 [i_2] [i_2]) : var_0))), (max(85392988, (arr_15 [14] [i_2] [14] [22])))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] [i_6] = var_6;
        var_25 = (((((~(~40)))) ? ((min(var_3, var_6))) : (min((~var_9), ((463005176 ? var_5 : 85392955))))));
        var_26 = (max(223, (arr_15 [i_6] [i_6] [i_6] [22])));
        var_27 = (arr_12 [i_6] [i_6] [i_6] [i_6]);
    }
    var_28 = (max(var_6, ((2367940569 >> (4611686018427387903 - 4611686018427387895)))));
    #pragma endscop
}
