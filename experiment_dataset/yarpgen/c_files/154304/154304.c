/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((!(((((min((arr_0 [i_0 - 1]), var_7))) ? (var_15 > 51) : ((-50 ? var_10 : 1))))))))));
        arr_2 [i_0 - 1] = (((((var_7 << (((arr_1 [i_0]) + 105))))) ? (((var_0 - 139) ? ((3886198550 ? 1874030488 : var_3)) : (((86 ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : (~var_9)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_18 = ((var_0 | (arr_7 [i_2 - 2] [i_2])));
            var_19 *= (((arr_5 [i_1] [i_2 - 2]) ? var_0 : (arr_1 [i_2 - 2])));
        }
        arr_8 [i_1] = ((((((2420936808 || 2150433786) >= (1874030488 * var_4)))) >= ((-(((arr_4 [i_1] [i_1]) + var_7))))));
    }
    var_20 = (max(var_20, ((((((213 ? (~-44) : var_3))) ? var_2 : (((var_0 << (var_8 - 376376494)))))))));
    var_21 = (((((var_7 - (min(var_6, 88))))) ? var_5 : (2144533509 / var_8)));
    var_22 = ((var_2 || var_14) << (((max((~13877648808807289276), (~1))) - 18446744073709551607)));
    #pragma endscop
}
