/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (max(var_1, ((max((-9223372036854775807 - 1), ((var_4 ? (-9223372036854775807 - 1) : 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = var_6;
                    var_22 = (i_0 % 2 == 0) ? (((min(((9223372036854775807 ? 8117135720371188544 : 10329608353338363072)), (arr_5 [i_1] [i_2]))) >= ((((((((arr_4 [10] [i_1 - 1] [i_0]) + 9223372036854775807)) << (((arr_3 [i_2]) - 4454378592747927246)))) << ((18024349873888150429 ? 0 : 14540851572165788088))))))) : (((min(((9223372036854775807 ? 8117135720371188544 : 10329608353338363072)), (arr_5 [i_1] [i_2]))) >= ((((((((((arr_4 [10] [i_1 - 1] [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (((arr_3 [i_2]) - 4454378592747927246)))) << ((18024349873888150429 ? 0 : 14540851572165788088)))))));
                }
            }
        }
    }
    var_23 = (((9223372036854775807 != 193464849884977138) || ((((~var_6) ? 9223372036854775807 : (((max(1, var_17)))))))));
    #pragma endscop
}
