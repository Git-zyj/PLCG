/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = var_5;
        var_12 = 21237;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_13 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_14 = (((((1 ? 2 : 1))) - ((((max(0, 21221))) ? ((var_8 + (arr_12 [i_1]))) : (var_10 + 18446744073709551615)))));
                                var_15 &= var_10;
                                var_16 += -60;
                            }
                        }
                    }
                    var_17 = 7781643302942534924;
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = (((((-5 >= (max(9223372036854775807, 8757009359756385324))))) % -32766));
    var_20 = (((!var_0) ? (max(8757009359756385325, (((var_5 ? var_6 : 56745))))) : ((max((max(27681, var_10)), (((var_3 ? -1532950865 : 1))))))));
    #pragma endscop
}
