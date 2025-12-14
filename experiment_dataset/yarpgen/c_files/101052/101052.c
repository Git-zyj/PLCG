/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min(((min(2652, -2647))), (max(-2633, -4184739988673053899))))), (max((min(-2633, 7989455780224596602)), ((min(2652, var_9)))))));
    var_17 += (max((min((max(var_5, 0)), (min(-17405, var_7)))), (min((min(71, 8176)), ((min(var_3, var_8)))))));
    var_18 = (max((min((min(1240811249339940466, (-9223372036854775807 - 1))), ((max(-89, 24197))))), ((min((min(var_15, var_0)), ((min(2644, var_3))))))));
    var_19 = (min(((max((max(-2662, 1)), (min(2662, 2652))))), (max(((min(var_12, var_10))), (min(var_6, 17223345429655262277))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((min(36306, 17223345429655262277)))));
                        var_21 = min((min(((max(var_8, -2652))), (max((arr_3 [i_0]), (arr_11 [i_3] [i_3]))))), ((min((min(var_7, 38613)), ((max(-77, 2662)))))));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_22 = (max(((max((max(1, (arr_2 [i_0]))), (min(var_1, -71))))), (max((min((arr_11 [i_4] [i_4]), (arr_13 [14] [i_1] [i_1]))), ((min((arr_5 [i_0] [i_1]), var_15)))))));
                        arr_16 [i_0] [i_0] [i_0] [i_4 + 1] &= (min(53790, 255));
                    }
                    arr_17 [i_0] [i_1] = (max((min(((min(47456, var_5))), (min((arr_11 [i_0] [i_1]), var_0)))), (min((min(-2632, 332927591683172187)), ((min((arr_5 [i_0] [i_0]), var_2)))))));
                }
                var_23 ^= (min((min((max((arr_13 [i_0] [i_1] [i_1]), 105553116266496)), (max((arr_10 [i_0] [i_0] [i_0]), var_9)))), ((min((max(-71, 100377277)), ((max(-2652, 1))))))));
            }
        }
    }
    #pragma endscop
}
