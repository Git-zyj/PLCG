/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((4294967293 ? 2698679428 : 2698679428)) << (2698679428 - 2698679402));
        var_17 -= (~3426656495);
        arr_3 [i_0] = ((3429640159 ? 3316105684 : 3563508317));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = (1421752947 <= 733563219);
        arr_6 [i_1] [i_1] = (+(((!1596287868) ? ((3316105664 ? 270891920 : 3085668854)) : 733563221)));
    }
    var_19 = ((((((4294967295 ? 3274891284 : 72994160)))) && 2286503626));
    var_20 = ((!(((-(!423528296))))));
    #pragma endscop
}
