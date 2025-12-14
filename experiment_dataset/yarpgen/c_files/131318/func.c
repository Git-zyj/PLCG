/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131318
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 308316581))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-15331)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))) > (((/* implicit */int) (unsigned short)42204))))) : (((/* implicit */int) var_8))));
                var_19 = ((/* implicit */short) (-(((((((/* implicit */_Bool) (short)31755)) ? (14336LL) : (((/* implicit */long long int) 1278978343U)))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)5419)), (arr_1 [i_0] [i_1 - 1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) 11418969736753484091ULL);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_13))));
}
