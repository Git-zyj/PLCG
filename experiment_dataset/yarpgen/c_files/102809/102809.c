/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-(max((max(var_5, 139637976727552)), (var_6 + var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((arr_3 [i_1 - 2] [i_0]) % (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 3]) % 4231091566535353306))));
                arr_7 [i_1] = (((arr_4 [i_0] [i_0] [i_1 - 3]) && (var_9 || 139637976727571)));
                arr_8 [i_0] [i_0] [i_0] = (((var_3 || var_9) != (4 + var_7)));
                arr_9 [i_1] [i_1] = ((~(((max(-139637976727567, (arr_2 [11]))) | (((min(var_9, (arr_1 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
