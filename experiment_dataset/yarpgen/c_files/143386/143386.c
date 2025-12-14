/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : 0)))) ? ((6949275042853066204 ? 130 : (((arr_6 [18]) ? (arr_5 [i_0] [5] [i_2]) : var_0)))) : (((((1 ? 12760905413884686903 : -5196707025472983770)))))));
                    var_17 = (arr_3 [i_0 - 1]);
                    var_18 = (!18446744073709551615);
                    var_19 &= (max((((arr_1 [i_0 - 3]) ^ var_14)), (arr_6 [i_0 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
