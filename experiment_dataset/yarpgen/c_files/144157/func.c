/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144157
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
    var_10 = ((/* implicit */unsigned short) ((signed char) (unsigned char)163));
    var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)116)), (31U)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (unsigned char)140)))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) : ((+(((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) ((signed char) var_2)))))) ? (((arr_2 [i_1 - 2] [i_0 - 2]) - (((/* implicit */long long int) ((arr_4 [6LL] [6LL]) - (arr_4 [i_0] [i_1])))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)8))))))));
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_0 + 1])), (arr_1 [i_0 + 2])))) ? (((((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) var_0))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)139)) && (((/* implicit */_Bool) 901981023725638260ULL))))))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (arr_4 [i_0 + 1] [i_1 + 1]) : (((/* implicit */int) (signed char)62))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_9);
}
