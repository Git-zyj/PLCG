/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((((((arr_1 [i_1 - 3] [i_1 - 4]) + 9223372036854775807)) << (((((arr_1 [i_1 - 2] [i_1 + 2]) + 103881132315159065)) - 46))))) ? ((((7 != (arr_1 [i_1 - 3] [i_1 - 2]))))) : ((1048064 ? (arr_1 [i_1 + 1] [i_1 - 4]) : 565233276))));
                var_17 -= 65;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = (~351772040);
            var_18 &= (arr_8 [i_2]);
            arr_13 [i_3] [7] [i_2] = ((-(!2906811180)));
        }
        var_19 = -249;
    }
    var_20 = (var_0 == 7484223009021158678);
    var_21 = ((((var_8 || ((min(117440512, -63))))) ? ((((((var_10 + 9223372036854775807) >> var_6))) ? 199 : (158 / -579069894))) : ((((var_4 ? var_1 : var_5))))));
    #pragma endscop
}
