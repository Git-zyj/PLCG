/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 4026531840;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [9] = (((!17431056619653459515) ? 39 : (max(18120, (max(12838750729381585188, 124))))));
        arr_3 [9] = 1585899163;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_12 = (min(var_12, 2709068138));
            var_13 = (min(var_13, var_1));
        }
        arr_10 [11] [i_1] = var_0;
        var_14 = max((min(1792636217, 12838750729381585188)), var_7);
        var_15 = max((max(0, ((min(var_2, -72))))), (~1));
        arr_11 [i_1] = 54214;
    }
    var_16 = var_7;
    var_17 = (max((((min(1, 0)))), 65534));
    #pragma endscop
}
