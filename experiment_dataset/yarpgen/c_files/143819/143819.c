/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(-43, (max(var_10, 3545049880)))), (((var_6 ? ((max(var_3, var_3))) : var_0)))));
    var_14 = ((((max(var_1, var_8))) ? var_8 : (((3809884471 ? 255 : 1)))));
    var_15 = ((((min(var_7, ((var_8 ? var_4 : var_5))))) ? var_0 : ((min(var_3, var_5)))));
    var_16 = (max(var_16, ((max(((var_12 ? var_10 : ((var_0 ? var_4 : var_10)))), (max(((67107840 ? 170 : 1)), var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_12 [i_2] [i_2] = (max(((min(0, var_1))), ((2 ? -299275061094384134 : (((var_1 ? 1 : 1)))))));
                        var_17 -= (max(((var_9 ? ((min(var_2, var_7))) : (max(131071, 252)))), (((2453472788448595508 ? -2060617636 : 244)))));
                    }
                    var_18 = (min(var_7, (((((var_3 ? var_10 : var_3))) ? (max(var_2, var_5)) : ((max(var_0, var_5)))))));
                }
            }
        }
    }
    #pragma endscop
}
