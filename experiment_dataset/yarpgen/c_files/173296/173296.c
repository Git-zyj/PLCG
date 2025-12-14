/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [4] = var_16;
                    var_18 = ((~(!-23371)));
                    var_19 = var_7;
                    var_20 = (((((var_12 ? 64 : 3447))) && (((((min(var_12, var_2))) ? (max(3450, 8160)) : (!var_0))))));
                    var_21 = ((((var_8 ? var_13 : 6144)) * ((((max(4991, -615322237))) ? (var_10 >= 16384) : (~406122660)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_13 [i_4] = (!8855068976848979273);
                arr_14 [i_4] [i_4] = (~var_5);
                var_22 = -9223372036854775807;
                arr_15 [i_3] [i_4] = min((!8602907025266310951), ((var_3 ? (var_11 && 62086) : (-2332 || 9223372036854775807))));
                arr_16 [i_4] = (min((max(var_5, var_11)), ((min(29374, 62089)))));
            }
        }
    }
    var_23 = (~1579174858);
    #pragma endscop
}
