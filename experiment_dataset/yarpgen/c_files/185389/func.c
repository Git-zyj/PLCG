/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185389
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((441984882) + ((-(2037653553))))))));
                            var_17 ^= ((int) 28260268);
                            var_18 = ((int) min((300838950), (((/* implicit */int) ((((/* implicit */_Bool) -1002308884)) && (((/* implicit */_Bool) 1642812927)))))));
                            var_19 -= ((/* implicit */int) (((!(((/* implicit */_Bool) 424051704)))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) -1768421224)) ? (-2037653553) : (-2037653553))), (-2037653553))))));
                        }
                    } 
                } 
                arr_13 [i_0] [1] [i_0] = (((!(((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((~(2037653553))) : ((-(((((/* implicit */_Bool) -771697026)) ? (2037653553) : (arr_4 [i_1 + 1] [16] [i_1 + 1]))))));
                arr_14 [18] [i_1 + 2] [i_1 + 2] = (-(((((/* implicit */_Bool) ((1608892257) >> (((-751156182) + (751156213)))))) ? (((arr_3 [i_0] [i_0] [i_0]) >> (((arr_0 [i_0]) - (284806159))))) : (((((/* implicit */_Bool) -842837952)) ? (0) : (1257700967))))));
                arr_15 [17] = 723471660;
            }
        } 
    } 
    var_20 = (-(((((/* implicit */_Bool) min((2147483647), (-2027190017)))) ? (((int) var_0)) : (var_9))));
}
