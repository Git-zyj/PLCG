/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169074
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned short) ((min((var_3), (min((((/* implicit */int) var_12)), (var_7))))) <= (((/* implicit */int) var_4))));
    var_17 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((unsigned char) var_7))), (((int) var_15)))), (((/* implicit */int) min((((6923019746865836542LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((_Bool) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned short) min((arr_4 [i_0]), (arr_4 [i_1]))))));
                var_19 &= ((/* implicit */unsigned char) min((((long long int) min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_0] [8])))), (((/* implicit */long long int) arr_2 [i_0]))));
            }
        } 
    } 
}
