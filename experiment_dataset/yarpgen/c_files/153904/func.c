/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153904
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
    var_14 = ((long long int) ((var_7) ? (((/* implicit */int) (unsigned char)3)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)4))))));
    var_15 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (-1089345978)))) - (var_5)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned char)9))));
                arr_4 [i_0] = ((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2]);
                var_17 = ((((/* implicit */_Bool) (unsigned short)4)) ? (max((((arr_1 [i_0]) | (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) 6145898492554341897LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (var_11))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))), (arr_1 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6145898492554341898LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-4998))))) ? (min((var_0), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)6)) || (var_6))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_7)))))))));
}
