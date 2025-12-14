/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 && ((max((~-119), ((-119 ? var_1 : 216)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 *= ((((((min(var_10, (arr_0 [i_0] [i_0])))) <= ((var_11 - (arr_5 [i_1] [6] [i_1 - 1]))))) ? ((((216 ? -1268164423809977860 : var_6)) - (((((arr_1 [i_0]) && var_10)))))) : ((((((0 >= (arr_4 [i_1] [i_1] [i_1])))) * (arr_1 [i_1 - 2]))))));
                var_16 = (max(((((arr_0 [i_1] [i_1 - 1]) + (((216 < (arr_0 [i_0] [i_1]))))))), (min((min(var_7, -98)), ((((arr_4 [i_0] [i_1] [i_1]) + (arr_1 [i_0]))))))));
                var_17 &= ((-(119 - 36213)));
            }
        }
    }
    var_18 = (var_9 << ((((((((1048575 ? -124 : 1)) + 2147483647)) >> (((~1482725064878394019) + 1482725064878394025)))) - 67108838)));
    var_19 = 0;
    var_20 = var_9;
    #pragma endscop
}
