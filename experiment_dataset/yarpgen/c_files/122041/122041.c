/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((max(((min(var_16, var_1))), (max(7, var_15)))), ((min((min(var_8, var_5)), ((min(var_10, 29850)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((min(((min((min((arr_4 [i_2] [i_1] [i_0]), (arr_6 [i_0] [6] [i_2] [i_2]))), ((min((arr_7 [i_0]), -29850)))))), (min((min(var_1, var_15)), ((max(-28691, -29850))))))))));
                    var_20 = min((min((min(20, 29850)), (max(0, -29850)))), 58);
                }
            }
        }
    }
    var_21 = (max(var_21, ((min(((min((max(-1, var_3)), (min(var_16, -31799))))), (min(((min(1, -4708167031213727672))), (max(var_15, var_13)))))))));
    var_22 = (min(((min(-29855, 1349331045))), (min(((min(var_1, var_0))), (max(2021443292393712525, var_10))))));
    #pragma endscop
}
