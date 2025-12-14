/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130860
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
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -989453043589672527LL)) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_12)))));
    var_19 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) -989453043589672531LL)) ? (((/* implicit */int) (unsigned char)43)) : (1326026720)))), (((((/* implicit */_Bool) 2147483647)) ? (var_5) : (((/* implicit */long long int) 0U)))))), (((/* implicit */long long int) (unsigned char)57))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (arr_2 [i_0])));
        var_21 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) (short)-9645))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_23 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)43)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (arr_6 [i_1]))))) == (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (0LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)219)) % (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)190)), (arr_5 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))) : (492581209243648ULL)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (unsigned short)63571)) - (63552)))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23278)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_8 [i_2]))));
    }
}
