/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_2);
    var_21 &= (((((60 ? 178 : var_16))) ? ((max(109, -19259))) : ((max(4294967295, var_10)))));
    var_22 = ((90 ? -3 : 32369));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_23 = (max(var_23, ((max(((((((var_19 >> (938540010 - 938540000)))) ? var_13 : (229 == 15051976860914522674)))), ((13835541671327890026 ? 15575808575105798866 : 106)))))));
        var_24 = (max(var_24, ((((arr_1 [i_0] [i_0]) - ((118 ? var_1 : 0)))))));
        arr_3 [i_0] = ((-(max(-92, ((4294967293 ? 2870935498603752749 : 7850609187745095526))))));
        var_25 += (arr_1 [i_0] [i_0]);
        var_26 |= (arr_2 [i_0] [10]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_2] [i_1] = ((((12114283572984282551 ^ (var_6 | var_8))) | ((-112 ? 15575808575105798874 : 0))));
                    var_27 = (arr_9 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
