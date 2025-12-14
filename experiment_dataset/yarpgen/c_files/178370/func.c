/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178370
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((~(12046436343360798953ULL))))) * (((12046436343360798953ULL) | (((/* implicit */unsigned long long int) 7))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))), (((max((arr_1 [i_0]), (arr_1 [i_0]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12046436343360798953ULL)) ? (6400307730348752663ULL) : (((/* implicit */unsigned long long int) 832862511))))) ? (((((/* implicit */_Bool) 6400307730348752662ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)214)))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)-1))) ? (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned char)227)))) : ((-2147483647 - 1))))));
        var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) << (((arr_1 [i_0]) - (786076560)))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_9)))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) ((var_12) - (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((var_8) / (arr_1 [13ULL]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 3])) > (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) < (arr_3 [i_1]))))));
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [6ULL])) && (((/* implicit */_Bool) arr_3 [12]))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_1 [i_1 - 2])) ^ (arr_0 [i_1]))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((((((/* implicit */int) var_13)) + (2147483647))) << (((var_12) - (14483684335756515309ULL))))) > (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_7)))))))))))));
}
