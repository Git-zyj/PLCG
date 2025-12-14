/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 3794637154095315747;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((3794637154095315767 ? 0 : 71)));
        var_18 = ((1 ? 16918 : (((~0) ? 1 : 1))));
        arr_3 [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((928810507 ? (~1) : 1))))));
                    var_20 = 2591245996;
                    var_21 = 0;
                    var_22 = (max(((min((~0), ((max(172, 1)))))), (max(((16383 ? 0 : 3093025818)), 1))));
                    var_23 -= 3412526451270693491;
                }
            }
        }
        arr_9 [i_0] = ((((min(20631, ((1 ? 7 : 127))))) ? 1 : (((((15718477806807823437 ? 511 : 7))) ? ((-12031 ? 9223372036854775788 : 14336)) : (~-12031)))));
    }
    #pragma endscop
}
