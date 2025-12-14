/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_21 *= -6898042735484318925;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] = 2001803151276642600;
                    var_22 = ((((7 ? 4294967293 : -1331560123081690460)) / (max(58085, 2853691437269309755))));
                }
                var_23 = ((58085 == ((4294967295 >> (16687675461792727970 - 16687675461792727950)))));
                arr_9 [i_0] = (((((-944024622 + 2147483647) << (1 - 1))) == ((min(((min(-20741, 1))), 32335)))));
            }
        }
    }
    #pragma endscop
}
