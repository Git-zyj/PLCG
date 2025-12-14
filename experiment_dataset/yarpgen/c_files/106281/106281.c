/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] = (arr_2 [i_0]);
                var_17 = ((((((max(var_5, 20511)) > ((max(65535, 1538196030)))))) / -1870632839));
                var_18 = (max(4404, 103079215104));
                var_19 = (-9223372036854775807 - 1);
                var_20 ^= 9223372036854775807;
            }
        }
    }
    var_21 = ((min((~var_16), -1538196031)));
    var_22 = (min(var_22, (((~((var_7 * (min(7431991905302939457, var_14)))))))));
    #pragma endscop
}
