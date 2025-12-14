/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134792
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [10LL] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_10 = ((/* implicit */unsigned char) min(((unsigned short)21), ((unsigned short)65515)));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)4] [i_1])) && (((/* implicit */_Bool) var_2)))))))))))));
        var_12 = ((/* implicit */signed char) (_Bool)1);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(arr_6 [i_1]))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)19)), (arr_1 [i_1]))))))) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)92))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) var_6)))));
        var_14 = ((/* implicit */short) (~(var_8)));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 - 1])))))));
        arr_11 [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1]))));
        arr_12 [i_2 - 2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28))))) ? (((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) arr_1 [i_2 - 1]))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65529))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */int) var_3)) == (((/* implicit */int) (short)-14789)))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (var_0)))));
    var_17 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
}
