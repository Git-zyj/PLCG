/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((977003701 != (-32767 - 1)))));
            var_16 = (max((arr_2 [i_0]), ((var_3 + (min(var_1, 163848298466541160))))));
            var_17 = ((-7959532387276586863 <= (arr_4 [i_0] [i_0])));
        }

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_18 = var_1;
            var_19 = (((((max(var_12, var_2)) << (var_5 - 11722278075559053056))) % 97));
            var_20 = (((((!30) ? (((var_0 >> (((arr_4 [i_0] [i_0]) - 6884855540569328325))))) : 223930929573401283)) * var_3));
        }
    }
    var_21 *= 4294967288;
    #pragma endscop
}
