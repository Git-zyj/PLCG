/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~var_16);
                arr_6 [i_0] [i_1 - 1] = ((((max((max(var_1, (arr_2 [i_0] [9]))), (arr_3 [i_0])))) ? ((max((arr_4 [i_0]), ((-(arr_1 [4])))))) : (arr_4 [1])));
                arr_7 [i_0 - 2] [4] = (max((((((var_9 ? 255 : 667246528)) >= (arr_3 [8])))), ((var_10 ? (arr_3 [2]) : (arr_3 [4])))));
            }
        }
    }
    var_20 = (min(var_8, ((~(max(var_4, var_8))))));
    var_21 = var_6;
    var_22 = (!-3058772906900432572);
    #pragma endscop
}
