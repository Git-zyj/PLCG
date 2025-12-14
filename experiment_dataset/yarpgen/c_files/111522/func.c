/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111522
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
    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) var_14))))) ? (max((16741127060754547900ULL), (((/* implicit */unsigned long long int) (signed char)124)))) : (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43896))) : (16629186980074751914ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4))))) : (max((13421024851261339338ULL), (((/* implicit */unsigned long long int) var_14))))))) ? ((-(arr_1 [i_0 + 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_8), ((signed char)-125))))))));
        var_22 *= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22708))) : (arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) (signed char)23)), (arr_1 [i_0]))) : (((var_2) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) (signed char)124))))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) ((_Bool) var_10)))))), (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (arr_1 [i_1 + 1])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_1 - 1]) : (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) min((max((var_12), (((/* implicit */long long int) ((int) arr_2 [i_1 - 1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_3 [i_1 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))) : ((+(arr_3 [i_1]))))))));
        var_24 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1])) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))));
        arr_6 [i_1 + 1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_1 + 1])), ((~(var_3)))))), (min((((/* implicit */unsigned long long int) max(((signed char)124), (((/* implicit */signed char) var_2))))), (((unsigned long long int) 18446744073709551615ULL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        arr_10 [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_2])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_2 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2] [i_2]) : (var_7))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (arr_9 [(signed char)14] [i_2])))));
        arr_12 [(signed char)5] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3416982000U)) ? (((/* implicit */long long int) var_11)) : (arr_8 [i_2] [i_2 - 1])))) ? (((int) arr_9 [i_2 - 1] [i_2])) : (((/* implicit */int) ((unsigned short) 8547248109351757607ULL)))));
    }
}
