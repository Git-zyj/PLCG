/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [10] = (((~var_18) != ((max(3, ((max(1, 1))))))));
                arr_6 [i_0] [0] [i_1] = (min(((98 != ((-2863055946913093480 ? var_17 : -2863055946913093480)))), (((arr_0 [i_1] [i_0]) != (arr_2 [i_1])))));
                arr_7 [i_0] [4] [i_1] |= (((((min(0, 1)) - (878117426 && 1)))));
            }
        }
    }
    var_20 = (max(var_20, ((min(1, (max(((2060535427 ? -118 : (-127 - 1))), var_5)))))));
    var_21 = (4 == 812212180);
    var_22 = (max(var_22, (((var_10 ? ((min(31, var_13))) : -20)))));
    #pragma endscop
}
