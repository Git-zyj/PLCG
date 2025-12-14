/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107524
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
    var_18 = ((/* implicit */signed char) (+(var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (signed char)87))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned int) arr_2 [i_0])) : ((+(arr_1 [i_0])))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (min((arr_0 [(_Bool)1]), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0]))))));
        var_20 = ((/* implicit */long long int) (~(max((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) / (arr_2 [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
    {
        arr_7 [18ULL] [i_1 + 1] = max((((/* implicit */int) max((arr_5 [i_1 - 3] [i_1 + 1]), (arr_5 [i_1] [i_1 - 3])))), (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (signed char)103)))));
        arr_8 [1ULL] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))))), (((arr_4 [i_1 + 1]) ? (arr_6 [i_1 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [14] [i_1]), (((/* implicit */short) arr_4 [i_1]))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((long long int) arr_10 [i_2])) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))))))), ((-(((/* implicit */int) arr_4 [i_2]))))));
        var_21 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) arr_12 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2])))))));
        arr_14 [i_2] = ((/* implicit */unsigned int) arr_5 [i_2] [4ULL]);
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_10 [i_2]), (arr_10 [i_2])))), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))));
        var_23 ^= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) & (arr_6 [i_2] [i_2]))), (min((((/* implicit */unsigned int) arr_10 [i_2])), (arr_6 [i_2] [i_2])))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((var_4), (var_15))) : (min((var_4), (var_1)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) min((min(((signed char)-77), ((signed char)87))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)32910))))))))));
}
