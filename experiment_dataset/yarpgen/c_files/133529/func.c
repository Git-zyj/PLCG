/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133529
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
    var_16 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)136))));
        var_19 *= ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) : (((/* implicit */int) (short)-5941)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)116)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) << (((max((1766040819), (((/* implicit */int) (_Bool)1)))) - (1766040797)))))) && (((/* implicit */_Bool) ((arr_3 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))));
        var_21 -= ((/* implicit */unsigned short) (((((_Bool)1) ? (4746251128973321541ULL) : (((/* implicit */unsigned long long int) -1129996963)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_22 = ((/* implicit */long long int) arr_5 [(unsigned char)21]);
        var_23 ^= ((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_24 = (short)26548;
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) ? (max((arr_9 [i_2 + 1]), (arr_9 [i_2 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (arr_8 [i_2 - 1]) : (((((/* implicit */_Bool) (short)-17833)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((unsigned short) 0LL));
    }
    var_26 = ((/* implicit */short) var_13);
}
