/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((-(arr_3 [i_1] [i_1] [i_1])));
                    var_13 *= 14963973933781668839;
                }
            }
        }
    }
    var_14 = ((127 ? (max(((max(var_8, var_1))), (((-32767 - 1) ? -1045428118 : 3482770139927882776)))) : (((var_3 ? var_3 : 243)))));
    #pragma endscop
}
