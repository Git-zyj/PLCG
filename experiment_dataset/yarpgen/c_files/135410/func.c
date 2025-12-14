/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135410
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) (-(var_4)))) * (0LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_3 [i_2])))) ? (((/* implicit */int) (unsigned char)15)) : ((-(((/* implicit */int) arr_4 [i_0] [i_2] [i_2])))))));
                    arr_7 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 992U)), ((+(-24LL)))));
                    var_15 = ((/* implicit */unsigned long long int) 4294966303U);
                }
            } 
        } 
    } 
}
