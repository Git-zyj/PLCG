/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-9117403881417545206, 1262878025));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [5] [18] [13] = var_3;
                    var_11 = ((((+(min((arr_4 [0] [11] [12]), var_3)))) - ((((!((((arr_2 [15]) ? (arr_5 [4] [0] [7]) : -9117403881417545210)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 += (min(var_7, 120));
                                var_13 = (~(((((arr_4 [14] [12] [10]) || var_1)) ? (((!(arr_0 [10] [12])))) : (!var_4))));
                            }
                        }
                    }
                    arr_11 [1] [0] [12] [12] &= min((min((arr_10 [5] [17] [0] [i_2 - 1] [3]), var_2)), ((22 ? 212105865357958671 : -25833)));
                    arr_12 [18] [4] [3] = ((arr_0 [i_1 + 1] [i_2 + 1]) >> (((-127 - 1) + 153)));
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
