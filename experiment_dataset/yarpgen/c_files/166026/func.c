/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166026
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_16 = (+(min((arr_0 [i_0 - 3] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(max((((5157489889719332103LL) | (2923164935639399943LL))), (min((75719018538369173LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_17 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_3 [(unsigned char)11] [i_1])))) && (((/* implicit */_Bool) ((unsigned int) arr_5 [i_1])))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_18 = (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) max((-573627775), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_9 [i_3 + 1])))) : (573627775));
                        arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_8 [i_4]);
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26540)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) ? (min((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_1])), (231003262U)))))) : (((/* implicit */long long int) (~(arr_7 [i_3 - 1] [i_3 + 1] [i_3])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            arr_18 [i_1] [(unsigned short)2] [i_3] [i_3 + 1] [i_4] [i_5 - 1] = ((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) arr_7 [i_4] [i_2] [(unsigned short)13])));
                            var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) arr_13 [i_5 + 1] [i_2])) : (arr_17 [i_5] [i_4] [i_4] [i_3] [i_2] [i_1])))));
                        }
                        for (int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_6] [i_3] [i_3] [i_6] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2])), (var_3))), (((/* implicit */unsigned long long int) (unsigned short)27942))));
                            var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 573627774)), (var_3)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) max(((unsigned char)169), (var_4)))))))));
}
