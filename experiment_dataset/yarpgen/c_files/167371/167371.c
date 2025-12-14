/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 2045389008;
    var_20 = (min(var_4, var_0));
    var_21 &= (((((6532806642437960768 >> (13592142794326047166 - 13592142794326047142)))) ? ((((var_18 >> (var_16 + 29624))) >> ((((1061859338 >> (var_8 - 12233548572292602910))) - 66366163)))) : (((~-63) ? ((var_11 >> (1187581953664206755 - 1187581953664206720))) : ((min(-17336, 1061859338)))))));
    var_22 = (((min(-var_16, ((12816194408637509051 >> (26086 - 26052))))) >> (((((~var_12) << 2190519866)) - 1884568846))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0 + 3] = (max((arr_1 [i_2] [i_0]), (arr_4 [i_0 + 3])));
                    arr_9 [i_0 - 1] [i_2] [i_2] = ((!((((arr_1 [i_0 - 1] [i_0]) >> 1)))));
                    arr_10 [i_0] [i_0 + 3] [i_0 + 3] = (arr_5 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
