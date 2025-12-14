/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_7, var_5)) ? (min(var_7, var_4)) : var_8))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (min((~7656380796625328189), (((7656380796625328187 ? var_11 : (arr_4 [i_2 - 4] [i_2 + 1]))))));
                        var_15 = (min(((var_6 ? var_0 : (min((arr_4 [i_0] [i_2 - 2]), var_1)))), (max((min(10790363277084223445, 0)), (((134 ? 4294967295 : var_3)))))));
                        var_16 = (max(((124 ? var_2 : var_4)), ((~(min(var_5, var_11))))));
                    }
                }
            }
        }
        var_17 += (min(1888, ((max(var_10, (arr_0 [i_0]))))));
        arr_8 [i_0] = min(18305217958323178514, 10790363277084223427);
        var_18 = (min(var_18, ((min((((((min(229, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 1 : ((min(1, 32739)))))), ((((((arr_1 [i_0] [i_0]) ? var_12 : 1022))) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-32763 ? (arr_6 [i_0] [i_0]) : 5647990465251577505)))))))));
    }
    var_19 = (max(var_6, (max(var_5, ((min(-9219528087425746499, 1420243520)))))));
    #pragma endscop
}
