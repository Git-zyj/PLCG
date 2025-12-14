/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_8 || var_9) ? (min((max(54180, 7601015766206277213)), (((0 ? var_6 : 1))))) : 846199435));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((1 && ((min((3078348351 || 11865), ((-7601015766206277213 ? 9426 : -60))))))))));
                    var_14 = (((((min((-262144 < 1), 1)))) - ((-(arr_4 [i_0] [i_1] [i_0] [5])))));
                    var_15 = (min((min(((min(var_5, -32))), var_4)), (5446 < var_2)));
                }
            }
        }
    }
    var_16 = (((var_2 - (var_2 - var_8))) / var_5);
    var_17 = 1556280449287448835;
    #pragma endscop
}
