/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 += ((((!(((-21585 ? (arr_0 [i_0] [i_0]) : -1625893540))))) ? (arr_0 [i_0 - 1] [1]) : (var_4 * 255)));
        var_11 += (arr_0 [i_0 - 1] [i_0 - 1]);
        var_12 = ((!(((16 + var_0) != (~var_6)))));
        var_13 = ((112 > ((var_5 ? var_0 : (arr_1 [i_0 - 1])))));
        var_14 = ((+(((arr_0 [i_0 - 1] [i_0 - 1]) ^ (arr_0 [i_0 - 1] [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = ((((~(arr_7 [i_1] [i_1]))) == (!-21600)));
                    var_16 = ((-var_7 - ((((arr_0 [i_2] [i_2]) ? -801714222 : 17)))));
                    var_17 = (~1);
                    var_18 = 27;
                    var_19 = (!(!var_7));
                }
            }
        }
    }
    #pragma endscop
}
