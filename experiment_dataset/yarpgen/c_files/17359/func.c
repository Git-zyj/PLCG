/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17359
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
    var_17 = ((/* implicit */unsigned long long int) (+(var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */short) arr_1 [(signed char)0]);
                arr_6 [i_0] = ((/* implicit */int) ((((((((/* implicit */int) arr_2 [i_0] [i_1])) & (((/* implicit */int) arr_0 [i_0] [i_1])))) == (((/* implicit */int) ((((/* implicit */_Bool) 470004394787406017LL)) && (((/* implicit */_Bool) var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0]))))), ((unsigned char)92))))) : (min((((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */_Bool) ((unsigned long long int) ((short) (~(3925107304U)))));
}
