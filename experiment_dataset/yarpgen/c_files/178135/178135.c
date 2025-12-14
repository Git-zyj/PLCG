/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((1673456464 ? 1673456475 : 14))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_14 = (32 & 75);
                        var_15 = (min((((((11 ? 471365567 : 3670016))) ? (min(84, 1973593869)) : (28535 * 14))), 28535));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_12 [i_0 + 2] = ((245 != ((max(1, 28)))));
                        var_16 = (((1 ? 3997083190 : 18446744073709551603)));
                        var_17 = (min(var_17, ((max((((((28 ? 260046848 : 2227317204))) ? ((297884105 ? 247 : 1673456464)) : 6978326285884958116)), (min((((3584760232 ? -753427845 : 0))), (753427864 % 2))))))));
                        var_18 += (((((140737488355327 ? 4148769382 : -33))) ? 17 : (~47)));
                    }
                    var_19 = (max(var_19, ((max((((6 || (0 == -1)))), ((342198428 ? 22 : -134217728)))))));
                }
            }
        }
    }
    #pragma endscop
}
