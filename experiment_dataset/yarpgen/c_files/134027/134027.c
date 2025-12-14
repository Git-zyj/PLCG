/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? var_4 : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = (((((-(arr_1 [i_0])))) ? -var_15 : (arr_7 [i_0])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_18 = (arr_11 [i_0] [i_0] [i_3] [i_4]);
                            var_19 = (max(var_19, (((-1652422862284244869 | (arr_1 [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 = (((arr_7 [i_2]) ? (arr_7 [i_0]) : (arr_13 [i_0] [i_1] [i_2] [i_5])));
                            var_21 += 10600994636565959517;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_6] = (!11);
                            var_22 = 10600994636565959517;
                            var_23 = arr_0 [i_3];
                        }
                    }
                    var_24 = ((-(((-20304 >= (((arr_5 [i_0] [i_0]) - (arr_2 [10]))))))));
                }
            }
        }
    }
    var_25 += (var_7 != var_15);
    #pragma endscop
}
