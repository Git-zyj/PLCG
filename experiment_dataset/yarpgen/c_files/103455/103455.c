/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(74, 47093));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((var_6 >= ((((176 + (arr_1 [i_0] [i_1])))))));
                var_17 = (min(var_17, (((min((arr_0 [i_1]), (arr_0 [i_0])))))));

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] = (arr_3 [i_1] [i_1]);
                                var_18 = (min(80, (arr_14 [i_2])));
                                var_19 = (max(var_19, ((((arr_6 [i_0] [i_3]) ? (arr_9 [i_0]) : (((!(arr_8 [i_3 + 1] [i_4] [i_4] [i_3 + 1])))))))));
                            }
                        }
                    }
                    var_20 += (~771378315);
                    var_21 = ((~(max(3827981311, 524287))));
                    arr_17 [i_2] [i_1] [i_0] = ((((3523588980 ? (((arr_8 [i_0] [i_2] [i_2] [i_0]) / (arr_3 [i_0] [i_1]))) : (arr_0 [i_0]))) / 12329722575132085671));
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    var_22 += ((10613240429006360776 << (-1 + 61)));
                    arr_20 [i_0] [i_0] = ((((max((176 / 9223372036854775807), 18449))) ? (max((!1567359475), ((68 ? (arr_14 [i_1]) : 1567359475)))) : ((+((var_12 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0])))))));
                    var_23 = (arr_15 [i_0] [i_0] [i_0] [i_1] [i_5 + 1]);
                }
                var_24 = (((((79 ? 3282474378 : -46))) ? var_6 : ((-(arr_1 [1] [14])))));
            }
        }
    }
    #pragma endscop
}
