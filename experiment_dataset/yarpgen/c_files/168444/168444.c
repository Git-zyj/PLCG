/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(((max(var_2, var_5))), var_0)), (max((max(var_0, var_8)), var_11))));
    var_13 = (max(((~((max(var_4, var_1))))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((max((max(50450080, 7)), ((~(arr_0 [i_0]))))))));
                var_15 = ((((0 ? (-32767 - 1) : 244)) * var_8));
                var_16 = ((-((((~(arr_2 [9]))) / (arr_2 [i_0])))));
            }
        }
    }
    var_17 = (max(var_10, var_6));
    #pragma endscop
}
