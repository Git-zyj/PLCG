/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((var_1 | ((max((-2047 ^ 1), -28)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (min(((-2147483646 ^ (var_14 != 2269659217))), (max(var_0, (var_11 < 11026328002476139699)))));
                            var_21 = ((var_3 ? -1 : (((max(0, 2269659217))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [0] = (!-21818);
                            var_22 -= -319840457;
                            var_23 = 11026328002476139701;
                        }
                    }
                }
                var_24 = ((arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]) : ((max((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]), -22781))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_5] [i_5] = (min(var_14, (arr_3 [i_6])));
                                var_25 = (((((-522075527 ? -2147483624 : ((956 ? 105 : 11493))))) / 2304717109306851328));
                                var_26 = (max(var_26, (!var_4)));
                                var_27 = (min(var_27, (((((max((arr_17 [i_6 + 2] [i_6 + 2] [i_4] [i_6 + 2] [i_6 - 1] [i_6] [i_6]), var_15))) || (arr_17 [i_0] [i_0] [i_1] [i_6 + 2] [i_6] [12] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_17;
    var_29 = ((((-1308214946 != (var_9 != var_9))) ? (max(var_10, (-983801200 | var_18))) : (((var_6 > ((var_7 >> (var_13 - 176))))))));
    #pragma endscop
}
