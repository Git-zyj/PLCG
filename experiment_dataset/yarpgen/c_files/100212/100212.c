/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = -30300;
                    arr_8 [i_2] = -30306;
                }
            }
        }
    }
    var_10 = (((2 % var_8) << ((var_7 ? (!var_9) : var_5))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [i_3] = -30291;
                                var_11 = (min(var_11, (--322)));
                                var_12 = (!((max(((var_1 | (arr_21 [i_7] [i_6] [i_5 - 2] [i_4] [i_3]))), var_9))));
                                var_13 -= (arr_4 [17] [i_4] [17]);
                            }
                        }
                    }
                    arr_25 [1] [i_3] [0] [i_5] = ((((min(-var_0, var_5))) ? (max((arr_0 [i_4 + 1]), var_3)) : (((((arr_19 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]) || (arr_4 [i_4] [i_4 + 1] [i_4 + 1])))))));
                    arr_26 [i_3] [i_5] = arr_0 [i_5];
                    arr_27 [i_5 - 1] [i_3] [i_5] = ((!(arr_19 [i_3] [i_4] [i_3] [i_5])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_14 -= ((var_9 ^ (arr_23 [i_3])));
                            arr_36 [i_3] [i_4 + 1] [i_8] [i_9 + 1] [5] = ((9223372036854775803 ? (arr_29 [i_9] [i_9 - 1] [i_9 - 2] [i_8]) : var_3));
                            var_15 -= var_0;
                        }
                        for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
                        {
                            arr_39 [4] [i_4] [4] [i_9] [i_11] = ((((((arr_5 [15] [i_8] [i_8] [i_8]) && (arr_32 [i_3] [i_4] [i_8] [i_9 - 1] [i_3] [i_4])))) & (!var_9)));
                            var_16 = ((((8 << (var_4 - 95))) >> (var_8 - 3910581612)));
                        }
                        for (int i_12 = 2; i_12 < 7;i_12 += 1) /* same iter space */
                        {
                            var_17 = ((-98 % (arr_2 [i_4 + 1])));
                            arr_42 [i_3] [i_3] [1] [i_9] [0] |= 13;
                            arr_43 [i_3] [i_4] [i_4 + 1] [i_3] [i_8] [i_3] [i_3] = ((var_5 ? (arr_6 [i_3] [0]) : var_4));
                            arr_44 [i_3] [i_4] [i_8] [i_9] [i_12] = ((-((var_4 ? 10 : 30309))));
                            arr_45 [i_3] [i_3] = arr_6 [i_3] [i_8];
                        }
                        for (int i_13 = 2; i_13 < 7;i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_3] [i_4] [i_8] = (((arr_13 [i_3] [i_3]) != (-19 % var_5)));
                            arr_49 [i_3] [2] [i_3] = ((((var_2 ? 17342 : var_7)) == var_2));
                            arr_50 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [4] [i_4] = ((var_6 ? (arr_18 [i_13 + 1]) : var_7));
                            var_18 = (((arr_22 [i_3] [i_3] [i_8] [i_3] [i_13 + 3]) && var_0));
                        }
                        arr_51 [i_3] = ((-(arr_5 [i_9 - 2] [i_9 - 2] [i_9] [4])));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_58 [i_3] [i_15] [i_15] = (-5591932049328578719 || 42675);
                                var_19 = ((-(arr_19 [i_4 + 1] [i_4 + 1] [4] [i_8])));
                                arr_59 [i_15] = ((((min(var_3, var_2))) ? ((1 ? (arr_37 [i_4 + 1] [i_15] [i_4 + 1] [i_4] [i_15]) : -30298)) : (((((15235 ? 1 : var_9)))))));
                                arr_60 [i_15] [i_15] [i_8] [i_15] [i_3] = (((!(((var_9 ? (arr_18 [i_15]) : 10824))))) ? (((var_9 || 42660) ? (((arr_4 [i_3] [i_4 + 1] [i_8]) & (arr_22 [i_3] [i_3] [i_8] [i_14] [4]))) : (((min(-6321, var_7)))))) : 7522160460669276299);
                                arr_61 [i_3] [i_3] [i_4] [i_15] [0] [i_15] = (((var_5 && var_3) ? ((-(((arr_11 [i_3] [i_4] [i_14]) / (arr_20 [i_8] [i_8] [i_15]))))) : 1));
                            }
                        }
                    }
                    arr_62 [7] [i_4] = (((22833 / (arr_47 [i_8] [i_8] [i_8] [i_8] [i_8]))));
                }
                arr_63 [5] [i_4] = ((~((var_9 ? ((min((arr_35 [i_4]), 42667))) : -var_9))));
                arr_64 [i_4] [4] = var_1;
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
