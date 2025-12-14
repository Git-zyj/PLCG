/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (min(var_19, ((min((max((arr_0 [12]), ((15 << (((-28058 + 28087) - 7)))))), 8039)))));
        arr_2 [8] &= (((min(((max((arr_1 [14]), (arr_1 [16])))), ((var_11 & (-127 - 1))))) % var_7));
        arr_3 [i_0] = ((((arr_1 [i_0]) || ((-2722483276786072695 || (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((min(100, -64)))) < (((var_10 + 2147483647) << ((((100 ? var_11 : var_1)) - 30))))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 = var_13;
                        arr_16 [i_1] [i_2] [i_2] [i_4] [i_4 + 1] = (min((((arr_10 [i_3 - 3] [i_4 - 1] [20] [i_4]) ? var_15 : (arr_10 [i_3 - 1] [i_4 + 1] [i_4] [i_4]))), ((min((arr_11 [i_2] [i_3]), 153)))));
                    }
                }
            }
            arr_17 [i_2] [i_2] = (!1211210231);
        }
        var_21 = (max(var_11, ((((max(120, 14294))) ? var_5 : var_17))));
    }
    var_22 = ((!(((var_12 - var_4) && (((var_15 >> (-8528648051085440203 + 8528648051085440208))))))));
    var_23 = ((12937 ? 2792125855 : 163));
    var_24 &= (((34 && (!var_15))));
    #pragma endscop
}
