/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (((((var_6 ? 71 : 65504)) << 5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (max((min((((var_7 ? 20114 : var_16))), var_9)), ((max((max(4294967290, 6)), 1756152087)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_2] [i_0] [3] [i_3] = ((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                                var_20 = ((((max(-4294967290, ((-5 ? -30719 : 1176992722))))) / ((((max(547127443, -4749730931116731629))) ? var_9 : var_0))));
                                arr_11 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((-((~(min(var_0, (arr_4 [i_1] [2] [i_0] [i_1])))))));
                                var_21 = (arr_7 [7] [i_1] [i_1] [i_4] [0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 -= var_0;
    #pragma endscop
}
