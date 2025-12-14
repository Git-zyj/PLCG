/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(-7581505399714861258, (((~-897334248) % (7581505399714861258 * 1)))));
                arr_6 [i_0] [i_1] [i_1] = (46 != 4068986720);
            }
        }
    }
    var_16 = 31;
    #pragma endscop
}
