/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126175
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)6569))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-8231)))) : (((((/* implicit */_Bool) (short)-8231)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (-909552001)))) ? (((((/* implicit */_Bool) 15226477691698786759ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8231))) : (15226477691698786759ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32731))))) : (var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))));
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_4)))))) >= (min(((-(arr_2 [22ULL] [i_1] [i_1]))), (min((arr_2 [i_0] [i_1] [(signed char)9]), (var_5)))))));
                arr_5 [i_1] [i_1] = (short)-32731;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-153773552) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)0))))))), (((((((/* implicit */_Bool) var_0)) ? (var_11) : (var_3))) + (15226477691698786745ULL)))));
    var_16 |= ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_3))))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15226477691698786766ULL))))))));
}
