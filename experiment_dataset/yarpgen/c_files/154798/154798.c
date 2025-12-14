/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((~3196504118087611874) ? (((15250239955621939741 ? 77 : 4184587824))) : (1084657212950017109 - var_0))), 1084657212950017101));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] = 110379468;
                    arr_10 [i_0] [8] [8] = ((((((~30) ? (arr_3 [i_1 - 2] [i_0 + 1] [i_2]) : -8368341624976140733))) ? ((((min(-4951601077147337599, -18))) ^ 3196504118087611874)) : ((min((arr_4 [i_0] [i_1 + 1] [i_2 - 1]), (arr_4 [i_1 - 1] [i_1] [i_2 - 1]))))));
                }
            }
        }
    }
    var_19 = (min(var_19, ((max(((((4184587844 ? var_11 : var_13)) % var_7)), var_5)))));
    #pragma endscop
}
