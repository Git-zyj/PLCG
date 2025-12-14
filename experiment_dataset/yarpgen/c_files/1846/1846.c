/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = (-2147483647 - 1);
                    var_17 = ((7611373365404069496 % (arr_0 [2] [i_1])));
                    var_18 = 1064065784;
                }
            }
        }
    }
    var_19 = ((((var_5 ? ((min(0, -27133))) : (~var_12))) >= (min(32761, (-24544 + -809084087)))));
    var_20 = (max(var_20, ((((((min(1, -1)) < var_15)) ? ((((var_9 >= -12267) << ((((27105 ? var_5 : var_16)) + 11332))))) : (((((6002600157195471873 ? 29550 : -27133))) + ((0 ? (-32767 - 1) : 15576937123370521837)))))))));
    #pragma endscop
}
