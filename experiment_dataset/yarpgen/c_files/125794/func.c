/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125794
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) * (((((/* implicit */long long int) ((/* implicit */int) min(((short)27621), (((/* implicit */short) (_Bool)0)))))) ^ (var_5))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5607132501159838773LL) | (((/* implicit */long long int) ((/* implicit */int) (short)27621)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (4294967293U)))) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_12 += ((/* implicit */unsigned short) (-(-646178400)));
}
