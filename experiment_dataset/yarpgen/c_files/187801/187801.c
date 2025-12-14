/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (((min(var_16, (max(var_3, var_9)))) == ((-var_11 ? var_5 : (((578899960 ? 255 : var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 += 44;
                    arr_8 [i_2] [i_1] [i_0] = ((!((((-7354528033794884035 + 9223372036854775807) << (578899960 - 578899960))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] [i_4] = (((((2817074868750098921 & (arr_10 [i_3])))) < var_2));
                var_22 += ((((((8 << (var_8 - 267815113578313154)))) | (max(35958428274786304, var_0)))));
            }
        }
    }
    var_23 = (min(53, ((var_8 ? var_12 : var_2))));
    #pragma endscop
}
