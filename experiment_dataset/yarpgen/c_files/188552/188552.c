/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = 542750723;
                var_17 = ((((max((arr_2 [i_0] [i_0] [10]), var_11))) ? (((281474976448512 ? var_7 : (((3447385808024407777 < (arr_1 [i_0] [i_1]))))))) : (max((arr_1 [i_1] [i_0]), (arr_1 [i_1] [i_0])))));
                arr_4 [i_0] [i_0] [i_0] = (max(((((max(var_5, -30367))) >> (var_12 + 4018182396769648944))), var_5));
                arr_5 [i_0] &= 3752216572;
            }
        }
    }
    var_18 = var_0;
    var_19 = (min(var_8, (!var_8)));
    var_20 = ((3752216572 | (((542750724 ^ var_5) << (var_5 - 196)))));
    var_21 -= (-658905311 - 3752216565);
    #pragma endscop
}
