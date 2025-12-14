/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min(1547994126, 127)), (((340667853 + (14 | var_7))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (1073741820 >= 15)));
        var_16 = (((~-49) ? ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [19])))) : (max((arr_0 [i_0]), ((((-1156617027 + 2147483647) >> (-39 + 51))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, 1101012872281338942));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_9 [22] |= (((~-1156617027) ? (arr_0 [2]) : ((~(arr_7 [i_1] [16])))));
                    arr_10 [22] [22] [22] [i_1] |= ((min(-49, (arr_2 [6]))));
                }
            }
        }
    }
    var_18 = (max(var_18, -1156617019));
    #pragma endscop
}
