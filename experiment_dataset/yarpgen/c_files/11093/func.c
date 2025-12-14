/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11093
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_8)))))))));
    var_15 ^= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [(unsigned char)11] = ((min((arr_1 [4]), (((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (arr_0 [(signed char)0] [i_0])))))) & (((arr_1 [i_0]) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [i_0])), (((min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_1 [(_Bool)1]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0]))))))))))));
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_18 |= ((/* implicit */unsigned char) min((arr_4 [i_1] [i_1 + 1]), (min((max((((/* implicit */unsigned int) arr_6 [i_1] [i_1])), (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_1] [18U]) | (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) arr_5 [i_1] [13])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1 + 1] [i_1])), (arr_5 [i_1 + 2] [i_1]))))))), (((((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_6 [i_1] [i_1]))))) ? ((~(arr_4 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) (signed char)41)))))))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (min((((/* implicit */int) (signed char)41)), (((arr_6 [i_1] [i_1]) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)-42))))))));
    }
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) - (max((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_6)))))));
    var_21 *= ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_10))))))));
}
