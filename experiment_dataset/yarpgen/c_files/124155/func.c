/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124155
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) max((min((18000185034188093381ULL), (((/* implicit */unsigned long long int) var_8)))), (((446559039521458265ULL) << (((/* implicit */int) (signed char)15)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])))))));
                    arr_8 [i_0] [i_0 + 3] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)27011)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) - (arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) var_0);
}
