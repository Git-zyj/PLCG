/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((21 ? 2147483647 : 18489)))) | (((((2147483647 ? var_1 : var_1))) ? (var_3 > var_11) : (max(533258165, 3664061010266558872))))))));
    var_13 = (min(var_0, 117));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((-((7 ? -1 : 4))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = 1;
                            var_16 = (arr_5 [i_0] [i_1] [i_0]);
                            var_17 &= (arr_2 [14]);
                            var_18 = ((-(((arr_10 [i_0] [i_1] [i_2] [i_0 + 1] [i_1] [i_0]) ? (~4) : (~37616)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
