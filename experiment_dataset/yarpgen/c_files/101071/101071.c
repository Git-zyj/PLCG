/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (!0);
        var_13 = (((max(var_8, 21)) ^ 673427798));
        arr_2 [i_0] = (min(870155174616945395, 0));
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 ^= var_1;
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_16 = (max(var_9, ((((arr_6 [i_1]) ? (15 <= 18446744073709551590) : 65535)))));
                arr_8 [i_1] = (!-7488915234668670662);
                var_17 = max(3648447589264303258, 125);
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
