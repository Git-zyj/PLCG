/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (((arr_1 [i_1 + 1]) << (((arr_1 [i_1 - 2]) - 205))));
                    var_21 = ((~((1 >> (-15 + 22)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = ((~((var_9 & (arr_9 [i_3] [i_3] [i_3 - 1] [i_3])))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3 - 1] [i_4] = (((1 >= var_10) ? (((((((var_12 ? 65522 : 320890420))) == ((2796705337 ? 18446744073709551613 : 19)))))) : (min((((arr_10 [i_1] [i_3]) ? (arr_4 [i_0] [1]) : 1)), (((-1 ? 4294967295 : 65535)))))));
                            }
                        }
                    }
                    arr_14 [i_0] = (min((((!(arr_10 [i_1 + 1] [i_1])))), (((arr_10 [i_1 - 2] [i_2]) ? var_15 : (arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 2])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_5] [i_1 + 1] = 1;
                    arr_19 [i_1] = (((((1216396851 ? 1 : var_7))) ? var_6 : ((23 ? var_7 : (arr_10 [i_0] [i_1])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_6] = 7;
                    var_23 = var_1;
                    var_24 = arr_1 [i_1 - 1];
                    arr_23 [i_0] [i_6] [i_1] [i_6] = var_7;
                }
                arr_24 [i_0] [i_0] [i_1] = ((min(var_3, (arr_1 [i_1 + 2]))));
                arr_25 [i_0] = ((((max(-42, 1))) ? ((~(arr_15 [i_1 + 1] [i_1 + 2] [i_1 - 2]))) : ((((!(arr_4 [i_1 - 1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
