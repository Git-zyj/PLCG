/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = 511;
                    arr_8 [i_0] [i_1] [i_2] [8] = (arr_7 [i_0 + 2]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_14 [5] [i_1] [i_2] [1] [i_3] = (!var_15);
                            var_17 = (max(var_17, (arr_4 [15])));
                            var_18 += ((((4194303 ? 4194303 : 7)) - var_2));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_1]) ? ((((arr_10 [i_1]) ? 821731886 : var_5))) : (-511 + 13255794553910566302)));
                            arr_19 [i_0] [i_3] [i_2] [i_2] [i_0] [14] = arr_5 [1] [5] [1];
                            var_20 = (min(var_20, (((-((3970477564022807623 << (((arr_9 [12] [8] [i_3] [6]) + 550292549)))))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_21 = (+-27);
                            var_22 = (max(var_22, (arr_3 [i_0] [i_1] [0])));
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_3] [i_3] = (((arr_2 [i_0 + 2]) ? (((65535 ? 32767 : (arr_4 [i_1])))) : ((1 ? 4194315 : var_2))));
                        }
                        var_23 = (max(var_23, 281474976710400));
                        arr_23 [i_0] [i_0 - 1] [i_3] [10] = var_3;
                    }
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (((((arr_17 [i_7] [i_0 + 3] [i_1] [i_7] [i_1] [12] [i_7]) >> (!2)))))));
                    var_25 += (!(((~(arr_2 [i_0 - 2])))));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        var_26 = 545875936;
                        arr_33 [i_0] [i_0] [i_8] = ((-((3749091354 | (arr_10 [i_0])))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            var_27 = 2483;
                            var_28 = (((((((arr_16 [i_0] [i_0] [i_8] [6] [i_10] [i_11]) ? (arr_1 [i_0]) : 254))) * (min(0, 14454771038658316095)))));
                            var_29 = (max(var_29, (((4194316 ? (((arr_17 [2] [2] [i_0] [1] [4] [i_10] [1]) << ((((var_12 ? 1 : 63488)) - 63475)))) : (arr_4 [i_10]))))));
                        }
                        var_30 = ((!((((arr_6 [i_0] [i_0 + 1]) | (arr_32 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 + 1]))))));
                    }
                    var_31 = (arr_37 [2] [i_8]);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_32 += 60;
                        arr_43 [8] [i_1] [i_12] [i_13] = var_11;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_33 = ((((min((arr_44 [i_12]), 81))) ? (arr_34 [i_0 + 2] [i_12] [i_12]) : (arr_17 [i_0] [i_1] [i_12] [i_12] [15] [13] [8])));
                        var_34 = (min(var_34, (arr_20 [i_0] [i_0] [11])));
                    }
                    arr_46 [i_12] [5] [11] = (arr_10 [i_0]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_53 [i_12] [14] [i_12] [i_12] [i_15] [14] = ((-(arr_25 [i_12])));
                                var_35 = (min((+-311), (max((arr_28 [i_12] [i_1]), ((min(-658325165, (arr_37 [i_0] [i_12]))))))));
                                arr_54 [i_0] [i_12] [i_0] = ((((((arr_0 [i_0]) ? (arr_6 [i_0] [i_0 - 2]) : (!262080)))) || 68));
                                arr_55 [i_12] [i_12] [i_12] [i_15] [11] = (arr_13 [i_12] [i_12]);
                                var_36 = (max(var_36, (arr_34 [i_12] [i_1] [i_16 - 3])));
                            }
                        }
                    }
                    var_37 = (~72057594037927935);
                }
                arr_56 [i_0] [i_1] = ((~(((arr_28 [i_1] [i_0 + 1]) ? (arr_28 [i_1] [i_0 + 1]) : (arr_28 [i_0] [i_0 + 1])))));
                arr_57 [i_0 + 1] [i_0 + 1] [11] = ((((min((arr_10 [i_0 - 1]), (arr_10 [i_0 - 1])))) >> (((((arr_10 [i_0 - 1]) << (((arr_10 [i_0 + 3]) - 99)))) - 27361))));
            }
        }
    }
    var_38 = var_12;
    #pragma endscop
}
