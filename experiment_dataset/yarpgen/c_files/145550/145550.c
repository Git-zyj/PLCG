/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((max(var_14, var_8))), ((min(877093683, 4727743532808592528)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_1;
                var_18 = (max(var_18, (((!(((((max(var_3, (arr_0 [i_0] [i_0])))) ^ ((~(arr_0 [i_1] [i_1])))))))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_19 = (max((((((((arr_0 [i_2] [i_1]) ? var_11 : (arr_2 [i_0] [i_0] [i_0])))) || ((!(arr_1 [i_1])))))), (arr_3 [i_2 + 1] [i_1])));
                    var_20 = (arr_3 [i_2 + 1] [7]);
                    var_21 = var_9;
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((~((-(-32 / -1108930614)))));
                    var_22 = (max(var_22, 1556110260082454857));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_23 = ((!(arr_11 [i_0] [i_3 + 1] [i_0] [i_3 - 1])));
                                var_24 = (2301882087687515420 <= 32);
                                var_25 = (~var_0);
                                var_26 *= var_2;
                            }
                        }
                    }
                    var_27 = (max(var_27, ((max((((arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 2]) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 2]) : (arr_10 [i_3] [i_3] [i_3 + 2]))), (arr_10 [i_3] [i_3] [i_3 - 2]))))));
                }
            }
        }
    }
    var_28 = (min(var_28, var_16));
    #pragma endscop
}
