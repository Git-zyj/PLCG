/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154930
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
    var_17 &= ((((/* implicit */int) ((_Bool) (-(var_3))))) < (((/* implicit */int) (!(var_11)))));
    var_18 = ((/* implicit */signed char) ((unsigned short) (-(var_15))));
    var_19 ^= ((/* implicit */unsigned long long int) ((int) (signed char)(-127 - 1)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [13ULL] = ((/* implicit */unsigned long long int) max((((-150432361297407746LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_1 - 2]))))), (max((var_1), (150432361297407764LL)))));
                    var_20 += ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_16), (((/* implicit */long long int) var_12)))), (max((-150432361297407746LL), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -5590850467284090832LL)) && (((/* implicit */_Bool) var_14))))) : ((+(((/* implicit */int) (_Bool)1))))));
}
