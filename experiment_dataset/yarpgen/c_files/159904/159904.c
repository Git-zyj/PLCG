/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 -= 1140139377706239367;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max((!2647093754), ((-((max((arr_8 [i_0] [i_0] [i_1] [16]), (arr_2 [6] [11]))))))));
                    arr_9 [1] [i_0] = 52777;
                    arr_10 [i_0] [i_0] [i_2] = (min(((-((var_8 ? 1647873541 : 2647093754)))), (arr_6 [i_0])));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_14 *= (((~var_1) ? ((((min((arr_8 [i_3] [4] [i_3] [i_3]), 2647093753))) ? 59 : -3302993044491650819)) : (((1647873541 ? -1080570287 : ((min((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]), (arr_3 [i_3] [12])))))))));
        var_15 = (max(var_15, var_10));
        var_16 = (arr_8 [i_3 - 2] [i_3] [i_3 - 2] [13]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_19 [i_4] = (+-15403697839122626366);
        var_17 = (max(var_17, 1331));
    }
    #pragma endscop
}
