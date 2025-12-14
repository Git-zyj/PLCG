/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min((max((max(14553310870831136651, 26656)), (-9223372036854775807 - 1))), ((max(((min(4294967295, 1))), (max(4294967295, 5196450843887998239)))))));
    var_15 = (min(((max(((min(var_4, var_10))), (min(var_6, var_1))))), (min(((min(var_4, var_13))), (min(143, 8281504153267098055))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [2] [2] = (max((min((min(-1038731755159701933, 4294967276)), ((max(111, 34))))), (min((max(1, -3862429985301159577)), ((max(-109, var_10)))))));
                var_16 = max(((min(1, 7))), (max((min((arr_2 [i_0] [i_1] [i_1]), var_6)), ((max(var_13, var_10))))));
                var_17 = (max(var_17, (min((min(((max(var_10, var_9))), (max(var_3, (arr_1 [i_0]))))), (max((max(2223202203, var_8)), ((min((arr_0 [i_1]), 143)))))))));
                var_18 = (max(11747617349715209576, 1186292854));
            }
        }
    }
    #pragma endscop
}
