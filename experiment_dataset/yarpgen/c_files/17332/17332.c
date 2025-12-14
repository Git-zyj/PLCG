/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max((((arr_1 [i_2 - 2] [i_1 - 2]) ? (!0) : ((17260675412570423790 ? 0 : 3)))), (arr_2 [i_1 + 1])));
                    arr_8 [i_0] [i_0] [i_0] = (min(6637169074054158783, ((((arr_0 [i_0]) != 63)))));
                    var_22 = 29452;
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((((((239 && (arr_4 [i_1 - 1]))))) > (((var_16 & -5560026704638430744) ? 16583017239544335170 : (var_14 > var_13)))));
                }
            }
        }
    }
    #pragma endscop
}
