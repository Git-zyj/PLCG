/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));
    var_15 = (max(((2489195639 ? 7397819744522345912 : 2489195656)), (((((min(-23698, 2515))) ? var_12 : ((var_4 ? 0 : -23701)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (+(((arr_4 [i_0]) ? (((min((arr_4 [i_0]), 2507)))) : (max(31339, (arr_0 [i_0]))))));
                var_17 = ((((min(960, -8192))) == (((max(var_4, (arr_0 [i_1])))))));
            }
        }
    }
    var_18 = (max(var_7, ((((max(-23699, (-9223372036854775807 - 1)))) ? -16027 : 3510319515))));
    #pragma endscop
}
