/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 65535;
    var_12 = (~var_4);
    var_13 = (((((((max(var_6, 57))) << (((((min(var_7, -21456)) + 21475)) - 19))))) + (min(((var_2 ? var_8 : var_7)), (((var_1 ? var_0 : var_3)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 += ((((((arr_2 [i_0]) != (arr_2 [i_1])))) < ((((arr_7 [i_3] [i_2] [4] [8]) || (arr_7 [i_3] [i_2] [i_1] [i_0]))))));
                        var_15 += (min((arr_5 [i_0] [14] [1]), 146216309));
                    }
                }
            }
        }
        var_16 = 104;
        var_17 = (min(var_17, ((((max(-1, (((arr_1 [16] [i_0]) / 271912134)))) >> (((((((-84 ? var_6 : (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? var_6 : (arr_8 [13] [i_0] [i_0] [i_0]))) - 58188)))))));
    }
    #pragma endscop
}
