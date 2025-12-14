/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158818
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
    var_16 = max((((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned short)35892)) ^ (((/* implicit */int) var_9)))))), (((/* implicit */int) var_8)));
    var_17 = (+(((/* implicit */int) (unsigned short)29643)));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((max((((var_13) & (var_10))), (((/* implicit */long long int) max((var_4), ((unsigned short)0)))))) + (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1006632960)) && (((/* implicit */_Bool) 16224606650285466909ULL)))))) & (min((((/* implicit */long long int) var_4)), (arr_1 [i_0 - 1])))))));
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
        var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29651)))))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((unsigned char) -1771460428319700485LL);
        var_21 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) -466728013)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned short)35892)))) >> (((((/* implicit */int) (unsigned short)35892)) - (35892)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)5))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_1)))));
        arr_9 [i_2] = ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)));
        var_24 = ((/* implicit */unsigned long long int) -5331373958475662771LL);
    }
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
}
