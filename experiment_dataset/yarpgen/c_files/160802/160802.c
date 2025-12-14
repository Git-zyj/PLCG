/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2147483647;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2];
                    arr_9 [i_0 - 2] [i_1 + 1] [i_2] = (((((3088 ? 255 : (-2147483647 - 1)))) > (min(4329327034368, 6868888181538486590))));
                    var_16 = ((-8740321241103011345 * (arr_1 [i_0 - 1] [i_1 - 1])));
                    var_17 ^= (((arr_4 [i_1] [i_2]) ? (~927573497113509530) : -11514169490446306213));
                }
            }
        }
    }
    var_18 = -var_10;
    var_19 |= (((var_10 % var_2) ? (((min(var_14, var_12)))) : ((~(~-2147483647)))));
    var_20 = (max((((~(-3093 / 2147483647)))), (~var_5)));
    #pragma endscop
}
