/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_6, ((min(39878, 6680516558425939183))))), (((-5127541870368382748 ? var_5 : var_19)))));
    var_21 = (var_2 ? var_4 : (((1 ? 0 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (max(((-(arr_0 [1] [1]))), (((-(arr_3 [i_1] [i_0] [i_0]))))));
                arr_4 [i_0] [i_0] = (arr_1 [i_0]);
                var_23 = (arr_2 [i_0] [8] [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 = (arr_3 [i_2] [7] [i_0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] = ((5127541870368382733 ? 0 : 4583507908756927128));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((~((max(76, 102)))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [i_0] = var_11;
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_9 [i_0] [i_0] [15] [i_4] [15] [1])));
                    }
                    var_25 = ((((11781861564188402083 ? 0 : 18446744073709551601))) ? ((-(arr_6 [i_0] [i_1] [i_1] [i_0]))) : -0);
                    var_26 = (min((((arr_8 [16] [i_1] [i_1] [i_1] [0] [i_1]) ? (arr_8 [0] [i_2] [i_1] [i_0] [i_0] [i_0]) : -8370581013310688463)), (((+(((arr_14 [i_0] [i_1] [i_1] [12] [i_0] [i_0]) ? (arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]) : (arr_3 [4] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_27 *= var_18;
    #pragma endscop
}
