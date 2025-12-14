/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_3) <= var_8));
    var_19 = (~var_1);
    var_20 = (max(3020386018342847068, var_9));
    var_21 = 0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((!(((-94 ? var_7 : 1)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_22 = (max(78, (max(((max(1, 0))), var_17))));
                        var_23 = ((((((arr_4 [i_0]) < (arr_4 [i_2])))) >> (var_13 - 77)));
                        var_24 = ((-(((arr_1 [i_3]) - var_1))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((((arr_10 [10] [i_2] [i_1] [10] [i_0]) ? (arr_8 [i_0] [i_2]) : (arr_8 [i_2] [i_2]))));
                    }
                }
            }
        }
        arr_12 [i_0] = (((!127) ? ((((arr_7 [4] [i_0] [4]) || var_11))) : ((((arr_6 [18]) && (arr_7 [6] [i_0] [6]))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_25 = ((var_4 ? (!2700581585) : (((arr_4 [i_4]) ? 1276630752520842871 : var_10))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_26 *= ((max(-73, 1137115545)));
                        var_27 = (arr_9 [i_4] [i_5] [i_6] [i_4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
