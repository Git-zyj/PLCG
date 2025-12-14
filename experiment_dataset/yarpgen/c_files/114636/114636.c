/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-2147483647 - 1);
    var_15 = (min(65535, ((max((12 && 255), (12 == 15))))));
    var_16 += (8 && 16288724550071501861);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min(53731, 1)))));
                var_18 ^= max((max((max(-21, 20)), (min(-11, -487344919)))), (((max(79, 29)) | (max(29, (-2147483647 - 1))))));
                var_19 |= (((((2147483635 ? -124 : 19))) ? (((125 / 24) * (0 / -4))) : (((116 || ((max(118, 4051747070252652903))))))));
                arr_5 [i_0] = (min(0, 1580381791));
                var_20 = (max(var_20, (((((113 ^ ((-9 ? -7 : 20)))) * (max((-4 | 1), (251 && 0))))))));
            }
        }
    }
    #pragma endscop
}
