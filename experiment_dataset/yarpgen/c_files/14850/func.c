/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14850
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_0]))) <= (var_10)))), ((signed char)(-127 - 1))));
                    var_14 = ((/* implicit */long long int) var_5);
                    var_15 = ((((/* implicit */_Bool) ((arr_7 [i_0] [(short)11] [i_2]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))) ? ((-((+(-3189719964681764506LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((((_Bool)1) ? (705519853) : (((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) ((unsigned char) var_11)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))))));
}
