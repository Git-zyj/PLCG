/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min((!32764), (~var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((((~(arr_0 [i_0] [i_1])))) ? (((!(arr_0 [i_1] [i_0])))) : (arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = ((((min(1073741823, (((1073741807 << (((-1073741793 + 1073741822) - 28)))))))) ? (arr_1 [i_0] [i_3]) : ((((arr_2 [i_0]) > (max(1073741807, (arr_1 [i_0] [i_0]))))))));
                            var_21 = (min(var_21, (((((min((min((arr_3 [i_1]), (arr_4 [i_0]))), 1073741815))) ? (((-((1073741794 ? 42923 : 48687))))) : ((~(min(1099511627775, 1073741807)))))))));

                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                var_22 += (((!(arr_3 [i_4 - 1]))));
                                var_23 = (min(var_23, ((min((arr_6 [i_4]), (((min(7201, (arr_0 [i_3] [i_4]))))))))));
                                var_24 += (1238600445 > 1073741818);
                                arr_13 [i_4 - 1] [7] [i_2] [i_0] [i_1] [i_0] [i_0] = ((~(((arr_2 [i_0]) + (arr_2 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
