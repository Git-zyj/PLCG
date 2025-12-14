/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((((min(311200140, 28))) ? 56695 : ((3007950028455839662 ? var_7 : 311200147))))), (-var_0 / -311200147)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 *= ((~((0 ? ((-110 ? 4914159529502221740 : 1690625911)) : (~7)))));
                    var_19 = 32767;
                    var_20 = (((-311200127 | 0) < ((((((~(arr_2 [i_1])))) || ((min((arr_1 [i_0]), 58))))))));
                }
            }
        }
    }
    #pragma endscop
}
