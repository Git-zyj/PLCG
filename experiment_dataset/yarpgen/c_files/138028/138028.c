/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 10740;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 |= (((((4100 ? (((-2147483647 - 1) ? 4100 : 736425651)) : (arr_4 [i_0] [i_0] [i_0])))) ? ((min(var_3, (arr_4 [i_0 - 1] [i_1 + 4] [i_1 - 2])))) : var_15));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_0] = (~4100);
                    var_19 = (((arr_5 [i_0] [i_2] [i_2 + 1]) ? (arr_1 [i_2 + 1]) : (arr_4 [i_0] [i_1] [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 |= ((((2147483643 ? 511 : 0)) > ((var_3 ? var_16 : 184332430))));
                    arr_12 [i_0] [i_0] = ((-(arr_0 [i_0 + 4])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = (-534 & 4881893667680966549);
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] [i_5] = (((arr_14 [i_1 + 2] [i_0 + 1]) ? (arr_0 [i_0 + 4]) : var_2));
                                var_21 = (!4294967295);
                            }
                        }
                    }
                    var_22 = ((!(arr_1 [i_3])));
                    var_23 |= var_8;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_24 = ((!(!-9882)));
                    var_25 = (((((1632339274 ? (arr_11 [i_0] [i_1] [i_6]) : 45394))) || (arr_1 [i_1 + 3])));
                }
                var_26 = ((~(((arr_10 [i_0] [i_0] [i_0 + 4]) ? (arr_10 [i_0] [i_0] [i_0 + 1]) : (arr_10 [i_0] [i_0] [i_0 + 1])))));
            }
        }
    }
    var_27 |= -2114766704;
    #pragma endscop
}
