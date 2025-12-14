/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((max(var_6, var_5)) * ((((min(1073221813, 32426))) ? var_5 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = ((17 >> (((min(65525, 1073221813)) - 65517))));
                    var_20 = 10306;
                    arr_8 [i_1] = max((((arr_0 [i_1] [i_0]) < (max(520466309, (arr_4 [i_0] [i_1]))))), var_17);
                }
            }
        }
    }
    #pragma endscop
}
