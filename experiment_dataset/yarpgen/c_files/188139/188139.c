/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 += (!1);
                arr_5 [7] [i_0] = ((((((!40057) ? (((8760321074191261598 ? var_11 : var_8))) : (arr_2 [i_0 + 1])))) ? ((((arr_2 [8]) < (3936704051 / var_13)))) : (32 - var_7)));
                var_19 -= (1234281115 <= 18);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((((((!25478) ? (((((arr_2 [i_3]) && 1)))) : -5604504991760882009))) && ((min(((((arr_11 [1] [1] [1] [i_3] [i_0]) || var_9))), (((arr_9 [i_0 + 2] [i_1] [i_1] [12]) ? -1164659256 : var_2)))))));
                                arr_14 [1] [i_4] [i_0] [i_0] [i_4] [i_4] = ((((-(arr_3 [i_0] [i_0] [i_0]))) / (((2147483647 ? 127 : 65535)))));
                                arr_15 [i_0] [7] [1] [6] [16] [i_4] = 65535;
                                arr_16 [18] [18] [i_0] [7] [i_0] = 119;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((16370 ? var_6 : ((127 ? 0 : 16370))));
    var_22 = (max((((16372376806960890218 ? 250 : var_15))), var_17));
    var_23 = (min(var_23, ((((var_1 != var_10) ? ((((~16320) <= ((var_11 ? 205 : 1))))) : ((-((min(0, 1))))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    var_24 = ((((((arr_13 [i_5] [i_5] [i_5] [7] [i_5]) ^ (!63)))) ? (min(((min((arr_11 [i_5] [5] [i_6] [5] [i_5]), 5))), (((arr_1 [i_5]) ? var_9 : 19)))) : (min((arr_7 [i_5]), (arr_11 [i_5] [12] [i_7] [2] [i_5])))));
                    var_25 = (min(var_25, ((min(((((var_4 / (arr_9 [i_7] [i_6 + 1] [i_6 + 1] [i_5]))))), 2074367266748661398)))));
                }
            }
        }
    }
    #pragma endscop
}
