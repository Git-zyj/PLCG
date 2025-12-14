/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = 6183978627367287669;
                    var_22 = (var_14 / 1692615145402319028);

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] = 1692615145402319034;
                        var_23 = (((-2147483647 - 1) ? var_17 : (9317588286849289663 < 7916975819615153371)));
                        var_24 = (((~29448) / (((-5097822456861318628 == var_12) - 8787503087616))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_25 = (~var_0);
                    var_26 = (max((var_17 / 9052362171406542263), ((((arr_2 [i_6]) ? var_7 : ((var_4 ? var_14 : 6)))))));
                    var_27 = (arr_4 [i_4]);
                    var_28 &= var_19;
                }
            }
        }
    }
    #pragma endscop
}
