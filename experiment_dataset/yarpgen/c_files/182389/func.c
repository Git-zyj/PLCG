/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182389
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
    var_10 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((var_3), (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) (_Bool)1))));
    var_11 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4408)) ? (((/* implicit */int) (unsigned short)61127)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) (unsigned short)4409))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)61127))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_7))) ? (min((arr_3 [i_0]), (arr_3 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_3 [i_1 - 2])))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                var_13 = ((/* implicit */int) (~(((unsigned long long int) min((9018462826225154358ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                arr_9 [i_0] [i_2] [i_2] = ((/* implicit */int) var_6);
            }
            arr_10 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_4 [i_1 - 2])), (arr_3 [i_1 - 2])));
        }
        arr_11 [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!((_Bool)1)))), ((unsigned short)61127)));
        var_15 |= ((/* implicit */_Bool) var_5);
    }
}
