/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176885
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */short) var_10)), (var_1)))) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_10))))))) - (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_12))));
                    var_19 = ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_0)));
                    arr_9 [i_0] [(unsigned short)0] [9LL] [i_1] = ((/* implicit */unsigned short) max((min((min((var_13), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 13355838114723896793ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) (unsigned short)64749))));
                    arr_10 [i_0] [i_1] [i_1] [(signed char)11] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)15))));
                }
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (signed char)6))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))))) * (((((/* implicit */_Bool) (short)-132)) ? (max((2192659905U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60302)))))));
                    arr_15 [5LL] [i_1] [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)1665)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_1]))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_5 [(short)10]))))));
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (1442320815U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))))) : (((/* implicit */unsigned int) 1268523995)))), (((/* implicit */unsigned int) var_0))));
                }
                for (signed char i_4 = 4; i_4 < 9; i_4 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)4] [i_1] [(signed char)4] [i_1])) ? (-2027172958) : (((/* implicit */int) var_8))));
                    var_22 = ((/* implicit */int) arr_16 [i_1] [i_1]);
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_1))));
                    arr_18 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_4))))) ? (max((var_6), (-2027172950))) : (((max(((_Bool)1), (arr_17 [i_4] [i_1] [(signed char)5]))) ? (((/* implicit */int) ((unsigned char) var_2))) : ((~(((/* implicit */int) (unsigned char)169))))))));
                }
                var_24 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 5713157207745716396LL)) || (((/* implicit */_Bool) arr_13 [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (5692947944551783254LL)))))));
                arr_19 [i_1] [(short)7] [i_1] = min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)14834)));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((((1125899906842622LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-127)))))));
}
