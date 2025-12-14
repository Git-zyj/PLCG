/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172665
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
    var_19 *= ((/* implicit */unsigned short) var_0);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned short)1023))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((unsigned int) (_Bool)1))))) + (((arr_1 [i_0] [i_0 - 1]) ? (max((((/* implicit */unsigned long long int) (short)3072)), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))))));
        var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((arr_1 [i_0] [i_0]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)3089)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [(signed char)8] [i_1]))))), (min((arr_2 [10U]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3))))))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((min((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [0]))))))) / (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [(signed char)12]))))) : (arr_3 [(unsigned short)4] [(unsigned short)4]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_2])) ? ((+(((/* implicit */int) (unsigned short)1045)))) : ((+(((/* implicit */int) (unsigned short)64513))))))) && (((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)64536))))))))))));
            var_26 -= ((_Bool) ((((/* implicit */_Bool) min((arr_5 [(signed char)12] [(signed char)12] [i_2]), (((/* implicit */unsigned int) arr_7 [i_2]))))) ? (min((((/* implicit */long long int) var_17)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3101)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)192)))))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_27 *= ((/* implicit */signed char) max(((~(var_6))), (((/* implicit */unsigned int) (short)-30316))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(var_8))))));
        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1019))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_6 [12LL]))) <= (var_13))) ? (max((arr_5 [(unsigned short)14] [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned short)1023)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [0U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))))));
    }
}
