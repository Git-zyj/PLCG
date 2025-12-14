/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((var_5 <= var_6) > var_11)))));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((arr_0 [i_0] [0]) ? 100 : (arr_3 [i_0 - 1] [10]))))));
                arr_6 [i_1] [i_1] = ((((max(-100, 111))) ^ (min((18446744073709551593 || 184040082657431873), (((arr_3 [i_0] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = (((min(6357509857900361999, 2000283453)) + (--31)));
                            arr_13 [i_1] [i_1] [i_1] = ((((9311124452468995306 ? (-2147483647 - 1) : 6357509857900362002))) && (arr_1 [i_1] [i_3]));
                            var_19 = (max(var_19, (arr_5 [2])));
                            var_20 = -2030079392;
                        }
                    }
                }
            }
        }
    }
    var_21 |= var_13;
    #pragma endscop
}
