/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130859
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (1476062470862479196ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (signed char)-122))))) : (min((var_3), (((/* implicit */unsigned int) var_9))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1] [i_0 + 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)59409)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), ((signed char)73)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))))) : (var_7)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned long long int) var_5)), (var_7))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned char) var_8))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-57))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1925032551)))), (((/* implicit */unsigned long long int) max(((short)7773), (((/* implicit */short) (signed char)-100)))))))) ? (var_7) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)101))))), (((unsigned long long int) 11007000293582009088ULL))))));
    var_18 = ((/* implicit */signed char) var_6);
}
