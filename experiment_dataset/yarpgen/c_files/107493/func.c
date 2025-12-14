/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107493
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(594083955U)));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)1))));
        arr_3 [i_0] = (~(arr_1 [i_0]));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -461835258)) ? (((/* implicit */int) (signed char)-1)) : (1678341947)))) ? ((~(var_0))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 + 1])) ? (230108701U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1])))));
            var_19 = arr_6 [i_1] [i_1] [i_2];
        }
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))));
        var_21 ^= (unsigned short)8;
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), ((-(((/* implicit */int) (signed char)-2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_10)))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))))));
    var_23 = ((/* implicit */long long int) var_3);
}
