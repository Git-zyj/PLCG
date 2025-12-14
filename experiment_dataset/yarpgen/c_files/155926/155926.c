/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (min(-303587307495068797, -9014925970112430771))));
                var_20 = max((arr_3 [i_0] [i_0 - 2] [i_0]), (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                arr_6 [i_0 - 3] [i_1] = (max(((298975510792004876 ? 4723795124115473252 : (((arr_1 [i_1]) ? (arr_0 [4]) : var_9)))), ((((min(798433551, 2329249115)) - -var_6)))));
                var_21 = (min((min((arr_1 [i_0 - 1]), ((((arr_2 [i_0] [i_1] [i_1]) << (47456 - 47456)))))), (min((max((arr_5 [0] [0]), 2609073144754082599)), (arr_3 [i_0 - 1] [1] [1])))));
                var_22 -= (((min((arr_4 [i_1] [0] [i_0 - 3]), ((var_16 ? var_1 : (arr_4 [2] [i_0] [i_0]))))) + var_6));
            }
        }
    }
    var_23 = var_10;
    var_24 = (!1994315338578819938);
    #pragma endscop
}
