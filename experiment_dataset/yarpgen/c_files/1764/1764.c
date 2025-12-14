/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(1188575174612648275, (~10101652689429179388))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] = (~7773668645758556773);
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_2] = 1;
                        arr_12 [i_0] = ((1 != (max((max(-4096963565247742990, 38915)), 3636905473))));
                        var_20 = (-705001657763182638 - 3883);
                        var_21 = (min(var_21, (arr_3 [i_2] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = -3636905458;
                        arr_16 [i_0] [i_1] [i_2] [i_0] = (((((52 ? (arr_9 [i_0]) : ((-(arr_5 [i_0] [i_0])))))) ? (((min(var_18, (arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 2]))))) : 3636905446));
                    }
                    var_23 = (arr_6 [i_0] [i_0 + 1] [i_2] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
