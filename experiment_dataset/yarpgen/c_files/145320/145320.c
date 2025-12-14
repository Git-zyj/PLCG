/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_6 ? (!2) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (((((var_2 ? 60950 : (arr_4 [i_1] [i_0 + 4] [i_1])))) ? (max((var_4 - -142000336), (max(var_15, 619348889)))) : (((619348895 ? (max(var_17, 1000053050)) : (var_10 + var_10))))));
                var_20 = max((arr_3 [0]), (max(((max(13068, -1))), ((1363388472 ^ (arr_4 [i_0 + 2] [i_0] [8]))))));
                var_21 = (min(var_21, (((((max((((983040 ? -7366 : var_8))), (arr_2 [i_0 - 1] [i_0 - 1])))) ? (max(((((arr_0 [8]) ? (arr_4 [i_1] [i_1] [0]) : -7654302902716390423))), (min((arr_2 [i_0] [i_0]), var_13)))) : ((((((arr_3 [16]) ? 192 : var_7)) * 87))))))));
                arr_5 [i_1] = ((((158 ? 3984061072 : 204)) > ((((((arr_2 [i_1] [i_0]) ? var_8 : (arr_4 [i_0] [i_1] [i_1])))) ? ((253 ? 3069905586 : 27)) : (var_5 >= var_4)))));
            }
        }
    }
    var_22 = ((!((((((var_16 ? var_14 : var_2))) ? -var_4 : (var_13 * 21))))));
    #pragma endscop
}
