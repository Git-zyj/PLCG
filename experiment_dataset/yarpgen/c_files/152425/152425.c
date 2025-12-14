/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0 - 1] [9])));
        arr_3 [i_0] [i_0] = 49;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((arr_9 [i_0 + 1] [i_0 - 2] [i_1]) - (max(((var_1 ? var_7 : (arr_12 [i_3] [i_2] [i_1 - 2] [i_0 + 1]))), (arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] [i_2]))))))));
                        var_15 = (~((((((arr_8 [i_2] [i_0 - 2] [i_2]) ? var_6 : var_1))) ? (((!(arr_2 [i_1 - 1])))) : 596546429)));
                        var_16 = (min(var_16, ((min((max(1629093548478003803, 251)), ((max(var_11, ((var_8 ? var_4 : (arr_11 [i_0] [i_1] [2] [i_2] [i_2] [i_3])))))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] |= ((~(arr_11 [i_3] [i_3] [i_2] [1] [1] [1])));
                    }
                }
            }
        }
        var_17 = (((((((~(arr_4 [i_0]))) * ((((!(arr_9 [i_0] [i_0 - 2] [i_0])))))))) ? ((((max(-40, 65535))))) : 4294967291));
    }
    var_18 -= var_9;
    var_19 += var_6;
    var_20 = (min(var_20, (((min(var_4, 596546430))))));
    var_21 -= (~18446744073709551613);
    #pragma endscop
}
