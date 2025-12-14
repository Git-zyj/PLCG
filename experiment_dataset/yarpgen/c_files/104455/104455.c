/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 ^= (max((min((max(0, 18446744073709551611)), 0)), (((13513598706811450526 ? (min(2405572677, 0)) : (((min(-19481, 239)))))))));
                    arr_8 [i_0] [i_2] = (max(((min(237, 0))), (min((max((-32767 - 1), 2419330536024293069)), ((min(1, 237)))))));
                }
            }
        }
    }
    var_19 = (max(((max(1, ((192 ? 106 : 10))))), ((((min(156, 1))) ? ((-9149388136676606093 ? 70 : 3048342330315722929)) : ((min(1729382256910270464, 12288)))))));
    var_20 = ((((max(245, (min(3725905729225693056, -18138))))) ? (min((max(1347179672365336072, 253)), (((0 ? 4294967277 : 13))))) : (max(((max(243, 1997422417))), (min(-125, 14814259532045553068))))));
    #pragma endscop
}
