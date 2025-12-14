/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118489
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
    for (short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */int) ((0U) == (11U)))) != (((/* implicit */int) ((((/* implicit */_Bool) 483428080U)) || (((/* implicit */_Bool) (unsigned char)22)))))))), ((short)8907))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((644985508U), (min((arr_0 [(signed char)14] [6ULL]), (((/* implicit */unsigned int) arr_2 [i_0 + 3] [13U]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(1056964608U))) >= (((((/* implicit */_Bool) arr_2 [i_0 - 4] [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (3238002687U))))))) : (((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_5 [11U])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0])))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [(unsigned char)13] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0 - 3])))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (+(min((549755813872ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 4]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) * (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
}
