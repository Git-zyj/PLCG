/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162135
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
    var_15 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
        arr_5 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (532676608U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -1)))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        arr_9 [i_1] [i_1] = (((!(((/* implicit */_Bool) -1)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) var_6))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((_Bool) arr_11 [i_2] [i_2])))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(var_11)))))) && (((/* implicit */_Bool) ((unsigned int) ((long long int) (short)5222))))));
        var_18 = min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-5232)) : (((/* implicit */int) (unsigned char)69)))))), (((int) arr_10 [i_2])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) arr_7 [i_3])))), (((/* implicit */int) (_Bool)1))));
        var_20 = (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_13 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59027)))))));
        var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_2 [i_3]) ? (arr_13 [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237))))) : (((((/* implicit */_Bool) -537470205)) ? (((/* implicit */int) arr_1 [i_3])) : (-989153465))))), (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_10 [i_3]), ((signed char)127)))) ? ((+(13100744743888085037ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_23 = ((/* implicit */int) ((signed char) arr_0 [i_3] [i_4]));
            arr_17 [i_3] = ((/* implicit */signed char) arr_8 [i_4]);
        }
    }
    var_24 = ((/* implicit */int) (+((+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
}
