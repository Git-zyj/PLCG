/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182041
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
    var_13 = ((/* implicit */signed char) ((var_1) >> ((((+((-(16383LL))))) + (16432LL)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))), (((((/* implicit */_Bool) -7067966207106391787LL)) ? (var_6) : (((/* implicit */unsigned long long int) 7067966207106391787LL)))))), (((/* implicit */unsigned long long int) 9223372036854775800LL)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] = (+(((((/* implicit */_Bool) var_10)) ? (-5004556265095336427LL) : (arr_4 [i_2 - 2] [i_2 + 4] [i_0 - 2]))));
                    arr_9 [i_0] = ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_2])))))))) | (((((/* implicit */_Bool) min((arr_1 [i_0 - 2] [i_2]), ((signed char)100)))) ? (max((18446744073709551615ULL), (arr_6 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 3]))) : (var_4)))))));
                    arr_10 [i_0] [i_0] [18LL] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775772LL)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100)))))))) ? (max((((arr_4 [i_2] [i_1] [i_0]) | (var_4))), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_2])) && (((/* implicit */_Bool) arr_2 [i_0] [i_2])))) || (((/* implicit */_Bool) (signed char)-113)))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2 - 2] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (-228342552844133526LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))));
                    var_15 = ((/* implicit */short) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (short)(-32767 - 1)))));
                }
                arr_12 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [3ULL])))) ? (max((-16383LL), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((arr_4 [i_0 + 1] [i_0 - 1] [i_1]) >> (((((/* implicit */int) arr_0 [i_0 + 1])) + (75)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_3] [(short)24] [i_3])) | (((/* implicit */int) (signed char)88))))) : (var_6))))));
        var_17 = ((/* implicit */signed char) (~((~(var_6)))));
        var_18 -= ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (7067966207106391789LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))));
    }
}
