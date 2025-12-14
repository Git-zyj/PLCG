/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -137739743));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min((min((min(51471, 32)), 8254782992157375789)), ((29028 / (1350093432 / 52012)))));
                arr_5 [i_0] [12] [6] &= ((min((1385528098607840623 || 8133852436893320946), 28)));
            }
        }
    }
    var_18 = min((min((((18446744073709551569 ? 56653 : 4080))), ((21844 ? -21757 : 35)))), (((((62093 ? -1068541626 : 2674322323413792866))) ? (((min(-28432, 37)))) : (min(46, 15772421750295758749)))));
    var_19 = ((!((min(((8894959287611563018 ? 2017612633061982208 : 122)), var_14)))));
    #pragma endscop
}
