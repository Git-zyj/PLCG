/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1630
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
    var_10 *= (-(((/* implicit */int) (short)-1)));
    var_11 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) var_8)), ((-(var_9)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) max(((short)14336), ((short)14324)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_0]))))) == (((/* implicit */unsigned long long int) ((((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14364))))) ? (max((arr_1 [i_0]), (((/* implicit */int) (short)-14341)))) : (((((/* implicit */int) (short)14364)) >> (((((/* implicit */int) var_0)) - (18330))))))))));
        arr_2 [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14367))) : (arr_0 [i_0] [i_0])))) ? (((long long int) (short)-14339)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) (short)14350)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / ((-(arr_0 [12U] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_1 [8ULL]))) > (((/* implicit */int) (short)-14336))))))));
        var_13 = (((+(arr_0 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14350))));
        arr_3 [(unsigned short)0] [i_0] &= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    var_14 -= (-((((+(var_4))) << (((/* implicit */int) min((var_6), (var_1)))))));
}
