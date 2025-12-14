/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_4 / -9223372036854775807) / 4294967295));
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((1 > (((-36341445 && (((-76170278 ? 5 : 36341453))))))));
                    arr_9 [i_0] = (((((((arr_0 [i_0] [i_2]) / 1)) % (((arr_0 [i_0] [i_0]) ? (arr_5 [i_0] [i_1 - 4] [i_2]) : (arr_5 [i_0] [i_1 - 1] [i_2]))))) ^ (arr_2 [i_0 - 1] [i_1 + 1])));
                    arr_10 [i_1] [i_1] = (((arr_3 [i_2] [i_1]) - 376929473));
                }
            }
        }
    }
    var_13 = -1207138901;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_15 [i_4] = (((((5348585679795271932 << (((((arr_12 [i_4]) + 3796293024054295430)) - 63))))) ? 56408058 : (arr_5 [i_3] [i_4] [i_4])));
                arr_16 [i_3] = (((-769615009 != -125) % 3918037823));
            }
        }
    }
    #pragma endscop
}
