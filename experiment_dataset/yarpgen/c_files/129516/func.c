/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129516
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
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) (signed char)-31)) ? (2147483647) : (((/* implicit */int) var_4)))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_13))))));
    var_20 = ((/* implicit */unsigned int) var_18);
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = max(((-(var_9))), (((/* implicit */long long int) arr_2 [i_0])));
                    var_22 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)30814)) * (((/* implicit */int) (short)-32738))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_14);
}
