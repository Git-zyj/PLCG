/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((((1 ? 113 : 1))), var_8))) ? (((~var_3) ? var_5 : ((var_5 ? var_1 : 1)))) : ((min(1, 96)))));
    var_17 = (min(var_17, (!var_14)));
    var_18 *= (var_14 > var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (((((((min(22, 2147483639))) ? (max(1345703547, var_3)) : (((arr_3 [i_0] [i_0]) ? -991540031 : (arr_0 [i_0])))))) ? ((95 % ((-(arr_2 [i_0]))))) : (arr_4 [i_0])));
                    var_20 = var_0;
                    arr_7 [i_0] [i_0] [i_2] = min(((((min((arr_1 [i_0]), 2949263751))) + (((arr_1 [i_0]) ? 15 : (arr_1 [i_0]))))), ((((15 << (((arr_3 [i_0] [i_1 + 1]) - 38656)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1 - 1] [i_2] [12] [i_3] &= var_10;
                        var_21 = (max(var_21, (((~(1 > 65529))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_22 = (((((-32765 + 4) ? 126 : -991540033))) ? var_14 : var_7);
                        arr_14 [i_4] [i_0] [i_0] [i_0] = (((min((max(864691128455135232, (arr_11 [i_0] [i_0] [i_0]))), (!1880064160))) > ((min((arr_3 [17] [i_4]), 134152192)))));
                        var_23 = (arr_11 [i_0] [i_2 - 4] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_24 = (((arr_4 [i_0]) ? var_4 : 1));
                        var_25 *= ((((!(arr_12 [i_2] [i_5]))) ? ((max(-1, (((arr_13 [i_0] [i_5]) ? -98 : 1023))))) : ((((((arr_12 [i_1] [i_5]) | 1811023042))) ? -var_5 : var_5))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
