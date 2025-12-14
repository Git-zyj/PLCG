/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = 3841485832;
                arr_5 [i_0] = 17592186044415;
                var_15 ^= (min(18446726481523507200, ((((-(-127 - 1)))))));
                arr_6 [i_0] [i_0] [i_0] = ((((~(18446726481523507193 - 9223372036854775807))) & (min(((-1 ? 17592186044415 : 18446726481523507201)), 12233617366035376792))));
            }
        }
    }
    var_16 -= ((((~((-3 ? 18446726481523507200 : 2))))) ? ((var_4 ? ((18446744073709551615 ? 18446744073709551615 : 1099511627775)) : ((max((-9223372036854775807 - 1), 2510008868))))) : ((((max(-1099511627776, 17182385569661304180))) ? (min(1290952535170796493, 17592186044425)) : (17592186044415 || 4817988786486264014))));
    #pragma endscop
}
