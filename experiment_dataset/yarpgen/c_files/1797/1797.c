/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_1]) ? -56 : 2282188046))) ? ((~(var_3 / -2354))) : ((var_5 ? var_4 : (max(var_3, var_2))))));
                var_19 &= -1970834993;
                arr_5 [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_20 = ((var_3 ^ (~12)));
    var_21 = (min(var_21, ((min(12185, -2062160095)))));
    var_22 = (min(var_22, ((max(-1541694440, (((((3 ? 1 : 1))) ? 1 : -var_14)))))));

    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_23 = (max((((-(arr_0 [i_2 - 3] [i_2 - 2])))), (min((arr_2 [i_2]), (arr_0 [i_2] [i_2])))));
        var_24 = 1117592844789035771;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_25 = (min(var_25, ((((((max(var_13, -7788110633480705228))) ? -5705604719406493447 : 30)) != ((((var_14 * var_17) ? -135 : var_3)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_17 [i_3] [i_4] [i_5] [i_6 - 2] = ((min(69, (arr_12 [i_6 - 2]))));
                        var_26 = (((arr_14 [i_5] [i_5 + 1] [i_5 - 1] [i_6 - 1]) ? ((-(arr_9 [i_5 - 1]))) : -28));
                        var_27 &= (((((-((4294967295 ? var_3 : 1))))) ? ((max(var_13, -3915914360))) : 12111437877873090567));
                        var_28 = (max(var_9, ((max(205860955, var_3)))));
                        var_29 = var_10;
                    }
                }
            }
        }
        var_30 = 2131773677;
    }
    #pragma endscop
}
