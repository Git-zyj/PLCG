/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170715
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
    var_20 = ((/* implicit */signed char) var_0);
    var_21 ^= ((/* implicit */unsigned int) min((((short) (!(((/* implicit */_Bool) var_10))))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (max((-886894477652541865LL), (((/* implicit */long long int) (signed char)-2)))))))));
    var_22 = ((signed char) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    var_23 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
}
