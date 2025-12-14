/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (-(((-3678019322720432909 + 9223372036854775807) >> (var_1 + 3291134941174246012))));
    var_12 = (3678019322720432906 && var_6);
    var_13 = ((var_6 % ((~(255 - -3678019322720432892)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 ^= (arr_3 [i_0] [i_1]);
                var_15 = (max(var_15, ((max(((-((-3678019322720432909 ? -3678019322720432902 : (arr_1 [i_1] [i_0]))))), (((((max((arr_0 [0]), (arr_2 [1] [i_1] [i_1])))) ? (arr_0 [i_1]) : (arr_2 [i_0] [12] [0])))))))));
                var_16 ^= arr_0 [1];
                var_17 = (min(var_17, (((((-3678019322720432910 || ((((arr_3 [i_0] [i_1]) << (((((arr_2 [i_0] [i_0] [i_0]) + 1394044415)) - 57))))))) || (((3678019322720432910 >> (arr_1 [i_0] [i_1])))))))));
            }
        }
    }
    var_18 = (var_0 ? var_6 : var_0);
    #pragma endscop
}
