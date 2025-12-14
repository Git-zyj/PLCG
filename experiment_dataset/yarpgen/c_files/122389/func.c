/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122389
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) > (((((/* implicit */int) (unsigned short)4561)) >> (((((/* implicit */int) (unsigned short)60981)) - (60951)))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) -2372332051766999294LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60947))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) (unsigned short)4560))) : (((/* implicit */int) var_18))))) : ((-(var_8)))));
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_11)), (var_15))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_2))), (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))) ? (((((/* implicit */_Bool) 13873688518254043664ULL)) ? (1758614107U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60924))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~((~(arr_1 [i_0] [i_0]))))))));
        arr_3 [(short)4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (-8942265774864205592LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [7])) ? (((/* implicit */int) (short)3871)) : (arr_1 [i_0] [9LL]))) : (((/* implicit */int) ((unsigned short) (signed char)-66))))) : (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (arr_1 [i_0] [(unsigned short)7]))) : (((/* implicit */int) (unsigned char)17)))));
    }
}
