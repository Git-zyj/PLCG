/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132093
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_4)) | (((var_11) * (((/* implicit */unsigned long long int) -16)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) 1373411099U)) ? (arr_3 [i_0] [i_1]) : (var_5))))))));
                var_15 = ((/* implicit */int) ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_1 [i_1 - 1])))) % (var_7)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((arr_4 [i_0] [0ULL] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [(unsigned char)6]) >= (((/* implicit */unsigned int) arr_6 [i_2 + 1] [(unsigned short)2] [i_0])))))) : (arr_1 [i_0 - 1]))))));
                    arr_7 [(unsigned char)5] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 1]));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_7) < (((/* implicit */long long int) var_5))))) * (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 2921556185U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) -431174041)) ? (((/* implicit */unsigned long long int) var_7)) : (var_11)))))));
    var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_5)))) / (((((/* implicit */long long int) var_5)) - (var_7)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_4)) != (var_8))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_11))) : (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))))))))) ? (((min((((/* implicit */unsigned long long int) (unsigned short)65520)), (var_8))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (unsigned short)22)) ? (var_8) : (((/* implicit */unsigned long long int) var_9))))))));
}
