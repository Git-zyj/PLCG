/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153843
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) ((int) (short)6193))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)149)) >> (((((/* implicit */int) var_10)) + (96))))) >> (((((/* implicit */int) (short)-6188)) + (6219)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-31)), (arr_2 [i_0] [i_1])))), (arr_1 [i_0] [i_1])))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned char)225))) + (((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (5490134715168921535LL)));
            }
        } 
    } 
    var_21 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) max((var_1), ((signed char)0))))))));
    var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_12) * (0U)))))) ? (((/* implicit */int) var_14)) : (var_5)));
}
