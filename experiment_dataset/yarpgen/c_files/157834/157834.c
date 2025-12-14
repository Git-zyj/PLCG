/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(1, (((!var_12) ? 2619900707 : var_6))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((((var_6 ? (arr_0 [i_0]) : 1675066571)) + var_8))) ? var_12 : (((var_12 ^ 1) ? (arr_0 [i_0]) : 7135059417668974609)))))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_5 [1] [1] [i_1 + 2] = ((((var_11 ? (arr_2 [i_1 - 2] [i_1 + 3]) : 5468613222063188071)) <= (arr_0 [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [1] = var_9;
                var_16 += var_9;
                var_17 = ((((((!(arr_7 [i_1 - 2] [i_1] [i_2] [i_1 - 2]))))) + (((min((arr_1 [i_0]), var_4)) * var_8))));
                arr_9 [i_2] = (((11 ? -18326 : 5438085959609188792)) <= 31);
                var_18 = ((1 ? ((((1 - -3712222086517596046) < var_6))) : ((var_6 + (arr_1 [i_1 + 3])))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_19 = (((296700201 * (!1))) <= ((((!(arr_4 [i_0] [6] [i_3]))))));
                var_20 += (min(((((min(var_12, 1))) | 159)), (!var_5)));

                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    var_21 = (min(var_21, (((var_2 ? var_9 : (((((var_12 ? 7135059417668974584 : 111))) ? -31 : 1233518938680116384)))))));
                    arr_14 [1] [i_4] = 1;
                }
                var_22 = (min(var_22, ((176 <= (1 & 10)))));
                var_23 = (var_13 <= var_0);
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_24 = (max(var_24, -3712222086517596049));
                arr_18 [6] [i_5] = ((((arr_6 [i_0] [i_1 + 3] [i_5 - 1]) ^ (arr_6 [i_0] [i_1 + 3] [i_5 - 1]))));
                var_25 = (min(var_25, (var_12 - var_1)));
            }
            arr_19 [0] [i_1] = (((max(0, var_2)) ? (0 && var_9) : (var_7 && 0)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_1 - 1] [1] [2] = ((!(arr_13 [i_0] [i_0] [i_6] [i_7])));
                        var_26 = ((!(224 && var_3)));
                        var_27 = (-(max(115, 1)));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_28 = ((((((105 & 1) << (((arr_17 [i_0] [10] [i_8] [i_0]) - 1408600363))))) ? (max(var_11, 7135059417668974609)) : (arr_27 [i_0] [i_0] [i_0])));
            var_29 = (((((arr_2 [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_0]))) + (((-(arr_6 [i_0] [i_8] [1]))))));
            var_30 = ((1176459470 ? ((((-28779 ? 1 : 107)))) : ((-(arr_10 [i_0] [i_8] [i_8] [i_0])))));
        }
    }
    #pragma endscop
}
