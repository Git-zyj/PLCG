/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123278
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [8LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-(4551236962810918755ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16))) * (1200199738U))))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) & (1287964134U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_3 [i_1 - 1] [1U] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)0);
            }
        } 
    } 
    var_14 = (-(((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_5)))) & (min((var_9), (((/* implicit */unsigned long long int) (unsigned char)10)))))));
    var_15 = ((/* implicit */short) var_5);
}
