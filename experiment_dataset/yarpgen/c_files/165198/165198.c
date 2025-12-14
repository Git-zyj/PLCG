/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= (max(((((arr_0 [i_1]) ? var_15 : var_7))), (var_1 % 18374686479671623680)));
                var_18 = ((((((arr_0 [i_0]) ? var_0 : var_8))) ? (((arr_1 [i_1]) + (arr_3 [i_0 + 1]))) : 17537));
            }
        }
    }
    var_19 = var_16;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 += 0;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((((((arr_7 [i_3 - 1] [i_3 - 1]) * ((18446744073709551615 ? var_4 : var_8))))) ? var_4 : ((-(arr_12 [i_3 + 1] [i_4 + 1] [i_4 - 2])))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_4;
                        var_21 = (((-17537 && 6841591006598788095) | (arr_5 [i_3 + 1])));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_22 = (arr_8 [i_2] [i_2]);
                        var_23 = (((arr_9 [i_2]) < ((min(8530408, 15449195493359316251)))));
                        var_24 = (((((8757540338257902291 ? ((8239250057149466390 ? 1708522836 : 10843255932751807173)) : 4194240))) ? 7 : (((var_6 ? var_5 : var_8)))));
                        var_25 = (max(var_25, var_4));
                        var_26 = (((0 - 3353820695) ? (((((arr_12 [i_6] [i_6] [6]) + var_12)) - (((-(arr_11 [i_2] [i_6 + 3])))))) : var_10));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_2] [i_2] [i_2] [0] [0] [i_7 + 4] = (min(var_8, (arr_19 [i_3] [i_3 + 1] [i_4 - 1] [i_7 + 1])));
                        var_27 = ((((max(var_17, var_11))) ? ((-7277854451294716048 ? 6627747536678229408 : 14900124265479558766)) : (1 - -133693440)));
                    }
                    var_28 -= -1708522836;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 += (((3602487163 && 61204) <= (max((arr_25 [i_8] [i_8]), 692480132))));
        var_30 = ((((((arr_26 [i_8]) % (arr_25 [i_8] [i_8])))) ? ((0 ? 11 : 9324831335270285686)) : ((((arr_25 [i_8] [i_8]) | -2506633440705684875)))));
        var_31 = (((((max((arr_26 [i_8]), (arr_26 [i_8]))))) != 14158856776079479250));
    }
    var_32 = var_11;
    #pragma endscop
}
