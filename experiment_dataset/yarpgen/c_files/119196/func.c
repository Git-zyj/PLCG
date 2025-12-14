/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119196
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)-67))))));
        arr_2 [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(var_19)))))) ? ((+((+(var_4))))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_6)))))))));
        var_21 = ((/* implicit */short) var_5);
        var_22 += ((/* implicit */long long int) (+((~(((/* implicit */int) var_9))))));
        arr_3 [i_0] = ((/* implicit */short) var_10);
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) (+(var_4)));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)67))));
        var_24 = ((/* implicit */short) var_17);
        var_25 &= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (~(var_18)))), ((~(var_4)))))));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_4))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? (((((max((((/* implicit */long long int) var_7)), (var_12))) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) var_1)), (var_3))) - (3249298487157411186LL))))) : ((~(var_2)))));
    }
    var_28 = ((/* implicit */unsigned short) (+(var_4)));
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_19) : (var_18))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (var_19)));
}
