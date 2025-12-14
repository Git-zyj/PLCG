/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(998546694626539347, -998546694626539360));
                arr_5 [i_1] = (max((max((max(var_4, -998546694626539348)), ((min((arr_3 [i_1]), var_2))))), (min((max(998546694626539347, (arr_4 [i_0] [i_1] [i_1]))), (max(var_8, 93))))));
                arr_6 [i_0] [i_0] [i_1] = (min((max((min(998546694626539337, -998546694626539347)), (max(998546694626539348, -998546694626539338)))), ((max(((min(var_9, var_9))), (min(234, var_9)))))));
            }
        }
    }
    var_12 = (max((max(((max(var_1, var_7))), (min(var_1, var_6)))), (max((min(var_1, var_6)), ((max(var_7, 1)))))));
    #pragma endscop
}
