/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_11 = ((!((((((2335395869 ? (arr_1 [i_0] [i_0]) : -6390778863128223399))) ? (((arr_4 [1]) ? (arr_7 [4] [i_1] [i_2]) : var_2)) : var_10)))));
                    var_12 = (max((max((((var_8 / (arr_6 [i_0] [i_1] [i_2] [i_0])))), (min(var_9, (arr_6 [i_2] [3] [3] [i_0]))))), (max((((!(arr_2 [6] [12])))), ((var_5 ? 11 : (arr_7 [2] [i_1] [i_2])))))));
                    var_13 = ((var_8 ? ((((max(1959571434, -6912336575877031338))) ? ((1959571421 ? (arr_9 [i_0] [i_0] [11] [1]) : var_10)) : 2335395892)) : (2866306875 <= 16442370865272636341)));
                }
                arr_10 [i_0] = var_1;
                var_14 = ((((max(3468605733259540299, 1959571427))) ? 1959571420 : (min(4294967295, var_10))));
            }
        }
    }
    var_15 = (var_4 ? (18446744073709551615 & 14876892928766870377) : (max(1640159931958317100, (var_9 || var_8))));
    var_16 = ((((!(((var_2 ? var_0 : var_2))))) ? ((min(5382279326690308951, 255))) : ((var_5 ? (60 || -94) : -15728199689974598328))));
    #pragma endscop
}
