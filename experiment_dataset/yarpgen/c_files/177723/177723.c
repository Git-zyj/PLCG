/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_8));
                    var_17 = (((((arr_0 [i_0 + 1]) & 1))) > ((1 ? (-6107970365199491903 - -62) : var_13)));
                }
            }
        }
    }
    var_18 = var_7;
    var_19 += var_10;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_20 = min(1, (((1 && -722090659253605145) && (!var_15))));
                var_21 = 9223372036854775792;
            }
        }
    }
    #pragma endscop
}
