/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134599
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
    var_15 = ((/* implicit */unsigned int) max((var_11), (min(((!(((/* implicit */_Bool) (unsigned char)81)))), ((!(((/* implicit */_Bool) var_9))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_8)) ? (-6632715008890837578LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) % (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) -6632715008890837578LL);
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (unsigned short)0)))));
        var_18 = ((/* implicit */unsigned char) var_9);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(min((((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (19))))), (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))))));
    }
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned short) 3519624632U)), (((/* implicit */unsigned short) ((short) (signed char)-119)))))) ? ((+(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        arr_10 [i_2 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
    }
}
