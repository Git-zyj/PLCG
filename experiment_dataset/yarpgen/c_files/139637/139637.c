/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_10 = (max(var_10, (((arr_0 [i_0 + 2]) ? ((((-127 - 1) + 207349860))) : ((max(1370618097105724651, var_3)))))));
        var_11 = (max(var_11, ((max((-var_9 - -7058374677648366890), (((((max((arr_0 [i_0]), var_6))) & 0))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (arr_0 [i_1]);
                    var_13 = (max(var_13, (((!(((+(((arr_1 [i_2]) ? 3 : (arr_0 [i_2])))))))))));
                }
            }
        }
    }
    var_14 = ((var_0 ? ((((31470 != var_1) ? ((max(var_2, 63))) : (57626 > var_5)))) : -1073741823));
    #pragma endscop
}
