/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175203
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (7158434183042757960ULL))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59004))) * (11288309890666793656ULL))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) 11288309890666793655ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (11288309890666793655ULL)))))));
                    var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (7158434183042757960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (+(((arr_4 [i_0] [i_0] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                }
            } 
        } 
    } 
    var_11 -= ((/* implicit */long long int) max((min((((/* implicit */int) ((unsigned short) (-2147483647 - 1)))), (min((var_2), (((/* implicit */int) var_1)))))), (((/* implicit */int) var_7))));
}
