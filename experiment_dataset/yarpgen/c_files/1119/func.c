/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1119
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1493896742)) != (0U)))) : ((-(var_16))))) ^ (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) 946488260U)), (1926786061847426035LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) != (((((/* implicit */long long int) (+(-760235508)))) ^ (((((/* implicit */_Bool) (unsigned short)22775)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27)))))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
}
