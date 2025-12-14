/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((!(~43)));
    var_17 = ((-(((((398943210018236078 ? 1 : 11268))) ? (((1 ? 1 : 22339))) : var_3))));
    var_18 = ((3359269993636949759 ? ((~(max(-4879, -273722959166663762)))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (((((273722959166663760 ? 1 : 1))) ? ((((max(-10217, 17324))) ^ ((min(1, 1))))) : (((-11255 || (((134217216 ? 201 : 1))))))));
                            var_20 &= (max(((max((~529624994198553965), 103))), (((!11268) ? (((-273722959166663752 ? -273722959166663740 : 1))) : (((-32767 - 1) ? 18446744073709551615 : 3365531292947259302))))));
                            var_21 = (max(var_21, 18));
                        }
                    }
                }
                var_22 = (max(var_22, (((min(-32741, -3625848397724399905))))));
                arr_12 [i_0 + 3] = ((((((!((min(4632192628467443916, 741377514731124394))))))) != 1324405274595882737));
                arr_13 [i_1] [i_0] = (((max(1, 1))));
            }
        }
    }
    #pragma endscop
}
