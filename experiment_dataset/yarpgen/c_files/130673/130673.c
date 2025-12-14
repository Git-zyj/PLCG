/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((486442231804613531 ? 486442231804613519 : -20))) ? ((max((min(67108864, 20)), 10839099295079657150))) : -4834973446651693904));
                var_13 = ((((((min(18, -2699233202110563563))) ? 133955584 : ((39 ? 0 : 28572))))) ? 57 : (min((!1), -339918072)));
                var_14 = ((~((((max(17918812428819687412, -1))) ? 3146945890174762804 : 35))));
                var_15 = (max(var_15, ((min((max(21, -30722)), (((2782743386 ? 1 : -4))))))));
            }
        }
    }
    var_16 = (max(var_16, (~var_3)));
    var_17 = 83267801;
    #pragma endscop
}
