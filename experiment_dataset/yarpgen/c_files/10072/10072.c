/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((((((var_14 ? 1593884104544346562 : var_7))) ? 2402256586 : var_5)), (((var_1 && (((2402256574 ? 3686212986871973717 : 1)))))))))));
    var_18 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((((max(var_10, (~-15591)))) ? (((!((((arr_4 [i_0] [i_0] [i_0]) ? 113 : 1)))))) : 1));
                    var_20 = (((~var_0) < ((5845587042286003284 ? 201326592 : -26856))));
                    var_21 = (min(var_21, var_3));
                    var_22 = (((((1 ? 5845587042286003278 : 26997))) ? 15612 : 15597));
                }
            }
        }
    }
    #pragma endscop
}
