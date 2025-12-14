/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16045
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [8LL] [0U] [i_2] [i_3]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [(signed char)6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)241)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)1])) ? (((/* implicit */int) (unsigned short)41084)) : (((/* implicit */int) (signed char)57)))))))));
                        var_20 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((((/* implicit */_Bool) var_16)) ? (((var_13) & (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3] [i_0] [i_0]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_22 += ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_10 [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_1])))) && (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)6)), (arr_6 [6ULL])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_7 [i_2])))))));
                        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) ((var_14) && (((/* implicit */_Bool) arr_1 [i_1 + 1])))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (18446744073709551610ULL))), (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    }
                    arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) min((((arr_6 [i_2]) / (max((arr_6 [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_1])))))), (((arr_8 [i_2] [i_1 - 1] [i_1 + 1] [i_1 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_4 [i_0] [i_1] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_2]))) / (var_8)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)91))))) / ((((_Bool)1) ? (12039303821273904601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))))))));
}
