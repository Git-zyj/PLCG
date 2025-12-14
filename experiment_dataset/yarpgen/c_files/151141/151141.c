/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((60449 ? var_12 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((((~(arr_2 [i_0] [i_0] [i_0])))) ? (((arr_1 [i_0]) | (arr_2 [i_0] [i_0] [i_0]))) : (~var_15)))))));
                arr_4 [i_0] [i_1 + 2] [i_0] = ((((((~25342) ? ((240 ? 25342 : 25342)) : (~25333)))) + ((25372 ? (arr_1 [i_1 - 1]) : ((56 ? -6820687149376204708 : 114))))));
                var_20 = ((var_5 | (min(32765, ((var_15 ? 49152 : (arr_0 [i_0] [i_1])))))));
                var_21 = ((-25333 ? (((25333 && (arr_3 [i_0] [i_0] [i_0])))) : (max((((-25359 && (arr_1 [i_0])))), ((7257611504028525084 ? 65296 : 65295))))));
            }
        }
    }
    var_22 = max((((!((min(65276, 1)))))), (((((var_14 ? (-9223372036854775807 - 1) : -12))) ? var_15 : (!14180))));
    #pragma endscop
}
