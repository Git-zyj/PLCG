/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (max(var_12, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((((min(-2, -3684383351393686244))) ? 6 : 3595288187)) / 1));
                arr_6 [i_0] [i_1] = ((~(arr_2 [i_1])));
            }
        }
    }
    var_14 = (((((15 ? 1063338848 : (~310619411)))) < -5372146086435716470));
    #pragma endscop
}
