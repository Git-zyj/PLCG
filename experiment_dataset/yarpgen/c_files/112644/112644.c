/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((38 ? 1 : -38)));
                var_19 = (min(var_19, (((((min(52408, 32489))) > ((min(13127, 13127))))))));
                arr_4 [i_0] [8] [i_0] = ((((min((~3083372837), (min(13127, 5752504237106979431))))) ? 19990 : 1591954715));
            }
        }
    }
    var_20 = (min(((((max(2147483647, 1687158770))) ? (-1408015969 & -1687158772) : 545937830)), var_9));
    var_21 = ((((-1534482262 ? 306143074 : ((52422 ? 45068 : 1591954715)))) ^ var_7));
    #pragma endscop
}
