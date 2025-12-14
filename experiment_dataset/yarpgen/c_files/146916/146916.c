/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (max(((var_6 * (var_13 < var_6))), (((-3395022304851278892 ? (-2147483647 - 1) : 21749)))));
    var_18 = (max(var_18, ((min(-256, (var_3 >= var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 13543));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (arr_6 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        }
    }
    var_20 = 32767;
    #pragma endscop
}
