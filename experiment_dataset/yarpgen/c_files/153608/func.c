/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153608
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (23280779U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
    var_16 = (-(3LL));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2305280059260272640LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : (4776610080660037201LL)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))))) : (((((((/* implicit */_Bool) var_8)) ? (1508835372474289557ULL) : (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((4776610080660037220LL), (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)65302)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
}
