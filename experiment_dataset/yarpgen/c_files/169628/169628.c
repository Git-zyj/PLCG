/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((arr_1 [i_0 - 1]) ? ((~(arr_0 [i_0] [i_0]))) : (((arr_3 [i_0] [i_0] [i_0 - 1]) ? (arr_1 [i_0]) : 30))));
                arr_4 [i_0] = (+((3430657620462154020 ? (arr_0 [i_1 - 2] [i_1 + 2]) : -42)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3] [0] = (max(((3430657620462154022 ? -30 : 3430657620462154020)), ((max((arr_1 [i_4]), ((max(106, var_6))))))));
                    var_17 = 1;
                    var_18 = (arr_8 [i_2] [i_4] [i_4]);
                    arr_13 [4] [i_2] [i_4] [6] = ((-(((39 * (arr_1 [i_2]))))));
                }
            }
        }
    }
    var_19 = (((var_3 ? ((max(var_8, 255))) : 65535)) >> (-3430657620462154020 + 3430657620462154030));
    #pragma endscop
}
