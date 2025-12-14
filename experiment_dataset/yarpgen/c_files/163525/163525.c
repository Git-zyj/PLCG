/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((min(var_11, 892085021)), ((max(var_1, var_14)))))) ? ((-var_16 ? (min(var_2, var_12)) : 4294967295)) : (((((~var_14) > ((var_8 + (-9223372036854775807 - 1))))))));
    var_19 -= (-843937131350172943 < -3120403576783568752);
    var_20 = ((var_8 ? var_9 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((max((arr_2 [i_0]), -1))) ? (((max((arr_2 [i_1]), (arr_0 [i_0]))))) : ((-20135 ? 0 : 7603014846513825951))))) + (max(13017689481983317923, 1))));
                arr_7 [i_0] [i_0] [i_0] = ((((min((arr_0 [i_0]), ((18446744073709551615 ? 7549863333179792690 : 255))))) ? (var_14 ^ 32765) : (((!((((arr_2 [i_1]) + var_7))))))));
            }
        }
    }
    #pragma endscop
}
