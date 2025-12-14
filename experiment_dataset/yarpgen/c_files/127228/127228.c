/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 *= (((max((max(10928668870925985136, 3)), (arr_4 [i_0 - 1]))) < 28284));
                arr_5 [i_0] [i_0 + 1] [i_1] = ((+((max((0 >= 949360618), 32766)))));
                var_20 = (min(-7518075202783566479, 55416));

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_21 = (!(-1734939156 | -22610));
                    var_22 |= (((((((max(17417, var_16))) ? ((min((arr_0 [i_0] [i_0]), -4477851008283964096))) : (arr_2 [i_2] [i_2 - 2] [i_2 - 2])))) ? (max(9223372036854775807, (arr_3 [i_0 + 1] [i_0 - 1]))) : 759630978));
                }
            }
        }
    }
    var_23 = ((max(0, var_3)));
    #pragma endscop
}
