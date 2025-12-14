/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126837
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
    var_10 = (-(167599816));
    var_11 = ((/* implicit */long long int) var_4);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((((var_9) + (((/* implicit */int) var_8)))) > (((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) + (2147483647))) << (((arr_0 [i_0]) - (6773931547431747093ULL))))))));
                    var_14 = ((/* implicit */signed char) arr_0 [i_0]);
                    arr_7 [(unsigned short)6] [i_1] [i_0] [i_1] = ((/* implicit */short) (~((~(arr_0 [i_0])))));
                }
            } 
        } 
    } 
}
