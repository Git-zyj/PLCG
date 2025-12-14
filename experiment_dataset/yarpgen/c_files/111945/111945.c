/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((--2147483635) ? (((!(var_1 ^ 0)))) : -1433091139);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((-(arr_0 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((((((((-1433091150 <= (arr_3 [i_0] [i_0] [i_1]))))) - (((arr_4 [i_0] [i_1]) / var_2)))) <= ((((arr_1 [i_0] [i_1]) % (arr_5 [i_0] [0]))))));
                arr_8 [i_0] = (((arr_1 [i_1] [i_0]) ? (((min(-1174440975, (arr_1 [i_0] [i_0]))))) : (min(1433091150, (max(250, var_2))))));
                var_13 = (max((min((((arr_3 [i_0] [i_0] [12]) - -1433091149)), var_4)), ((min((~var_10), ((max(1433091138, 1433091132))))))));
            }
        }
    }
    #pragma endscop
}
