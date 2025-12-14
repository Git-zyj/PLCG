/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((var_3 ? (!2295260052) : var_14)));
                var_18 = ((min(2295260052, (arr_2 [i_0 + 4] [i_0 + 1]))));
                var_19 = (max(var_19, ((min((arr_2 [i_1] [i_0]), ((1999707243 ? 22591 : 3706366591013532158)))))));
                var_20 &= 2295260052;
            }
        }
    }
    var_21 *= var_11;
    var_22 = (max(var_22, (((-((~(max(1999707260, 1999707259)))))))));
    #pragma endscop
}
