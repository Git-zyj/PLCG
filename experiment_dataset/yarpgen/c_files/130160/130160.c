/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((max((min(5547119041454367600, 32767)), var_12))) ? 47236 : ((min((max(1, 62698)), ((min(13171, 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((max(-3117808146728592503, -7)) ^ (((1 ? 4294967289 : 0))))))));
                    arr_9 [i_0] [i_0] = (((1 ? 5547119041454367623 : 23343)));
                    var_18 &= (max(4294967295, (((((15 ? 3 : 99))) ? ((min(0, 29060))) : 16384))));
                    arr_10 [i_0] [i_0] = ((((((max(65534, 42971))) ? (62698 && 0) : (33226 ^ -120)))) ? ((max(1, (max(58082, 22565))))) : ((min(1272907427, 22537))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 ^= (min(((((max(-96, 127))) ? 0 : (22220 - 1))), ((~((min(7453, 7)))))));
                        arr_14 [i_1] [i_0] = ((-((min((min(0, 65531)), ((max(1, 32753))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
