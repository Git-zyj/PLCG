/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129429
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
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_10)))))));
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [10LL]))) > (max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (var_3))))));
        var_15 = ((/* implicit */unsigned long long int) (~(min((max((((/* implicit */int) var_2)), (var_10))), (arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (32336)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14792))) ^ (2047LL)))) : ((~(var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50743)) ^ (max((((/* implicit */int) var_5)), (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_4 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_6 [i_1] [i_1])))) : (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1])) - (9360)))))))) ? (max((-1LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1] [i_1])), (var_5)))))))));
    }
}
