/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((((var_1 << (18675 - 18675))) ? var_10 : (~34359738367))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 &= ((((((arr_3 [11] [i_1]) ? var_3 : (arr_3 [i_0] [i_0])))) ? -1 : (((((max(var_6, 21308))) < 69)))));
                    arr_8 [i_2] = 1716063010;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_20 = 1716062991;
        arr_11 [i_3] = 1716063011;
        var_21 = ((-(((!(arr_10 [i_3] [i_3]))))));
        var_22 = (min(var_22, -12611682145073786112));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_15 [i_4 + 2] = (max(((-28840 + ((-(arr_10 [0] [20]))))), ((~((75 ? 28154 : 1108661708))))));
        var_23 += ((-((3 ? (((arr_9 [6]) ? (arr_10 [16] [i_4 - 1]) : -15764)) : (arr_9 [0])))));
    }
    #pragma endscop
}
