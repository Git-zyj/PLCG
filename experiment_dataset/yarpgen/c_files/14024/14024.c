/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(((min(var_14, 0))), (min(var_10, var_11)))), (min((min(var_7, var_11)), ((max(var_2, var_8)))))));
    var_17 = min((min(((max(1084185731, -1833998452))), (max(var_8, var_10)))), ((min(((min(var_2, var_9))), (min(var_1, -1833998466))))));
    var_18 = min((max((min(1, 5436434809204026374)), ((min(30177, var_10))))), ((max((min(var_1, 128)), ((min(var_7, var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [9] = (max((min((min(3109931684129712200, 213)), ((min(48585, 1833998451))))), ((min((min(48, (arr_1 [i_2] [0]))), ((min(191, var_1))))))));
                    arr_10 [i_2] [i_1] [4] [i_0] = (min((min((min(var_14, (arr_7 [i_1] [13]))), ((max(4, -25681))))), (min((max((arr_7 [i_2] [i_0]), (arr_4 [i_1] [i_1] [i_0]))), ((max(1243734603, var_12)))))));
                    var_19 *= (min((max(((min(-1710902740, (arr_8 [i_0] [i_0] [i_1] [i_2])))), (min((arr_2 [i_0] [i_0] [i_0]), var_11)))), ((min((min(1833998477, -1833998438)), (max(-1833998434, 236)))))));
                }
            }
        }
    }
    var_20 = (max((max(((min(var_4, 93))), (min(var_10, var_5)))), ((min((max(-1833998431, -1833998438)), ((min(var_0, var_6))))))));
    #pragma endscop
}
