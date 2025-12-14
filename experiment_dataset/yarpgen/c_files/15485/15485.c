/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((10834288318266158416 >= var_6), 255));
    var_15 &= -1386183259;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((-(~-1474823099)));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 0;
        var_17 = ((42155 ? 327824293 : 1386183259));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 ^= (((((max(1, (arr_11 [i_1] [i_1]))))) * (((arr_1 [i_1]) << 9))));
                    var_19 = (arr_1 [i_3]);
                }
            }
        }
    }
    var_20 *= 5927070475209275942;

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = ((~(((arr_15 [i_4] [i_4]) ? (arr_15 [i_4] [i_4]) : 16426258108751554106))));
        arr_17 [22] = 18446744073709551610;
        var_21 &= ((arr_14 [i_4]) <= 1474823099);
    }
    #pragma endscop
}
