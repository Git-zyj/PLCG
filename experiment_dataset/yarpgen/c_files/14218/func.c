/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14218
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((-1690053500175066440LL) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 3] [i_0 - 1]))))) - (((/* implicit */long long int) ((/* implicit */int) ((short) 0)))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_7 [(short)16] [(short)8] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)11903)) == (-10))))));
                    arr_8 [i_1 - 1] [i_0] = (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 1004841187U)), (8360076646472218321LL)))) ? (min((((/* implicit */unsigned int) arr_2 [i_0])), (1004841204U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    arr_9 [i_1 + 1] = ((/* implicit */unsigned int) (((-((-(arr_0 [i_0 + 1] [i_1]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) min((3114828963U), (((/* implicit */unsigned int) -10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 516798849U))))) : (((/* implicit */int) ((short) 4294967294U))))))));
                }
                for (int i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    var_17 += ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (short)16039))) / (((((/* implicit */_Bool) (signed char)57)) ? (-8716730733862008229LL) : (((/* implicit */long long int) 1004841168U)))))), (min((((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_6 [(short)9] [i_1] [i_0 + 4]) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3290126095U)) ? (((/* implicit */unsigned int) -10)) : (1836158675U))))))));
                    var_18 ^= arr_11 [i_0] [i_0] [i_3];
                }
                for (int i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                {
                    arr_15 [i_4] [i_1] [12LL] [12LL] = max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [7U] [i_0])) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) var_15))))), (arr_10 [i_1] [i_4] [i_1]))), (((/* implicit */long long int) min((arr_1 [i_4 + 3] [i_4]), (arr_1 [i_4 + 3] [i_4])))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [13LL])) && (((/* implicit */_Bool) min((-7057490492387715577LL), (((/* implicit */long long int) arr_11 [i_0] [i_4 - 1] [i_0])))))))), (((arr_10 [i_4 + 2] [i_4 + 3] [i_4 - 1]) ^ (arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 2]))))))));
                    arr_16 [i_0] [i_0] |= ((/* implicit */int) ((min((arr_11 [i_0 + 1] [i_1 + 1] [i_1 - 1]), ((~(3290126109U))))) * (((/* implicit */unsigned int) (-(arr_2 [i_0]))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2101751014U))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_4]))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 130944U)) ? (((/* implicit */int) (_Bool)1)) : (-264253448)))), ((~(arr_10 [i_4] [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_1 - 2] [i_0])) ? (var_6) : (((/* implicit */int) arr_14 [i_4 + 3] [i_1] [i_0]))))) ? (min((-8860860496821800748LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) arr_11 [i_1 + 1] [i_1 + 1] [i_4]))))))));
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 9094177938040928923LL))) ? (((((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 1])) - (((/* implicit */int) arr_1 [i_4 - 1] [i_0 + 4])))) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_22 = ((((/* implicit */int) var_15)) < (min((((/* implicit */int) (!((_Bool)1)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (924400206))))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-73)))))));
}
