/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((6074053340802238214 ? var_6 : (var_4 == var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (max(((((0 == 11505) == 6074053340802238227))), (arr_4 [i_1] [i_0])));
                arr_8 [6] [6] [6] = (min(var_2, 255));
            }
        }
    }
    var_12 = (((min((min(4607182418800017408, 3886988217327153123)), -6074053340802238229)) == var_3));
    var_13 &= ((-(max(11505, -3173814941139238511))));
    #pragma endscop
}
