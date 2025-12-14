/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((428397619376261611 ? var_4 : var_0))) ? var_7 : (var_0 - var_5)))) ? 190 : -122));
    var_13 = ((-122 ? var_5 : ((25933 ? 66 : 428397619376261629))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2 + 2] = (arr_5 [i_0] [i_2 + 2] [i_1]);
                    arr_8 [i_0] [i_1] [i_1] = (max((max((-23363 / 428397619376261629), (arr_2 [7]))), ((((((var_9 ? (arr_0 [i_0]) : (arr_4 [i_1])))) ? (arr_3 [i_0] [i_2 + 1]) : (max(var_7, (arr_1 [i_0]))))))));
                }
            }
        }
        var_14 &= 66;
        var_15 ^= (max(((((428397619376261629 ? var_2 : -4748178954105828477)) - -1001410503)), var_10));
        arr_9 [i_0] = min((arr_3 [i_0] [21]), (((arr_2 [i_0]) & (arr_2 [i_0]))));
    }
    var_16 = var_10;
    #pragma endscop
}
