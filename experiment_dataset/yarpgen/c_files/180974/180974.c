/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_7 ? var_8 : -168135583))) && ((max(-168135589, 4294967272))))));
    var_18 = (((((-((var_15 ? 2352888428 : 168135582))))) & ((min(168135582, var_12)))));
    var_19 = (~168135577);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (((arr_3 [i_0 + 1] [i_0 + 2]) ? (arr_3 [i_0 + 3] [i_0 + 2]) : (arr_6 [i_2 - 1] [i_2] [i_0 + 2] [i_0 - 1])));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (~-4622205997256274549);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_20 &= (((((~((0 ? (arr_0 [i_1]) : (arr_0 [i_1])))))) ? var_11 : 0));
                        var_21 = (max(-32375, (min(var_3, (18062310524226109540 + 5044366625688941305)))));
                        var_22 = 90;
                    }
                }
            }
        }
    }
    #pragma endscop
}
