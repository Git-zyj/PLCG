/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127023
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (max((var_3), (var_11))) : (((/* implicit */unsigned long long int) max((19), (((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) max(((signed char)-8), (var_8))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-8)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (signed char)-8))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)35551)));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) 0U);
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
            }
        }
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55970))) : (arr_0 [i_0 + 3])))))) ? (var_6) : (min((((/* implicit */int) (unsigned char)42)), (((((/* implicit */int) (_Bool)1)) | (var_6)))))));
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-108)), ((-(var_1)))));
}
