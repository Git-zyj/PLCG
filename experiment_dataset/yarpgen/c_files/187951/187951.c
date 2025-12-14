/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 1;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = -1;
                }
            }
        }
        var_15 = var_0;
        var_16 = (min((min((arr_4 [i_0] [i_0] [i_0]), 2)), 1));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_17 = -110;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_18 = max(((((arr_14 [i_5] [i_4] [i_3]) ? 19228 : 109))), 2);
                    var_19 = (!19221);
                    var_20 = ((max(14954116289001932666, (min(9007199254740990, -19222)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 15;i_7 += 1)
            {
                {
                    var_21 = (min(192, 1));
                    var_22 = (min(var_22, (((((!(((var_0 ? 16715366380816702877 : 1196760049999034064))))) ? (((!((max(-12, 16715366380816702877)))))) : (((!(1 || var_2)))))))));
                    var_23 = 1;
                }
            }
        }
    }
    var_24 = 33;
    var_25 = (~var_11);
    #pragma endscop
}
