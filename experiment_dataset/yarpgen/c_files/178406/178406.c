/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((((1 ? 1481342517 : 1481342517))) || (4120598427 & 1)))), (((-1481342518 + 2147483647) << ((21 ? 1 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((1 > (((1739582679455598063 / 1) ? (max(4294967295, -7)) : (-321399311 || 536805376)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_18 = (max(var_18, (((3758161919 | (((1481342517 - 0) ? (174368868 / 3758161919) : 212220096)))))));
                                var_19 = -8;
                            }
                            arr_16 [i_3] [i_3 + 1] [i_1] [i_1] [i_0] [i_0] &= ((((((1 ? 371930323119483960 : 1)))) ? ((min((0 | 2014881198), (1 && -111)))) : ((((0 ? 11528401728516192279 : 1)) | ((1 ? 4294967293 : 14949676975222263501))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((8669 ? (((-9223372036854775807 - 1) + 4120598427)) : 2771315790))) ? (((1 ^ 4294967283) % 3835980398)) : (1 || 2075111053)));
    #pragma endscop
}
