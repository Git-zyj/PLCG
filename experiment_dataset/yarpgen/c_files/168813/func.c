/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168813
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
    var_17 = ((/* implicit */long long int) (short)6901);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) 235612677);
        var_19 = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) & (arr_0 [i_0 + 1] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) / (((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) * (((/* implicit */int) (unsigned short)7)))))))));
            var_22 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) << (((((((/* implicit */_Bool) (unsigned short)49556)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)119)))) + (30883)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) << (((((((((/* implicit */_Bool) (unsigned short)49556)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)119)))) + (30883))) - (46716))))));
            arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) (unsigned short)58276)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) | (((/* implicit */int) (unsigned char)167))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_0 [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_23 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1857663804)) && (((/* implicit */_Bool) 1501361452)))) ? (((/* implicit */int) (unsigned short)2032)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_3])) && (((/* implicit */_Bool) (unsigned char)132)))))));
            var_24 = arr_9 [i_1] [i_1];
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)137)) - (((/* implicit */int) arr_4 [(short)1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)200)))) >= (((((/* implicit */int) (unsigned char)249)) >> (((((/* implicit */int) arr_6 [i_1] [(short)16])) + (30263))))))))));
    }
}
