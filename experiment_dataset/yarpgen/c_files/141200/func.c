/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141200
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
    var_11 = ((/* implicit */_Bool) max(((unsigned short)64292), (((/* implicit */unsigned short) (_Bool)1))));
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((((/* implicit */int) (signed char)-108)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (3460)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) 12665850662445775838ULL);
                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), ((~(arr_0 [i_0] [i_1 + 1])))))) & (max((((((/* implicit */_Bool) (signed char)-90)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) 1872763414U))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))) : (((((((/* implicit */_Bool) arr_6 [i_2] [(short)7])) ? (arr_9 [i_2] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1 + 3] [i_1 + 3] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-35))))))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 + 3] [i_0 + 1] [i_3])), (max((arr_6 [i_0] [20ULL]), (11669889492844366826ULL))))) / (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_1))))))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 601175193748976848ULL)) ? (((((/* implicit */int) var_1)) << (((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) + (65))) - (21))))) : (((/* implicit */int) arr_1 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
