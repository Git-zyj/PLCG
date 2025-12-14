/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126204
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
    var_16 ^= ((/* implicit */int) (~(((((((/* implicit */_Bool) 622614206528693352ULL)) ? (11295073443618257023ULL) : (((/* implicit */unsigned long long int) -3754798825212493031LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) min((((4432839198834927398LL) ^ (((/* implicit */long long int) -452181818)))), (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_9) + (808848611234459711LL))))))))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((min((((/* implicit */long long int) arr_1 [(signed char)7] [i_0])), (arr_0 [i_0]))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))))))));
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (short)-30121)))) : (((var_5) * (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_3 [5] [i_0] = ((/* implicit */signed char) var_1);
        var_19 = ((/* implicit */int) var_7);
        var_20 += ((/* implicit */signed char) arr_0 [i_0 - 1]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)30133)) | (((/* implicit */int) (unsigned char)97)))) & (((/* implicit */int) var_7))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_5 [i_1])))))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45651))) >= (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_8))))) - ((~(var_9)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) var_5);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_4 [i_2])) + (var_9)))))) || (((/* implicit */_Bool) ((int) min((var_14), (((/* implicit */unsigned char) var_15))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = min((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_13)))) : ((+(((/* implicit */int) arr_11 [i_3])))))), (((((((/* implicit */int) (short)-17315)) / (((/* implicit */int) (signed char)-120)))) * ((+(((/* implicit */int) var_13)))))));
        var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) arr_10 [i_3]))))), (((8446804363409183249LL) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12829)) & (((/* implicit */int) (unsigned char)228)))))))))));
    }
}
