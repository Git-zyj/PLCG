/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1102676625;
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] [i_1] = 0;
                var_13 -= (max((((((-14580 ? 74 : 65522))) ? 65532 : (max(65535, -406735063335797505)))), 406735063335797488));
            }
        }
    }
    var_14 = (99 < 7724492394769098773);
    var_15 = (min(((((max(var_9, 6106))) ? (-2147483628 >= 1) : var_4)), (min(6045150166219277301, var_4))));
    #pragma endscop
}
