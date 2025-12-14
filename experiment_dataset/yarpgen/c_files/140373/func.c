/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140373
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
    var_14 = ((((min((var_1), (((/* implicit */long long int) var_11)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_5)))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((var_12) + (var_6))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_3)))) ? ((+(4992387540055899613LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [12]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0])))))) ? (((unsigned int) min((arr_1 [i_0]), (arr_1 [11U])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) <= (((((/* implicit */_Bool) arr_0 [(signed char)17])) ? (arr_1 [3]) : (arr_1 [(short)2]))))))))))));
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2118049797U))))), ((((!(((/* implicit */_Bool) arr_1 [(unsigned char)5])))) ? (((/* implicit */long long int) min((arr_1 [18LL]), (arr_1 [6LL])))) : (((long long int) (unsigned char)127))))));
        var_18 = arr_1 [i_0];
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))))), ((((-(((/* implicit */int) arr_0 [i_0])))) < (((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [(short)4])))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_4 [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_3 [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_2 [i_1]))) : (min((((/* implicit */unsigned long long int) arr_0 [(signed char)14])), (arr_2 [i_1]))))), (min((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)3]))))), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1]))))));
        var_20 += ((/* implicit */unsigned int) max((arr_2 [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [(unsigned short)5]), (arr_0 [15LL]))))) <= (min((arr_1 [(unsigned short)14]), (((/* implicit */unsigned int) arr_0 [(_Bool)1])))))))));
    }
}
