/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (max((((min(-115, var_11)) % (~var_2))), ((min(33, (arr_0 [i_0]))))));
        var_13 -= (arr_0 [i_0]);
        var_14 -= ((((((((2147481600 << (31363 - 31363)))) ? (!223) : 48773))) == ((max(var_8, 31398)))));
    }
    var_15 = (min(var_10, var_11));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            {
                var_16 = 50;
                arr_10 [i_1] [i_1] = var_1;
                arr_11 [i_1] = (((((((((-54 + 2147483647) << (2713089106369690092 - 2713089106369690092)))) ? var_4 : (1954193030379263112 ^ 1488058430)))) > ((((max(-2891143261276156309, -4528976865945969991))) | 14725018406598181261))));
                var_17 = (((min((min(0, 64987)), 192))) ? var_10 : (((min((arr_4 [i_1]), (arr_8 [i_1] [i_2 + 2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, 53));
                            var_19 += (((~3721725667111370354) << ((((max((arr_8 [i_2 + 1] [i_2 + 2]), 1))) - 2068))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
