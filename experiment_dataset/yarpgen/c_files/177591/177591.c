/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((-2049705882574467937 ? -2 : 2049705882574467937)));
                    var_18 = (((max(1, -8372883646453058700))) ? ((max(1815067655404178469, -5241494821945747454))) : ((8372883646453058680 ? -8372883646453058681 : 18446744073709551598)));
                }
            }
        }
    }
    var_19 |= -9223372036854775783;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_20 = 508290569854933868;
                    var_21 = 1194126717729192949;
                }
            }
        }
    }
    #pragma endscop
}
