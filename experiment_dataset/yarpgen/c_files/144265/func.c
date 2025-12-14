/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144265
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
    var_16 = ((/* implicit */unsigned long long int) min((max(((unsigned short)21215), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)40459)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65526)), ((+(max((((/* implicit */int) var_13)), (arr_1 [i_1] [i_2])))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2 + 3]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) min(((signed char)-118), (((/* implicit */signed char) (_Bool)1))))), (var_13)))), (max(((unsigned short)44311), (((/* implicit */unsigned short) (_Bool)1))))));
    var_20 *= ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) var_0))));
}
