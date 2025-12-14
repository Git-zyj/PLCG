/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_17 = ((~(min((~13269), (arr_6 [i_0 - 2] [i_2])))));
                    arr_9 [i_0] [i_2] = (-2147483647 - 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = ((!(~104)));
                                var_19 += var_13;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_20 = (min(var_20, (((-((~(min(3471994960, var_4)))))))));
                    var_21 = arr_16 [i_0] [i_1] [i_5] [0];
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_22 = (max(var_22, (arr_10 [i_0 - 1])));
                    arr_19 [i_1 - 1] = ((~(!var_6)));
                }
                var_23 = (arr_12 [i_0] [3] [12] [12] [3] [i_1]);
                arr_20 [i_0] [i_1 - 1] [i_0] = var_7;
                var_24 = ((-(arr_11 [i_0] [i_0] [i_0 - 2] [i_1])));
            }
        }
    }
    var_25 = (min((((!(~822972332)))), 36028797018963967));
    var_26 = ((~(max(var_14, -1954738984041793085))));
    #pragma endscop
}
