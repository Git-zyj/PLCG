/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17455
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59960))))) : ((~(var_10))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_4))) ^ (((((/* implicit */int) (short)0)) / (((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))));
                    var_18 ^= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2] [i_1]);
                    var_19 ^= ((/* implicit */unsigned int) arr_4 [i_1]);
                    var_20 += ((/* implicit */unsigned long long int) max((var_4), ((-(218413089420123326LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (short)-28149)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) != (var_5))))) : (((((/* implicit */_Bool) var_14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1259698143)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~(2008243485U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)59960))))))))));
}
