/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = max(((!((((arr_2 [i_1]) ? 5966968113754123595 : (arr_0 [i_1])))))), var_2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 += (max((max(((((arr_7 [i_0] [i_1] [18] [i_0]) > var_8))), (((arr_4 [i_0] [i_0] [7]) * var_3)))), (arr_0 [i_1])));
                            var_15 = (arr_6 [i_2]);
                            var_16 = (arr_10 [1] [6] [i_2] [i_3] [i_2] [14]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_1] = max(((((16756576526922117308 / 536870911) || 25))), ((-(arr_13 [i_5] [i_5] [i_4] [i_1] [i_0]))));
                            var_17 = (max((((arr_16 [i_1] [i_1] [14] [i_5]) ? (arr_1 [14] [i_4]) : 16227122381408549797)), ((max(1, 1745810201)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
