/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -512718361;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (max(((((0 ? -217575867 : 512718360)) <= ((512718361 ? var_5 : (arr_6 [6] [i_0] [15]))))), ((0 <= ((min(var_1, (arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_2] [11] = 24866;
                    arr_9 [i_0] [i_1] [i_0] = ((-512718361 ? (~var_8) : ((((min(var_8, (arr_3 [i_0]))) == (arr_2 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
