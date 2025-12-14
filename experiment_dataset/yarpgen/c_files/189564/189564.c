/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= var_10;
                arr_6 [i_0] [i_0] [i_1 + 1] = 5071;
                arr_7 [17] = max(60465, 4900742928522230202);
                var_13 = (((((arr_4 [i_1 - 1] [i_1] [4]) + (arr_4 [i_1 - 1] [13] [15]))) + (max(var_8, (arr_3 [i_0] [i_0])))));
            }
        }
    }
    var_14 = ((var_7 ? (((var_7 || var_9) ? var_7 : (!var_11))) : (5071 < 1720011527)));
    var_15 = 3886438576;
    #pragma endscop
}
