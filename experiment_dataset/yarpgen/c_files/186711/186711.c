/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((-(~224)))) ? 6813025729729989798 : (min(3115406995143459638, (!3566592208690105148)))));
                arr_7 [i_1] |= ((1 ? 1 : 32));
            }
        }
    }
    #pragma endscop
}
