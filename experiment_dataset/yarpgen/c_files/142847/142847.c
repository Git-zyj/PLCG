/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((0 || -34), 576460752303292416)))));
    var_15 = ((+((((max((-127 - 1), 68))) ? var_1 : ((min(3570341836, 28)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max(((max((min(102, -1)), (5668225833770082534 != var_8)))), (((arr_0 [0]) ? var_10 : (((arr_0 [8]) ? var_8 : (arr_3 [i_0] [i_1]))))))))));
                arr_4 [i_0] [i_1] = ((((arr_2 [i_1 + 1] [i_1 + 1]) << (arr_2 [i_0] [i_1 - 1]))) ^ ((((((arr_2 [i_0] [i_0]) ? 0 : 21389))) ? ((((arr_0 [i_0]) < (arr_1 [i_0])))) : (arr_2 [i_1 - 1] [11]))));
                arr_5 [i_0] [i_0] = (min((max((arr_3 [i_1 - 1] [i_1 + 1]), 78483294477616367)), (((min((arr_0 [i_0]), var_5)) % (2413509902 <= 576460752303292416)))));
            }
        }
    }
    #pragma endscop
}
