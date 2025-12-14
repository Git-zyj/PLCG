/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (min(var_10, ((((((-((var_9 ? 0 : 6))))) ? (((((-1 ? 56 : 1))))) : 86650454100575113)))));
        arr_2 [i_0] [i_0] = ((~(((((var_2 ? -6 : 32767))) ? ((3487332927588997491 ? 4294967280 : 1)) : (arr_1 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_12 [i_1] [i_2] [i_3] [i_3] [17] = ((max((arr_9 [i_1]), (arr_7 [i_1]))));
                            var_11 -= ((((arr_8 [i_4] [i_3 - 2] [i_1] [i_1 - 1]) ? var_2 : (arr_8 [i_4] [i_3] [20] [i_1 - 1]))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (--3405);
                var_12 &= (max(0, (arr_6 [i_1 - 1] [i_1 - 1])));
                arr_14 [i_1] [i_1 + 1] [i_1] = ((((!(((141 ? 11344980348310604697 : var_5))))) ? (((~1) ? (((var_9 ? var_8 : var_5))) : -8446236166483477977)) : (arr_4 [i_1])));
            }
        }
    }
    var_13 &= var_6;
    var_14 = ((var_3 ? ((((!(var_2 - var_3))))) : (min((0 + 0), (((32766 ? var_8 : 115)))))));
    #pragma endscop
}
