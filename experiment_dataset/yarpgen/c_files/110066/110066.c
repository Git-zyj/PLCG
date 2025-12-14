/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (((arr_4 [i_0 - 2] [i_1 + 2] [i_2]) ? ((1 + (arr_6 [i_0] [i_0] [i_2] [i_2]))) : (arr_1 [i_0 - 1])));
                    var_10 = (-3204643280551985661 - 756734501);
                }
            }
        }
        var_11 *= ((30156 || (arr_0 [i_0] [i_0 - 1])));
    }
    var_12 *= ((((0 ? var_1 : (~756734481))) >= (((3538232794 ^ var_6) / 30156))));
    #pragma endscop
}
