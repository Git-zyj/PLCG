/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_10 |= ((var_9 ? (~var_0) : var_2));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_11 = (((((var_7 >> (((max(4708032961071902207, 4708032961071902207)) - 4708032961071902206))))) ? ((-var_7 ? 46220 : -59)) : 126));
                    var_12 = ((((1 ? -23851 : 33919))) ? 65535 : (((31616 | var_5) ? ((700645001 ? 23843 : var_0)) : var_5)));
                }
            }
        }
    }
    var_13 &= var_2;
    #pragma endscop
}
