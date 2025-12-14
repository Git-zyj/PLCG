/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 15486851040207782361));
        var_17 = (!141173593837618924);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_18 = 141;

                        for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_19 = (arr_4 [11] [i_2] [i_4]);
                            var_20 = (((arr_14 [i_4 - 1] [i_4 - 2]) ? (arr_14 [i_4 - 3] [5]) : 141173593837618924));
                        }
                        for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((var_11 && (((1 ? 1 : 1)))));
                            var_22 = var_2;
                            var_23 |= ((-(arr_11 [i_0] [i_1] [i_0])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_24 ^= ((((((arr_6 [i_0] [i_0]) ? var_3 : 236))) ? ((var_14 ? var_0 : 12147988210654294371)) : var_13));
                            var_25 = (min(var_25, ((((arr_11 [i_2 - 2] [i_2 - 2] [i_2]) ? (arr_11 [6] [12] [6]) : (arr_9 [i_2] [1] [1] [i_2 - 2] [i_2] [i_2 - 1]))))));
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_26 = (arr_10 [i_2 - 2] [i_2 - 2] [i_2] [3] [i_2 + 2]);
                            var_27 = (((arr_11 [i_0] [i_8 - 1] [i_2 - 1]) > 870499427));
                            var_28 = (((((arr_4 [i_1] [i_1] [i_0]) >= -390461586204528281)) ? -1 : ((15486851040207782361 % (arr_14 [i_0] [10])))));
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, (((870499427 || (arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0]))))));
                            var_30 = ((23 ? (var_2 ^ 13564141587298502784) : (arr_4 [i_9 + 2] [i_9] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_31 = (max(var_31, (arr_13 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_1])));
                            var_32 = var_15;
                            var_33 = ((870499434 ? 34366 : 4022883816));
                            var_34 |= -32;
                            var_35 = ((18776 ? (arr_23 [i_2 + 2] [i_2 - 1] [i_2 + 2]) : 0));
                        }
                        var_36 ^= 390461586204528280;
                        var_37 = (20351 != 16);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            var_38 = (arr_32 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]);
                            var_39 = var_12;
                        }

                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            var_40 = ((4022883818 != (-829971996 % 32)));
                            var_41 = 18065065082664601015;
                            var_42 = 10436487478873156781;
                            var_43 = (12 - 7520573086025707576);
                        }
                        var_44 = ((var_12 ? (arr_25 [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1]) : var_15));
                        var_45 = ((~(((arr_9 [i_11] [i_2] [i_2] [i_1] [i_1] [i_0]) ? 22 : (arr_30 [i_1] [i_1] [i_1])))));
                        var_46 = (1 || var_13);
                    }
                    var_47 = ((~(~18446744073709551593)));
                }
            }
        }
    }
    var_48 = ((var_10 ^ (var_15 | var_0)));
    #pragma endscop
}
