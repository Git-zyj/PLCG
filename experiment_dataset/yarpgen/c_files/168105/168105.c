/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((~((var_3 ? (((~(-2147483647 - 1)))) : 423971605))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(1472660306, 71));
                arr_5 [1] [1] [i_0] = 2147483647;
                var_12 = var_7;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 |= ((((min(1, (13 % 15545561198879898965)))) && ((((~8232149579516641887) ? (arr_1 [i_3]) : (13 & 23))))));
                            var_14 = ((((((!(arr_7 [i_0] [i_0 - 2] [i_0 - 1]))))) & ((29 ? -7742906812244768598 : -41))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(((min((13 || -7155112780617714888), -9))), ((~((min(71, 118)))))));
    #pragma endscop
}
