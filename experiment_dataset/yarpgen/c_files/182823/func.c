/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182823
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) (-((-(0ULL)))));
                    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)4)), (7U)));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_4)), (var_0))))) < (((((/* implicit */int) var_10)) / (arr_3 [i_0] [i_0] [i_0])))));
                    var_13 ^= ((/* implicit */long long int) (~(1455592256)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((int) 3024144125U));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
}
