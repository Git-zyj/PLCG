/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140925
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (+((~((~(-639315599340680011LL)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) (short)-5103)))))), ((~((~(((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) arr_7 [i_0] [(unsigned short)0])) - (((/* implicit */int) arr_5 [i_0] [4ULL] [i_1 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (var_0)))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) var_1)))) : (1700589914))))))));
            var_18 = ((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((int) var_9)))));
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1])) ? (arr_0 [i_1 + 1] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 - 1]))))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_20 = max((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [16])), (((((/* implicit */_Bool) arr_7 [2LL] [2LL])) ? (var_2) : (((/* implicit */int) arr_9 [i_2]))))))), (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_6 [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)21907))))))));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_2 [i_0])), (min((arr_7 [i_0] [(signed char)10]), (var_9)))))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_0])))) : (((/* implicit */int) (signed char)94))));
        }
    }
    var_22 += ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-639315599340680006LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
