/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129226
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
    var_16 ^= ((/* implicit */short) ((((((/* implicit */int) var_5)) << (((var_7) - (2713161806U))))) != (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)198)), (var_5)))) < (((((/* implicit */int) (short)2372)) ^ (((/* implicit */int) var_12))))))), (var_12)));
    var_18 = ((/* implicit */unsigned int) var_0);
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-2386))))) ? (var_4) : ((-(((/* implicit */int) var_6)))))) / (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) 1487098516U)) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) max((max((1031016054), (((/* implicit */int) (unsigned char)26)))), (((((/* implicit */_Bool) -1278479177)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-16904))))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [(short)8] [i_0])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) > (((/* implicit */int) (short)-27851))))))));
    }
}
