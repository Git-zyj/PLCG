/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (((arr_1 [i_0] [i_1]) ? (((39 << 1) ? 2016375850 : (((arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) ? 23292 : (arr_3 [i_0] [5]))))) : (((((max(var_10, (arr_1 [i_0] [0])))) || (!1))))));
                    var_15 |= ((((max((((var_5 == (arr_1 [i_2] [2])))), ((1 ? (arr_7 [i_0] [i_1] [i_2] [i_0]) : 2757882613499138598))))) || 1));
                    var_16 = ((((min((((arr_0 [i_0]) ? 1 : (arr_7 [i_0 + 1] [2] [i_0] [i_0 + 1]))), (arr_2 [i_0 - 1])))) ? (arr_0 [i_0]) : ((((25654 ? 12182634092371969373 : 25019)) & (1 & var_5)))));
                }
            }
        }
    }
    var_17 = ((17077418671479246586 ? 6438825231233535378 : ((((2757882613499138611 / 127) ? ((min(127, 1))) : -116)))));
    var_18 = (min(var_18, (~var_11)));
    var_19 = ((var_0 ? ((((var_13 / var_3) ? ((var_5 ? var_4 : var_1)) : ((min(-74, var_12)))))) : ((var_3 ? (min(var_12, 3731560133)) : ((1608714950 ? var_10 : var_5))))));
    var_20 = (max(var_0, (207052133963023450 * 1)));
    #pragma endscop
}
