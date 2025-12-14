/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176349
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
    var_17 = ((long long int) (-((-(var_6)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) (~(((var_6) - (var_11)))));
                    arr_12 [i_2] [i_1] [i_1] [i_1] = var_5;
                    arr_13 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) var_1)) + (var_3))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (((~(max((var_3), (((/* implicit */unsigned int) var_10)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775792LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36033)))))))));
                    arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)29483)))))) >= ((-(var_5)))));
                }
            } 
        } 
    } 
}
