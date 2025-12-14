/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 |= 1;
    var_22 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((((((-14795 ? 14788 : 0))) ? 20308 : -14805))), -14800));
                var_23 = (min(var_23, (((((((((1 ? 1 : 1))) ? 1 : ((1 ? -14778 : 1))))) ? ((min(-14782, -14787))) : ((max(-15834, 1))))))));
            }
        }
    }
    var_24 = (((((var_1 ? var_2 : ((-1531601174 ? -14805 : 1))))) ? ((((min(3, 8959))) ? (-32767 - 1) : 14789)) : ((max(((1 ? -392930720 : 1550222797)), ((-32756 ? -1550222811 : 20152197)))))));
    #pragma endscop
}
