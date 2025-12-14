/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155424
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
    var_15 |= ((/* implicit */unsigned short) (unsigned char)162);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+((+(((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_0 [(unsigned short)7])))))))))));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)90)), (arr_4 [i_0] [i_2])));
                    var_18 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) & (9)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (unsigned char)88);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) % (var_10)));
}
