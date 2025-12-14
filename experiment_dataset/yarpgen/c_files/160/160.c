/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : 16914);
        var_22 = var_17;
    }
    var_23 = (min(var_23, var_16));
    var_24 = (max(var_24, (((((var_5 || ((max(var_12, var_10))))) || ((min((156 && var_15), ((var_6 ? var_13 : 12))))))))));

    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_25 = ((~(((arr_3 [i_1 + 3]) ? (arr_3 [i_1 + 2]) : (arr_3 [i_1 + 1])))));
        arr_4 [1] = 27761;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 -= ((((max((arr_6 [i_2]), (((var_8 >> (243 - 232))))))) ? (min((((27760 ? var_3 : (arr_5 [i_2])))), (((arr_6 [18]) >> (850387362 - 850387338))))) : 1));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_27 = (arr_7 [i_4 - 3] [i_4 - 3]);
                        var_28 = (arr_8 [i_2] [11]);
                    }
                }
            }
        }
        var_29 = ((((arr_10 [i_2] [i_2] [i_2]) ? (arr_12 [i_2]) : 850387377)));
        var_30 += var_12;
    }
    #pragma endscop
}
