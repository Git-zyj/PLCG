/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157884
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
    var_14 = ((/* implicit */long long int) ((var_5) && (((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-119)))), (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)216)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_0 [i_0] [i_0])))) <= (((var_11) - (arr_5 [i_1] [6ULL] [i_1 - 1]))))) ? (((((((/* implicit */_Bool) (unsigned char)216)) ? (-1268164423809977860LL) : (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) * (((/* implicit */int) arr_1 [i_1 - 2])))))));
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1 - 1])) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)216)) < (((/* implicit */int) arr_0 [i_0] [i_1])))))))), (min((min((var_7), (((/* implicit */unsigned int) (signed char)-98)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_1 [i_0])))))))));
                var_17 &= ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)119)) - (((/* implicit */int) (unsigned short)36213))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */int) var_9)) << (((((((((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(1482725064878394019LL))) + (1482725064878394025LL))))) - (67108838))));
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0))));
    var_20 = ((/* implicit */_Bool) var_9);
}
