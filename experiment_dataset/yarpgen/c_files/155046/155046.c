/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((~1) ? -119 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = 0;

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_2] [i_0] [i_2 + 3] [i_0] = var_14;
                    arr_11 [i_1] [i_0] [i_1] [i_2 + 1] |= ((((max((arr_5 [i_2 + 2]), ((1904062786 ? 0 : 25727))))) ? ((((arr_0 [i_0]) ? (arr_2 [i_1]) : var_9))) : (((min(18446744073709551615, 2390904510))))));
                    arr_12 [i_0] [i_1] [i_2 + 1] &= (((!5039332470091839609) ? (min(var_6, ((3657344830 ? 9223372036854775807 : 655726355)))) : (~var_1)));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_3 - 1] [i_0] [i_3 - 1] [i_3 - 1] [i_3] = ((~((-24964 ? 1 : 655726369))));
                        var_17 = (((((-9223372036854775807 - 1) || 39808)) ? ((4294967285 ? (-946546105430949041 ^ var_10) : var_3)) : -112));
                        arr_16 [i_0] = (((((((min((arr_5 [18]), var_6))) ? (((60 << (28951 - 28948)))) : (min(var_9, -84))))) ? ((((var_7 || 18446744073709551596) && (~-1082617338)))) : var_3));
                        arr_17 [i_1] [i_1] [i_0] [i_1] = (min((((~(33549 && 19)))), 7884497584014670859));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [12] [i_4 - 1] &= var_7;
                        var_18 = (arr_9 [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] [i_1] [5] = ((min(25, ((1 ? -3 : 0)))));
                            arr_29 [i_1] [i_0] [i_6 - 2] = (~(94 && var_3));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
