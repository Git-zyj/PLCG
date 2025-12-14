/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130761
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_9))));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(signed char)13] [1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)39154)) ^ (1848400818))), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0])))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_4))))) & (((arr_1 [i_0 + 1]) & (arr_1 [i_0])))))));
        arr_3 [(short)8] = ((unsigned long long int) ((unsigned short) arr_1 [i_0 + 2]));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_15 += ((/* implicit */_Bool) ((((4256766675603655145ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            arr_10 [14ULL] = ((/* implicit */signed char) (((~(17592186044415ULL))) >> (((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_2 + 1] [1]))) - (25794)))));
        }
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7555)) && (((/* implicit */_Bool) (unsigned short)65533))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1867848034)) || ((_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 4] [i_1] [i_1])) ? (arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3]) : (12674848728931278266ULL))))));
        arr_11 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((17179869183ULL), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46425))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((unsigned short)65527), (((/* implicit */unsigned short) (signed char)118))))), (max(((+(arr_7 [i_1 + 1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_8 [i_1 + 3])))))))));
    }
}
