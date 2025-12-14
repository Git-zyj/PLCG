/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((var_6 + var_19) << var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_21 *= ((-(((((140737488355327 >> (12410756592119649140 - 12410756592119649121))) == (arr_1 [i_0] [i_1]))))));
                var_22 = (63 || 20472);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_23 = (((arr_5 [i_2]) ? ((((min(-687856524, (arr_9 [i_3] [i_2]))) == (arr_3 [i_3])))) : ((18446603336221196289 ? (((arr_8 [0] [i_3] [i_3]) ? (arr_4 [i_3]) : 32767)) : (arr_3 [i_3])))));
                var_24 = (arr_0 [i_2]);
                var_25 = ((((min(((((arr_9 [i_3] [11]) > 10196048847628985855))), (max(147311052, 7009))))) ? (((((140737488355356 || (arr_0 [i_3]))) ? (arr_0 [i_3]) : ((17553 << (140737488355359 - 140737488355355)))))) : ((((arr_5 [i_2]) < 18446603336221196284)))));
                var_26 = ((((((2712804587 << (9837615621974901668 - 9837615621974901647))) | 17553)) << (((arr_0 [i_2]) >> (((arr_6 [i_2] [9]) - 12007984869733931701))))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_27 = (arr_10 [i_4 + 1] [i_4]);
        var_28 = (arr_11 [i_4 - 1] [i_4 + 1]);
    }
    #pragma endscop
}
