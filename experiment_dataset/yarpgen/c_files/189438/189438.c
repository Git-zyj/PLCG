/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(8851219753192322430, 1866645841)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((min(6762235238429279630, ((33 ? var_12 : var_8)))), (((var_4 ? 0 : 2100960412)))));
        var_21 = (max(var_21, ((min(((((-28672 + 2147483647) >> (var_19 + 6696571116561009403)))), (min(65528, -5344078198066326979)))))));
    }
    var_22 = ((((min(((max(33, 63365))), var_9))) + (max(2147483641, 7437617785767993294))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_23 = ((((max(var_5, -4))) >= (max(-53, ((622916370099654016 ? var_8 : 15))))));
                arr_10 [i_1] [i_1] [i_1] = 1307036011;
                arr_11 [i_1] [i_1] [i_1] = (min(((var_1 ? -84 : 3403342001)), ((min(var_5, 1352502982)))));
            }
        }
    }
    #pragma endscop
}
