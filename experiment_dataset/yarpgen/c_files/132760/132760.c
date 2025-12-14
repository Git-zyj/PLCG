/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((4973058127255954299 << 0) < (min(13473685946453597292, 13835058055282163712)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1]);
                arr_6 [3] [3] [i_0] = (-850106438211685417 != -4973058127255954299);
            }
        }
    }
    var_16 = (((253 != 1) ? (((-var_0 < (min(22, 0))))) : (((((16776960 ? 7685448530724525833 : (-2147483647 - 1)))) ? var_2 : (1885803385 < 2147483647)))));
    #pragma endscop
}
