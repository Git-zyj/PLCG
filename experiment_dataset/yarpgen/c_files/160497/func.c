/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160497
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
    var_18 += ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) - (((/* implicit */int) (unsigned char)109))))) + (((long long int) var_14)))), (((/* implicit */long long int) min((var_1), (var_8))))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6)))))))) ? (max((((((/* implicit */_Bool) 6709719303285707765ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)92))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_9)))) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)20751)))) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20751))) | (784727418U)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)117)) - (((/* implicit */int) arr_1 [i_0 + 3]))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20751))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_3 [6ULL]))))) : (((((/* implicit */_Bool) (short)31826)) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_6 [i_0] [i_0 - 1] [i_0])))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) var_11))), (((((/* implicit */_Bool) 4ULL)) ? (9769099068127387637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2397))))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2])), (arr_6 [i_0 - 4] [i_0 + 3] [i_2])))));
                }
                var_20 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3]))) <= (min((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1])))))));
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_0 - 3]), (((/* implicit */short) arr_8 [i_0] [i_1] [i_0 - 3]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_14);
}
