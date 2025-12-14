/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 36));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] [i_1] = ((((max(var_12, -36))) ? ((46 ? 1 : 18446744073709551615)) : (min(1644576777935285919, var_6))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = max(1046012074, (max(42, 9616737755687479660)));
                            var_17 = (min(var_17, ((min((max((arr_4 [12] [8] [12]), (-1929721141 % 52356))), (5110560153317693994 && 9616737755687479660))))));
                            var_18 += ((((((arr_1 [i_0 + 1]) ? -53 : -6197069559980034987))) / (min(666645573, 3194016299882130704))));
                        }
                    }
                }
                var_19 = -3616239024153948151;
            }
        }
    }
    #pragma endscop
}
