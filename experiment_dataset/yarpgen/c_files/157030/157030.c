/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= (((max(var_8, (arr_0 [i_0] [i_1])))));
                var_18 -= ((((max((((arr_5 [i_0]) - 83)), ((max(var_3, 1)))))) || ((max((arr_2 [i_0] [5] [i_0 - 1]), ((max(1, 3657784002))))))));
                var_19 += ((+((95 ? (arr_1 [i_0]) : (arr_5 [i_0 + 1])))));
                var_20 = (max(var_20, -7320661072527762836));
            }
        }
    }
    var_21 = (max(var_21, ((max(var_8, -1187251444121744171)))));
    var_22 -= var_9;
    #pragma endscop
}
