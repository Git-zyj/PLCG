/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141724
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]))))), (min((((/* implicit */long long int) arr_7 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1])), (arr_3 [i_0 - 1] [i_2 + 2] [i_2])))));
                        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 + 1] [i_2 - 1] [i_2] [i_3] [i_3])) - (((/* implicit */int) arr_7 [i_0 - 2] [i_2 + 2] [(unsigned short)21] [(unsigned short)24] [i_2]))))) || (((/* implicit */_Bool) ((arr_7 [i_0 - 2] [i_2 + 1] [i_3] [i_3] [12U]) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_2 + 1] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 2] [i_2 + 2] [i_3] [i_3])))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0] [i_2 + 2])) ? (arr_5 [i_0 + 1] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2 - 1]))))), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0 - 1])), (arr_6 [i_0]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((var_4), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (max((var_1), (var_1))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) var_0);
        var_15 += ((signed char) min((arr_5 [(unsigned short)8] [0LL] [i_4]), (((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))));
        arr_16 [19ULL] = ((/* implicit */long long int) var_4);
        var_16 -= ((/* implicit */short) (+(13256728813428700432ULL)));
    }
}
