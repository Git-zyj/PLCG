/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_6, (max(var_8, var_0)));
    var_11 = ((((min(var_2, ((5232987197165711642 ? 0 : 11))))) ? ((var_7 ? var_8 : var_1)) : ((var_9 ? var_7 : ((min(240, -1942605856)))))));
    var_12 = (max(((var_0 ? (5232987197165711635 < 18446744073709551610) : ((9948239138095185569 ? var_4 : var_8)))), (max(((var_6 ? var_2 : var_3)), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [4] = (min(((min(var_8, (arr_8 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 2])))), ((((19 ? 1 : (arr_8 [i_0] [i_0] [i_0] [i_0]))) >> (var_4 - 9112883914936691439)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_6;
                    arr_11 [i_0] [i_0] [i_0] = ((max(1942605857, var_2)));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((69 ? -var_3 : ((((((arr_2 [i_0] [i_0]) ? -70 : var_1)))))));
                    arr_13 [i_0] [i_0] = ((~(min(623661322, -5))));
                }
                arr_14 [i_0] [i_0] = (!-81);
                arr_15 [i_0] [i_0] = ((((!(((-41 ? var_9 : var_9))))) ? ((var_5 ? 10424948012313026175 : var_9)) : (max(66, ((15850229608854022031 ? 75 : var_4))))));

                /* vectorizable */
                for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_7 / (arr_6 [i_0 - 1])));
                                arr_27 [i_1] [i_0] [i_1] [i_0] [i_1] [i_1] = arr_4 [i_3] [i_3 - 3] [i_3];
                                arr_28 [i_0] [i_0] [i_0] [10] [i_0] [i_0] = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [8] [i_0] [i_0] = ((4294967292 ? (arr_20 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2]) : (arr_4 [i_0 + 1] [i_1 + 1] [i_3 - 1])));
                            }
                        }
                    }
                    arr_30 [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_1 + 3]) ? 9 : var_6));
                    arr_31 [i_0] = var_6;
                    arr_32 [i_0] [i_0] [i_0] [i_0] = (((arr_19 [i_1] [i_1] [i_3 + 1] [i_1] [i_1] [i_1]) ? 4294967278 : (arr_5 [i_3 + 1] [i_1 + 3] [i_0 - 1])));
                    arr_33 [i_1] [i_1] [i_1] [i_0] = (arr_20 [i_0] [i_0 - 1] [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1]);
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_36 [8] [8] = -90;
                    arr_37 [i_0] [1] [1] [i_0] = ((var_4 ? 2596514464855529585 : (!var_0)));
                    arr_38 [i_0] [i_0] [i_0] = ((4184131894841049442 ? (arr_34 [i_1 + 3]) : 202));
                    arr_39 [i_0] [i_0] [i_0] = (arr_17 [i_0]);
                    arr_40 [i_0] = ((-8169125649794213168 + ((var_1 ? var_3 : var_0))));
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0] = var_8;
                    arr_45 [4] &= (((min(3705701805633399395, 23)) | ((3705701805633399392 ? ((-101 ? 3267341294569522317 : 5)) : var_0))));
                    arr_46 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (((((var_9 ? 40 : var_8))) ? -23 : -19)) : ((((arr_42 [i_7 - 1]) == var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
