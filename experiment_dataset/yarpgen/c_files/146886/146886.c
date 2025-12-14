/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((-1 ? -6775642100990788849 : 73)), ((((2331514280894146019 % 7) ? ((((-9223372036854775807 - 1) <= 73))) : ((max(63099, -37))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_1] = ((((max(17396, (-9223372036854775807 - 1))) ? 1 : -48)));
                    var_11 *= ((-((-93 / ((-98 ? 51948 : 6775642100990788838))))));
                    var_12 = (max(var_12, ((((((~52037) ? 60 : ((18 >> (-6775642100990788845 + 6775642100990788850)))))) ? (((((min(55812, 64)))) / ((-6775642100990788863 - (-9223372036854775807 - 1))))) : (!63)))));
                    var_13 &= 1;
                }
            }
        }
    }
    var_14 = (((((((82 ? -73 : -6132632562627866905)) | (~-8)))) ? ((~(((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (127 - 117))))) : (min((((6 ? -43 : -56))), (max(9223372036854775805, -36))))));
    #pragma endscop
}
