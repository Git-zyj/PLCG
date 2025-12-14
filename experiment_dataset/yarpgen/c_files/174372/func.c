/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174372
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_14 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))), ((((_Bool)1) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_2 [i_0])))) : (var_3)))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (arr_0 [i_0] [12U])))) : (((var_0) * (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))) || (((/* implicit */_Bool) max((arr_1 [i_0]), ((signed char)-22))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_5 [(short)11] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)50)) ^ (arr_2 [i_1])))))) ^ (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (signed char)21)), (14576690630010385716ULL))) <= (max((3870053443699165899ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))))));
        arr_6 [(unsigned short)0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12379))) : (6859638780736803076LL))), (((/* implicit */long long int) max((((/* implicit */short) var_8)), (var_2))))));
    }
    for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [10LL]))))) ? ((-(((/* implicit */int) (signed char)43)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? ((+(((((/* implicit */int) (_Bool)1)) ^ (arr_2 [11U]))))) : (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2])) / (((/* implicit */int) arr_3 [i_2 - 1])))) > (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)-6)))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_2 - 1])), (72973439U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1275583393)) || (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_2 + 1]) : (((/* implicit */int) arr_3 [i_2]))))))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_2]))))))), (min((((/* implicit */unsigned long long int) arr_1 [i_2 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) / (var_7)))))));
    }
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (max((var_9), (((/* implicit */unsigned short) var_1))))))) << ((((+(((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) - (103ULL)))));
}
