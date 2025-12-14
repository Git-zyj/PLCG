/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((var_12 ? 2092609021 : -597707258)) <= var_5)), var_2));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = ((~((-6802873319155844395 ? (arr_6 [i_3] [i_1]) : (((-597707258 ? 155 : (arr_5 [i_0] [i_0]))))))));
                            var_16 = ((4294967295 | (((var_5 ^ (arr_1 [i_2]))))));
                            var_17 = 34;
                        }
                    }
                }
                var_18 = (max((((arr_3 [i_0]) ? (((1 ? (arr_3 [i_0]) : -3745935607624326582))) : var_13)), (((+(((arr_5 [i_0] [1]) ? 123 : 18499)))))));
                arr_11 [i_0] [i_1] = ((-597707258 / ((-(((arr_5 [i_0] [i_0]) + 4160181897))))));
                var_19 = ((!(((((min(50212, (arr_0 [i_0] [i_0])))) ? ((var_11 ? 18353 : var_0)) : (~17084538227454137506))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = -1581075503;
                            var_21 = (((min(var_13, (min(var_11, (arr_5 [i_5] [15])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
