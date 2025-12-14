/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137680
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
    var_12 = ((/* implicit */unsigned int) (-(var_8)));
    var_13 -= ((/* implicit */unsigned char) (+(var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((237650380936920865ULL) == (18209093692772630747ULL))))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0])))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)54))))) >> (((((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (_Bool)1)))) - (144)))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)4884)) / (((/* implicit */int) (unsigned short)28823)))) + (((((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) * (((/* implicit */int) (unsigned char)8))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)36717)))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) / (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_4)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)29460))))) : (max((((/* implicit */unsigned long long int) var_1)), (18209093692772630750ULL)))))));
}
