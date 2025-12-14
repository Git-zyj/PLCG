/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131205
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */short) arr_2 [i_0]);
                var_21 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)65535)))), (((arr_3 [i_1] [i_0] [i_0 - 2]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1]))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) + (((/* implicit */int) var_7))))) == (max((((/* implicit */unsigned long long int) var_18)), (var_2))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 5929262172169712753ULL))));
    var_23 = ((/* implicit */unsigned char) ((long long int) var_5));
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)241)))))))));
}
