/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 < (((((max(11, var_9)) <= (((3097087286 ? var_2 : var_11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((+((((((arr_4 [i_0] [i_1]) ? var_10 : var_1))) ? (1096276057 / 9) : (arr_2 [i_0 - 1] [i_2 - 2] [i_2])))));
                    var_14 = (min(var_14, ((((var_10 >> (((max(35, 0)) - 17))))))));
                    var_15 *= ((((((~(arr_4 [i_1] [1]))) ? (var_0 * 0) : (((min(var_4, var_10))))))));
                    arr_8 [i_0] [i_0] [i_0] [3] = ((-1804507155 ? ((-(arr_5 [i_0 - 1] [6] [i_2 + 3]))) : (!var_10)));
                    var_16 = (((arr_0 [i_0]) ? (((((var_11 ? var_7 : 4603550151050900673))) ? var_0 : var_3)) : (((~(~1550865565))))));
                }
            }
        }
    }
    #pragma endscop
}
