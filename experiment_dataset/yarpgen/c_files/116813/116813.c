/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = (min(var_14, 1));
    var_15 = ((((((((1 ? -2563035704714734126 : (-9223372036854775807 - 1)))) ? (-9223372036854775807 - 1) : (((-22160 ? 1 : 7)))))) ? ((((((511 ? -14935 : 1))) ? 1 : ((-1 ? 2203888030 : 23))))) : ((1 ? -31068 : 1870185543247958101))));
    var_16 = ((((((((1 ? 1 : 974))) ? ((2 ? 1545581004 : 2751573625)) : 7))) ? 31084 : ((3430177307 ? -31105 : -16702))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((((-87073278 ? 2147431694 : ((4043422641 ? 200916469355717257 : -1))))) ? 2672 : 216));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, 41096));
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] = 2960047336;
                                var_19 = 1;
                                var_20 &= ((-23865 ? -2 : 2091079265));
                            }
                        }
                    }
                }
                var_21 |= ((2203888030 ? -212865625080628526 : -4));
            }
        }
    }
    #pragma endscop
}
