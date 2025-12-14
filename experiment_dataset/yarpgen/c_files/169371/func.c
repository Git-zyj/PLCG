/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169371
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
    var_10 = ((/* implicit */unsigned int) ((int) var_5));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)0)))) < (0U)))) > (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_12 = ((/* implicit */unsigned char) 0U);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_8))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */int) max(((~(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (var_8) : (var_8)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)16383))))))))));
}
