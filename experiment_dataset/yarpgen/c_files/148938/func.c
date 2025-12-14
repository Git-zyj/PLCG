/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148938
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_12 = max((((int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 3])) : (((/* implicit */int) var_8))))), (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((arr_2 [i_0] [(short)2]) || (((/* implicit */_Bool) var_10))))) : (((((((/* implicit */int) (signed char)-99)) + (2147483647))) >> (((((/* implicit */int) arr_1 [14U] [i_0])) + (61)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (arr_2 [12U] [12U]))) ? (((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-114)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)51511)) : (((/* implicit */int) var_10))))))))))));
        var_14 = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)65534)))))));
        arr_6 [(signed char)1] = ((/* implicit */unsigned char) (short)-7952);
    }
    var_16 = ((/* implicit */unsigned char) (unsigned short)51521);
    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)18)) : (var_0)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (9223372036854775782LL)))))));
    var_18 = ((/* implicit */short) (signed char)-1);
    var_19 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_1)) > (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ? ((~(1509233966))) : (((/* implicit */int) var_3))));
}
