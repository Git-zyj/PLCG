/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((-(((min(-64, (arr_1 [i_0]))) * 191)))))));
                var_20 = (arr_2 [i_1]);
                var_21 = (((6915467486678041802 + (11531276587031509796 + 6915467486678041802))));
            }
        }
    }
    var_22 ^= var_4;
    var_23 = var_10;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_24 = -17340676923265628055;
        arr_8 [2] = ((((6915467486678041820 ? (arr_6 [6] [1]) : (max(11531276587031509786, var_11))))) ? 19 : (~var_4));
        var_25 = (min(((11531276587031509786 ? (arr_7 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))), ((min(var_5, (arr_6 [i_2] [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_12 [14] = ((((max(18446744073709551613, ((((arr_10 [i_3] [i_3]) || var_6)))))) ? -24 : 11531276587031509819));
        var_26 -= var_10;
        var_27 = ((((min((arr_9 [i_3 + 2] [15]), (max((arr_9 [7] [i_3 + 2]), (arr_9 [i_3 - 2] [4])))))) ? ((((1454397424668605774 >= (arr_10 [i_3 + 1] [i_3]))) ? (!var_2) : 1549499247754267361)) : (((var_7 >= 1) ? ((min(0, var_0))) : (arr_10 [i_3 - 1] [3])))));
    }
    #pragma endscop
}
