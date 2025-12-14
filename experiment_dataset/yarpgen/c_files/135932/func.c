/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135932
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) 1255534767U);
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)22)) >> (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_1]))))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 4U))) || (((/* implicit */_Bool) (signed char)-72)))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */_Bool) var_0);
    var_16 *= ((/* implicit */long long int) ((var_1) / (18446744073709551615ULL)));
}
