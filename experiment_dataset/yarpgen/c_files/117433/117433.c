/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (!-8607508167707577684)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = 1;
                arr_7 [i_1] [i_1] [i_0] = 28516;
                arr_8 [i_1] [i_0] [i_0] = (min((((max(573406564, 3721560720)))), -120279394));
            }
        }
    }
    var_13 = (((((-1235 ? ((0 ? 9344784732620312639 : -1240)) : 0))) ? (!65532) : 17206));
    var_14 = ((~((max(4294967295, (max(-1240, 20316)))))));
    #pragma endscop
}
