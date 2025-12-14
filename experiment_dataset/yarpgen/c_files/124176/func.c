/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124176
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (signed char)-123))))) || (((/* implicit */_Bool) ((short) (unsigned char)31))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)88))))))) : (((/* implicit */int) (signed char)-61)));
        arr_3 [i_0] [i_0] = arr_0 [i_0] [i_0];
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((signed char) (unsigned short)65535));
            arr_9 [i_2] = ((/* implicit */unsigned char) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)4095)))))))));
            var_20 = ((/* implicit */short) var_5);
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (arr_7 [i_1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (484162898)))) : (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_7 [i_1]))), (((/* implicit */unsigned int) (short)-31468))))));
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)61))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_6);
}
