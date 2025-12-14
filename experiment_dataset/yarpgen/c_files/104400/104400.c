/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_14 ? (31 < -31) : (min(var_0, var_1)))) << 17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = -124;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_17 ^= ((-((1 - ((((arr_6 [i_0] [i_0] [1] [i_0]) >> 0)))))));
                    var_18 = (max(var_18, ((min(46, ((10881 << (((arr_7 [i_0] [i_1 + 2] [i_2 - 1] [i_1 - 1]) + 205931867424498747)))))))));
                }
                var_19 ^= var_2;
            }
        }
    }
    #pragma endscop
}
