/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = (((((var_10 + (arr_0 [i_0 + 2])))) != ((-(arr_1 [i_0])))));
        var_15 = (min(var_15, -68));
        var_16 = ((+(((arr_2 [i_0]) ? ((min(-68, var_3))) : (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (6655664938615875989 - 6655664938615875967)))))));
        arr_3 [i_0] [i_0] = 0;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = ((!(((127 << (60673 - 60650))))));
            arr_9 [i_1] = (((arr_4 [i_1] [i_1 - 3]) - (arr_1 [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = var_0;
            arr_13 [i_1 + 1] [i_1] [i_3] = (!0);
            var_17 = (arr_7 [i_1 - 2]);
        }
        arr_14 [i_1] = (((((~(arr_10 [2] [i_1] [2])))) ? var_10 : 49263));

        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_19 [i_4] = var_3;

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_18 = ((-1 ? 32759 : 0));
                var_19 = -var_5;
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = -2475051545774533437;
                        var_21 = (((arr_11 [i_7 - 1] [i_4 - 1] [i_1 - 2]) * (arr_18 [i_7 - 1] [i_4 - 1] [i_1 - 2])));
                        arr_29 [i_1] [i_4] [i_6] [i_4] = (var_1 + 4294967295);
                    }
                }
            }
        }
        var_22 = (((((-93 * (arr_7 [i_1])))) ? var_13 : (((arr_18 [i_1 + 2] [i_1] [i_1]) ? (arr_28 [i_1] [i_1] [6] [6] [6] [i_1]) : var_10))));
    }
    var_23 = (~359745060);
    var_24 = (!(!771265102));
    #pragma endscop
}
