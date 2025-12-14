/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (max(var_16, ((((arr_0 [i_0 + 1]) ? 0 : 224)))));
        arr_2 [i_0 + 1] = 1073739776;
        arr_3 [0] = (217 / -1018418754);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (min(var_17, (-23262 == 3897557803)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = ((~(((arr_5 [i_2]) ? -1 : 33552384))));
                        var_19 = 190;
                        arr_14 [i_0] [i_1] [i_3] [i_3] = (((arr_7 [i_2] [i_2]) | 238));
                        var_20 = (max(var_20, ((-(0 ^ 3251512288690855034)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
