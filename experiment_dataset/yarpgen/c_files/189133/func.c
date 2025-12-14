/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189133
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
    var_19 -= ((/* implicit */short) ((((/* implicit */unsigned int) var_18)) ^ ((-((~(1857231093U)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)62658)) ^ (var_18))) != (((((/* implicit */int) var_15)) ^ (var_1)))))) ^ (((/* implicit */int) ((short) var_1)))));
    var_21 += ((/* implicit */signed char) max((((((/* implicit */int) var_12)) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)62657)))))), (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_1)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) != (min((2434705516675349877ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
}
