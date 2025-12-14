/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107608
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_16 = (+(max((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_2 [i_0]))), (((/* implicit */long long int) min((2258278453U), (((/* implicit */unsigned int) var_9))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                arr_8 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -20880557968884017LL)) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 + 2] [i_1]))))) == (arr_2 [i_0])))) : (((((/* implicit */int) (unsigned short)64600)) % (arr_7 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [i_2])))));
                var_17 = ((/* implicit */unsigned int) var_1);
            }
            arr_9 [i_1] [i_1] [(unsigned short)18] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2258278453U)) ? (arr_1 [2] [i_0]) : (((/* implicit */int) arr_0 [i_0] [7LL]))))) ? (((/* implicit */unsigned int) -1272585616)) : (((arr_6 [i_0]) & (1375402714U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_0])) & ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (arr_10 [i_3] [(unsigned char)5]) : (((/* implicit */unsigned int) arr_1 [(unsigned short)16] [i_3]))))));
        arr_13 [i_3] [i_3] = ((((/* implicit */_Bool) min(((+(-3659790908450867946LL))), (((/* implicit */long long int) (-(2036688838U))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) < (((var_9) / (((/* implicit */int) arr_3 [i_3] [i_3]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)17]))) == (3659790908450867932LL)))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_1 [i_3] [i_3])), (var_0)));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3659790908450867946LL)) ? (((/* implicit */int) (unsigned short)62844)) : (((/* implicit */int) (unsigned short)62650)))), (((((((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) % (((/* implicit */int) (unsigned short)62866)))) << (((((arr_1 [17] [i_3]) + (933684591))) - (25)))))));
    }
    var_19 = ((/* implicit */signed char) min((var_2), (((((/* implicit */_Bool) max((13250339), (((/* implicit */int) (unsigned short)62838))))) ? (-13250339) : (var_2)))));
}
