/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((172 ? 9 : var_5));
    var_16 = 4294967287;
    var_17 = ((((max(((var_3 ? 5616213064081533011 : 9)), var_2))) ? ((min((min(var_5, var_8)), 1))) : ((((min(var_1, 1))) ? (-1755512496 <= 2514666651) : var_3))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = 1;
        var_19 = (-2147483647 - 1);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_4 [4] [i_1] = (((max(5282059056482770534, ((var_8 ? 12830531009628018588 : -113158834))))) ? 1 : ((var_11 ? 189 : 16777215)));
        arr_5 [i_1] = ((((max((((1 ? var_8 : var_2))), ((-699 ? 1448427149 : 2612255781))))) ? ((var_1 ? (-16777231 < var_7) : var_13)) : ((5266253161985497633 ? -7996 : -5266253161985497633))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = ((min(var_13, 1448427149)));
        var_21 ^= (max(((min(2322003897824759543, ((7695932098601108350 ? var_1 : -4898261596570117675))))), ((1 ? 16124740175884792066 : 189))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_22 = 8689466884967467989;
                    arr_12 [i_4 - 2] [i_3] [i_2] = 14467059455432340149;
                }
            }
        }
    }
    #pragma endscop
}
