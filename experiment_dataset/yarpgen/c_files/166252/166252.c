/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((max(var_1, (var_15 % -1))) % (((~((var_2 ? var_10 : 0)))))));
    var_19 &= var_10;
    var_20 = ((((((var_0 < (204947526 ^ -111))))) % var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = max(((min((arr_3 [i_0]), ((18740 ? 255 : -70))))), (((arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) ^ 1124140084)));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((((~(arr_10 [i_2 - 1] [i_3 + 2])))) ? ((-(var_9 < var_1))) : -0));
                        var_21 = ((max(((204947522 ? 1124140084 : 255)), ((((arr_6 [i_0]) ? 1 : -1))))));
                    }
                }
            }
        }
        arr_14 [6] |= (((arr_6 [8]) ? (22909 * 1) : -22));
        var_22 = min(((82 ? 5 : (arr_10 [i_0] [i_0]))), (((268435455 ? 0 : 254))));
        var_23 = ((+((451485507 ? (arr_2 [i_0] [i_0] [i_0]) : 204947522))));
        var_24 = (0 * 930123393);
    }
    #pragma endscop
}
