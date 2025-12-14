/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = ((var_13 ? (((((65408 >> (var_9 + 1934880070229924526)))) ? ((65408 ? -8001995849666691965 : var_12)) : var_11)) : ((var_10 ? (max(var_9, var_13)) : (var_8 & var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((((arr_3 [i_0]) ? (arr_3 [6]) : var_4))) ? ((var_5 ? 3467904216964499274 : (arr_2 [i_0] [i_0 - 3]))) : ((((arr_3 [i_0]) & var_14)))));
                arr_6 [i_0] = (39710 ^ -3467904216964499274);
                var_19 = (max((((arr_4 [i_0 - 3]) ? ((530668660658475562 ? (arr_0 [i_1]) : var_15)) : var_3)), (((((var_11 ? (arr_5 [i_0] [i_0]) : var_13))) ? ((((var_1 || (arr_5 [i_0] [13]))))) : (var_3 % -530668660658475563)))));
            }
        }
    }
    var_20 &= (((((((var_0 ? var_11 : var_1))) ? var_7 : (var_7 | var_11))) ^ -4013795120607103423));
    #pragma endscop
}
