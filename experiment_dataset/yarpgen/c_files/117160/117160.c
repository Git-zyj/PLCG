/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_19, -92));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = 19;
                var_22 = (max((((!(arr_3 [i_0] [i_1])))), (arr_0 [1] [i_0 - 2])));
                var_23 = ((-(arr_1 [i_0])));
                arr_6 [i_1] = 27;
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_24 = 1257109485;
        arr_9 [12] = (4294967295 ^ var_19);
        arr_10 [i_2] = ((((arr_5 [i_2]) | (arr_5 [i_2]))));
        var_25 = min(((((min(113, var_1))) + var_9)), 85);
    }
    #pragma endscop
}
