/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((1 ? var_5 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((16 ? -16 : -17));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] [10] |= (((((-1286819233471355388 ? -16 : -39))) ? ((1 ? -69 : 38)) : ((-6 ? 9 : 1))));
                                arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_3] [0] [i_1] = ((((((~16) ? (~8190) : ((-49 ? 19 : 1))))) ? 38 : (~-31882)));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [0] [12] = ((((((((1587268554 ? 3 : 576460752303423487))) ? -4406880157654415742 : -37))) ? ((-31878 ? -17 : -22)) : ((3649921880 ? ((43 ? 65535 : 0)) : 0))));
                                var_13 = 65;
                                arr_21 [i_0] [i_0] [i_2] [i_3] [i_5] [5] = (((((13 ? 8190 : -38))) ? 65535 : 13));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                arr_25 [i_0] = 0;
                                var_14 = (min(var_14, (((~(~-9323))))));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                arr_28 [i_0] [i_2] [i_0] = -1555066265104971856;
                                var_15 *= ((645045415 ? ((65535 ? 29 : 2305772640469516288)) : (~2234902555208097433)));
                            }
                            arr_29 [i_3] [i_0] [i_1] [i_0] [i_0] = 1;
                            arr_30 [1] [i_1] [i_2] [i_0] = 1;
                        }
                    }
                }
            }
        }
    }
    var_16 = -8165;
    #pragma endscop
}
