/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 577230167;
    var_16 &= -577230170;
    var_17 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((((arr_3 [i_1] [i_0] [i_0]) + 2147483647)) >> 0))) | (arr_0 [i_0] [i_0])));
                arr_6 [i_0] [8] [i_0] = (max((arr_0 [i_0] [14]), (((((max(33554431, 16383))) ? (!32752) : 26)))));
                var_18 = (max(var_18, ((max((var_8 / 65535), (((arr_4 [i_0] [i_0]) % -18994)))))));
            }
        }
    }
    #pragma endscop
}
