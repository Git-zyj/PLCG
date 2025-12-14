/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 += 35184372072448;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min(-2374959103000108983, (0 || 211))))));
                var_16 = (max(var_16, (((0 << (((((-9223372036854775807 - 1) - 15567845403137479866)) - 12102270707426847541)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_17 ^= (max((min(((62326 ? var_3 : -4579023690189171134)), (arr_2 [i_2]))), (((max(1, 878146245664843250))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = 1;
                                arr_16 [i_6] [i_6] [i_6] [i_4] [i_6] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
