/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103445
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((13812197692261732276ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((-2147483647 - 1)) : (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (9223372036720558080LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) ^ (max((((/* implicit */long long int) arr_2 [i_1])), (var_0)))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((max(((~(((/* implicit */int) var_3)))), ((~(1499588070))))) % (((int) arr_2 [(unsigned short)6])))))));
            }
        } 
    } 
}
