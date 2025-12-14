/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!-1);
        arr_5 [i_0] = -1639491380;
        arr_6 [i_0] = (min(-20, (-2147483647 - 1)));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_10 [i_0] = (8 / 1639491363);
            arr_11 [i_0] [i_1] [i_0] = (arr_7 [i_0]);
            var_17 += (13767 < -203);
        }
    }
    var_18 += 12288;
    var_19 += ((((max((-1639491361 ^ var_4), (min(9259664587752055908, -12603))))) && (((8 + var_11) < (2209 == -12603)))));
    #pragma endscop
}
