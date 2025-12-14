/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 ? (-4387 % var_9) : (max((max(var_9, var_11)), var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [9] [9] = var_7;
                arr_7 [i_0] = (((arr_4 [i_0]) >> (((arr_1 [i_0] [i_1]) + 925))));
                var_17 = (arr_1 [i_1] [i_0]);
                var_18 = (max((min(((min(var_8, (arr_0 [i_1] [i_1])))), (7329412964660133755 / var_10))), (((-(arr_5 [i_0]))))));
                arr_8 [i_0] [i_0] [i_0] |= (max(var_5, (arr_3 [i_1])));
            }
        }
    }
    var_19 = (var_7 ^ -19576);
    var_20 = (min(((max(var_0, var_2))), (min(4386, -7329412964660133755))));
    #pragma endscop
}
