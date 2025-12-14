/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18305
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_2)))) >= (((var_4) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) 521100188)))), (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)89)))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) + ((+(((/* implicit */int) var_6)))))) / (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [(unsigned char)5] [i_0]))))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) arr_3 [i_1] [i_1])))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [9ULL])) || (((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_5))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))), (((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (arr_4 [0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
    }
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((var_1) % (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (min((6006473318561955038ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_10), ((unsigned char)166)))) : (var_3))) : (var_9)));
    var_17 ^= ((/* implicit */int) max((var_5), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)89))))), (var_2))))));
}
