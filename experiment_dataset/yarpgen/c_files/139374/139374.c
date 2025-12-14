/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min((((arr_0 [i_1 + 2]) - (arr_0 [i_1 - 3]))), (arr_0 [i_1 - 1])));
                var_19 = (min(var_19, ((((arr_6 [i_1] [i_1] [i_0]) ? (13356 || 195) : ((-32752 ? 1298491879 : -21879)))))));
                arr_7 [i_0] = (min(((~(min((arr_6 [i_0] [i_1] [i_0]), (arr_3 [i_0]))))), (((-9 | (arr_3 [i_1 + 3]))))));
            }
        }
    }
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
