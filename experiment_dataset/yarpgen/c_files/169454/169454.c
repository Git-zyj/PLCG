/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = var_12;
                var_18 -= ((((((((19896 ? 14834764658709409520 : -7318358674906245147)) != 3611979415000142090)))) != (-5340125886145010793 | 2257005774280728617)));
            }
        }
    }
    var_19 = (min(((var_13 ? ((2257005774280728629 ? 14834764658709409511 : 1137562398)) : (var_11 / var_3))), (min((3611979415000142104 & 97), ((max(-1272137650, -203652665080036145)))))));
    var_20 = ((((((var_12 ^ var_3) ? (-8442277848638847799 / 1272137660) : var_6))) ? (((min(var_4, var_14)) + var_9)) : (3958659831 >= 9077913942688636565)));
    #pragma endscop
}
