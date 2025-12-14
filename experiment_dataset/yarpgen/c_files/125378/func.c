/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125378
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1]);
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) != (max((((/* implicit */long long int) (unsigned short)65200)), (-9153883983082776945LL))))))) > ((-(((unsigned int) arr_2 [i_1])))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65200)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (var_3)))))));
                var_17 = (~((~(arr_4 [i_0]))));
                var_18 -= ((/* implicit */signed char) (~(((((((/* implicit */int) (unsigned short)65214)) > (((/* implicit */int) (signed char)77)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_2 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((((+(((/* implicit */int) (signed char)-81)))) + (2147483647))) >> (((long long int) (signed char)6))))), (((((long long int) (signed char)6)) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)336)))))))));
    var_20 = ((/* implicit */unsigned int) -613265890);
    var_21 -= ((((/* implicit */_Bool) var_13)) ? (max((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_0))), (((/* implicit */long long int) ((signed char) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((var_2) + (6008778166261111764LL)))))) != (var_14))))));
}
