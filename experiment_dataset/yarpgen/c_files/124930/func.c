/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124930
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((max((var_10), (((/* implicit */long long int) var_13)))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 70368677068800LL)) ? (((/* implicit */long long int) -570888249)) : (var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1325))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)57)), (var_13))))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)677), (((/* implicit */short) (unsigned char)116))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)27371)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) : (((/* implicit */int) (short)-686))));
        var_18 = ((/* implicit */long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (8028927412690946LL) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)677)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32944)))))) : (((var_7) ? (((/* implicit */long long int) arr_1 [i_0])) : (1947342955575679467LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(short)11] [i_1 - 1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1 - 2]))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */short) var_13);
                var_22 = ((/* implicit */signed char) arr_0 [i_1 - 2]);
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1328)))));
                arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1]))));
            }
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-1328))));
                var_25 = (!(((/* implicit */_Bool) ((70368677068790LL) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3])))))));
                var_26 = ((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 2]);
                var_27 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1]))));
                var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_0] [7ULL])) ? (((/* implicit */unsigned int) var_14)) : (arr_3 [i_0] [i_0])))));
            }
            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((70368677068790LL) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)45246)) : (((/* implicit */int) (signed char)120)))))));
                var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1])) ? (var_9) : ((-9223372036854775807LL - 1LL))));
            }
        }
    }
    var_30 = ((/* implicit */short) var_9);
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)57))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1325))) : (var_9)))))) ? (min((var_9), (((/* implicit */long long int) (signed char)-32)))) : (((long long int) (-(((/* implicit */int) var_13)))))));
}
