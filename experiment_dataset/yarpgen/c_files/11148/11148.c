/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max(((min((5938097818847054167 && 971157989), (arr_0 [16])))), (min((arr_4 [i_0]), (~5938097818847054160)))));
                var_21 = (max(var_21, 1));
            }
        }
    }
    var_22 ^= ((((max(var_17, 12508646254862497469)))) >> (((((~17307388517030498252) << (23561 - 23546))) - 16639620144797679590)));
    var_23 = (~var_7);
    var_24 = var_10;
    #pragma endscop
}
