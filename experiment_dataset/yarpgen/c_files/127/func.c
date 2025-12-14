/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1073582969)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8137))) : (arr_1 [18] [i_0])));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7119973264610688934LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24074))) : (2573605097366958901ULL)));
        arr_2 [i_0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25203))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) var_14)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(var_1)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 - 1]))));
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [0LL]))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 - 1])) & (((/* implicit */int) arr_5 [i_1 + 1]))));
    }
    var_21 = (!(((/* implicit */_Bool) 10990297681918928313ULL)));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_10))));
}
