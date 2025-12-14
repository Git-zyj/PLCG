/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((var_10 || var_14), (((((min(var_5, var_7))) || (~var_12))))));
    var_19 = ((!(((((20604 ? 4945464498287903039 : -5563755101172546187)) - 4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((max(8319660275417611375, 4945464498287903039)) % (arr_1 [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 += ((-1028692628517440279 ? -8546057068482650555 : (((+((((arr_6 [i_0] [i_0]) == (arr_6 [i_0] [i_3])))))))));
                            var_22 = (((((((arr_9 [i_3] [i_0] [i_0 - 1]) ? (arr_5 [i_0] [i_0] [i_0] [i_3]) : 144201455388664861)) - ((min(var_15, (arr_0 [i_0])))))) * (((((!(arr_2 [i_0 - 1] [i_1] [i_2 - 1]))) ? ((((arr_5 [i_0 - 1] [i_0] [i_2 + 2] [i_3]) ? var_1 : -2347))) : var_15)))));
                            arr_11 [i_0] [i_2] [i_1] [i_0] = (min((((-2367 / (((arr_2 [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_7 [i_0] [i_0] [i_2 - 2] [i_3]) : -28809))))), ((33554431 ? 3957251595 : -7607))));
                            arr_12 [i_0] [i_1] [17] = ((2342 >> (arr_4 [i_0] [i_1] [i_0])));
                        }
                    }
                }
                var_23 = (min((((((31737 ? var_1 : 44382))) ? ((var_13 ? -4945464498287903039 : (arr_9 [i_0] [i_0] [i_0]))) : (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 799228538 : -1462040783457068409)))), (((((0 ? (arr_9 [i_0 - 1] [i_0] [i_0]) : 3995627073)) & var_16)))));

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_24 = (((-var_0 > ((6321733637395126129 ? (arr_6 [i_4] [i_0]) : -8319660275417611375)))));
                    var_25 = -33554424;
                }
            }
        }
    }
    #pragma endscop
}
