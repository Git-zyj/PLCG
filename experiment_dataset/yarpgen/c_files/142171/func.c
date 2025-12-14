/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142171
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
        var_20 = ((/* implicit */unsigned short) ((((arr_2 [i_0]) >= (arr_2 [i_0]))) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_21 = ((/* implicit */int) var_9);
        arr_5 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_12))))));
        var_22 *= ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
        var_23 &= var_13;
        arr_11 [i_2] [i_2] &= ((/* implicit */int) var_8);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((-(var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_9 [i_2]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_18))))))))) : ((-(arr_9 [i_2])))));
    }
    var_25 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    var_26 -= ((/* implicit */unsigned long long int) var_13);
}
