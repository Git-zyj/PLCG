/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 ^= (max(((-((63 ^ (arr_3 [i_0]))))), (-18066 | 255)));
                arr_5 [i_0] [7] [i_1] = 6313350565452530845;
                arr_6 [i_1] = ((2147483638 ? ((((min(1, 66))) - (~-1))) : (18095 * 206)));
            }
        }
    }
    var_19 = var_8;
    var_20 = ((((8050476590060218611 ? (min(-18096, 8679210430556660063)) : (((2269529802 >> (32754 - 32748)))))) + 18042));
    #pragma endscop
}
