/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = 10895194812630440148;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (var_4 & ((((131071 + (arr_2 [i_0]))) - 18012199486226432)));
                var_19 = (min(18012199486226453, 18428731874223325183));
                var_20 *= var_9;
            }
        }
    }
    var_21 = (max(var_21, ((((((var_0 != 7) > (((var_7 + 9223372036854775807) << (var_0 - 10239248187029207045)))))) - ((min((var_6 <= var_6), (18428731874223325177 != var_9))))))));
    #pragma endscop
}
