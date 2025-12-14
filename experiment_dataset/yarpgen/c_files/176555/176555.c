/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((((var_1 ? var_0 : var_4))) ? ((3184129800 ? 1 : 33532)) : (((((var_13 ? 22296 : var_1))) ? ((var_1 ? var_8 : var_0)) : ((var_9 ? -20301 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((((arr_3 [i_0] [i_1]) ? ((11 ? var_5 : var_8)) : (((arr_3 [i_0] [i_0]) ? var_3 : 1))))) ? ((var_6 ? var_12 : var_12)) : ((-1844946489658814883 ? var_12 : 4294967295))));
                var_16 = (((((1356265711 ? ((384 ? 448 : -5930)) : ((2239268511 ? -27807 : -12609))))) ? ((((((var_12 ? 4294967295 : -178))) ? (arr_3 [i_0] [i_1]) : ((4194303 ? 32767 : 1))))) : ((((((arr_1 [i_0] [11]) ? (arr_2 [i_0] [i_0] [i_0]) : var_6))) ? (((arr_2 [i_0] [i_0] [i_0]) ? var_3 : 11)) : 468784906))));
            }
        }
    }
    #pragma endscop
}
