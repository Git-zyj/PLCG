/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 11541648818441529692;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 |= ((var_11 ? (~6905095255268021924) : 124));
                    arr_7 [i_0] [0] [i_1] [i_0] = (((((((var_2 << (var_8 - 5727663934873958069)))) ? 29 : 11541648818441529692)) < 11541648818441529696));
                    arr_8 [i_0] [i_0] [i_2 + 1] = ((255 ? 12 : 29));
                    arr_9 [i_0] = (((31 ? ((var_9 ? var_4 : 0)) : (7285321009070666959 < var_8))));
                }
            }
        }
        arr_10 [i_0] = ((((min(54098, ((min(var_5, 91)))))) ? 54098 : (var_4 && -1134241561759804879)));
        arr_11 [i_0] = (max((-76 * -124), 3548987532));
    }
    var_16 = (((((var_11 << (((-123 + 151) - 15))))) ? (min(var_2, -3013643878510874515)) : (((143 * (4702446103141103579 < 0))))));
    var_17 = (208 * 0);
    #pragma endscop
}
