/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min(var_13, ((((max(33193, 17018999352563499608))) ? var_0 : (max(var_2, 60))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 ^= ((17018999352563499608 ? ((((((arr_1 [i_0 + 1]) ? var_8 : var_1))) ? (((-61 ? 122 : 1708399292))) : var_9)) : 32156));
                arr_4 [i_0] [i_1] [i_0] = ((((((arr_0 [i_0 - 3]) ^ var_0))) ? (((!(arr_2 [i_0 - 2] [i_0 - 2])))) : var_1));
            }
        }
    }
    var_16 += (((((((60 ? var_13 : -33))))) * var_1));

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_17 = 4294967286;
        var_18 = ((((var_8 != ((min(var_5, var_2))))) ? 2047 : 2471));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 = ((!(((-((min(0, 1))))))));
            var_20 = ((((95 & var_9) ? (arr_7 [i_2] [i_3]) : var_12)));
            var_21 *= (((44127 ? -0 : (var_7 != 12))));
            var_22 *= (((min((((var_3 <= (arr_11 [i_2] [i_3])))), var_12))) << (((var_4 ^ -113) + 434)));
        }
        var_23 = (((((min(var_7, var_4))) ? ((17018999352563499608 ? -2 : var_12)) : ((((0 != (arr_7 [i_2] [i_2]))))))));
        var_24 = (min(var_24, (arr_2 [i_2] [i_2])));
    }
    #pragma endscop
}
