/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((!var_11), (!var_11))) ? ((((-3606795204122094848 != var_6) && var_12))) : (!65535)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (((((123 != ((max((arr_1 [i_0] [i_0]), (arr_0 [i_1 - 1] [i_0 + 2]))))))) <= 8873));
                var_21 = (max(var_21, (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_22 = (-32767 - 1);
    var_23 = var_12;
    #pragma endscop
}
