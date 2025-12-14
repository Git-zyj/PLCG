/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_5, var_7);
    var_13 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] = min((((arr_1 [i_0]) ? 4449562976080836940 : (arr_0 [6] [i_0]))), 1090921693184);
                var_14 = ((((~((18446744073709551615 ? 8070450532247928832 : 11406049234232156640))))) ? (((((arr_1 [i_0]) >= (((arr_1 [i_0]) ? (arr_2 [i_1]) : (arr_6 [i_1] [i_0]))))))) : var_4);
                arr_8 [i_1] [i_1] [i_1] = min((((((var_11 ? (arr_2 [i_0]) : var_3))) ? (min(8749371579269943456, (arr_3 [i_0] [i_1]))) : ((8989607068696576 & (arr_1 [i_0]))))), (min((max(8266973519414586268, (arr_5 [2] [i_0]))), ((15042600410998939920 ? (arr_2 [i_0]) : (arr_2 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
