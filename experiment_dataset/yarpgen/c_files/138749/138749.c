/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((-(20289 & var_8))), (-20290 < 4294967295)));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max(0, (~480888572724940105)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [3] [i_1] [i_1] = (min(-8792960388553508320, 4294967283));
                        arr_13 [i_3] [i_1] [i_1] = (((((var_4 & (arr_5 [i_0 - 2] [i_1] [i_1]))))));
                        arr_14 [i_0 - 2] [0] [i_1] [i_1] [i_0 - 2] [i_3] = ((((max((arr_4 [i_0 - 2]), (arr_4 [i_3 + 3])))) / (((arr_4 [i_0 + 1]) & (arr_4 [i_3 + 1])))));
                        var_14 = (((((7509718940924457043 != var_9) << (((((arr_4 [i_0]) ? var_12 : 12592)) - 1599536675741102006)))) == var_9));
                        var_15 = var_1;
                    }
                }
            }
        }
    }
    var_16 = 14401196550254230838;
    var_17 = ((-((var_2 ? ((var_4 >> (var_12 - 1599536675741102020))) : var_9))));
    var_18 = (max(var_18, ((max(var_10, ((((((var_9 ? var_8 : var_10))) || (!837)))))))));
    #pragma endscop
}
