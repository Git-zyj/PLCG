/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 < -4102262242191122161);
    var_13 = 1;
    var_14 = ((1485070418 ? ((((max(var_8, var_3)) <= var_1))) : ((((min(194, 3508097254))) ? (var_11 < var_2) : (35792 > var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((203 ? 214 : 0)), (29739 % 1924110765)));
                var_15 ^= arr_0 [6] [6];
            }
        }
    }
    #pragma endscop
}
