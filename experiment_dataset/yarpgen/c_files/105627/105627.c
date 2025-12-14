/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((5848683858774531049 != ((min((-37 != 574946558345569258), ((var_10 ? var_10 : -71)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= (((arr_3 [i_0] [i_0]) != ((((arr_5 [i_0] [i_1 + 1]) != var_5)))));
                var_16 = (min((max(4611686018410610688, (~-1720077554))), (arr_4 [i_0])));
                var_17 = (max(var_17, (((var_11 << (-1424947292925467820 + 1424947292925467842))))));
            }
        }
    }
    var_18 = (min(1424947292925467819, -59));
    #pragma endscop
}
