/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_1, var_12)) ? var_2 : ((max(var_3, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = 31457280;
                var_15 = ((var_4 && (arr_1 [i_0])));
                arr_6 [i_0] [i_0] [i_0] = (min((((arr_5 [i_0] [i_0] [i_0]) ? (-106 ^ var_3) : (arr_1 [i_0]))), (arr_2 [2] [2])));
                var_16 = (((((((1 ? 31457280 : -1593341014)) > (arr_5 [i_0] [i_0] [i_1])))) == (((4263510015 == (31457280 % 5924968479186058975))))));
            }
        }
    }
    #pragma endscop
}
