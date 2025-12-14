/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 & ((((max(var_7, 9149375879047137680))) ? (min(7157158983686607602, 13220988351713233298)) : (((var_4 ? 5992 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [17] [i_0] = ((~(arr_3 [i_0 + 3] [i_0])));
                arr_6 [i_0] [9] = min((min(4633561582926102051, ((((arr_2 [i_0] [i_0]) >= var_6))))), ((min((var_7 | var_5), (~14049)))));
                arr_7 [21] [i_0] [i_1] = (((arr_4 [i_0 + 3] [i_1 - 2]) ? (((((min(-23, -62))) ? -1390633211 : 31))) : ((-4321223422676141817 ? 4321223422676141828 : 27845))));
            }
        }
    }
    var_12 = var_6;
    var_13 = var_1;
    #pragma endscop
}
