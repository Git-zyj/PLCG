/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 32760;
    var_19 = (((!0) % var_2));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((((((arr_3 [i_1] [i_2 + 1] [i_2 + 1]) ? var_1 : (arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1])))) ? ((~(arr_3 [1] [i_2 - 1] [i_2 + 1]))) : (min(-8099243816131815429, 8099243816131815432))));
                    var_20 = (min(var_20, (((((((var_5 ? var_5 : 8099243816131815435)))) && (~8099243816131815432))))));
                    var_21 = 3042517201453536587;
                }
            }
        }
        var_22 = (min(((min(var_13, (arr_8 [3])))), ((var_3 ? 8099243816131815432 : (max(var_12, 1749755584267598273))))));
    }
    #pragma endscop
}
