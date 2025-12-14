/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, ((((((~(min(12381314413081905770, -1))))) ? ((-(var_5 % var_5))) : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 ^= (arr_3 [i_1]);
                var_21 = ((var_9 ? ((0 ? 6599982241570937880 : 115)) : (arr_4 [i_0] [i_0])));
                var_22 = (16046976480081732939 > 1);
                var_23 ^= (max(-705194335, 2399767593627818704));
                var_24 = (max(6406148823878278173, 9));
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
