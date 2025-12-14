/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_11 - var_9) != var_2));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = arr_3 [i_1] [i_2];
                    var_21 = ((+(min((arr_3 [i_1] [i_0 + 3]), ((~(arr_3 [i_1] [i_1])))))));
                }
            }
        }
        var_22 = (((135 / 17) ^ (arr_7 [i_0] [i_0] [i_0 + 3])));
        var_23 = 1;
        var_24 ^= ((54876 * (((arr_2 [i_0]) ? (((arr_6 [i_0] [i_0 + 3]) >> (54799 - 54789))) : ((((arr_1 [i_0]) <= var_11)))))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 = ((((-(arr_8 [i_0 - 2] [i_3] [i_3]))) * (arr_1 [i_0])));
            var_26 = ((+((((((arr_6 [i_3] [1]) ? (arr_10 [i_0] [i_3] [i_0]) : (arr_5 [i_0] [i_3] [i_3]))) > (((arr_2 [i_0]) % var_13)))))));
        }
    }
    #pragma endscop
}
