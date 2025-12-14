/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138784
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) 455951674)) + (406043449U)));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)251))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_1 [i_0 + 3]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) 3888923846U);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62926))) : (3888923846U))) != (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))))))) < (255182548U)));
        var_26 = ((/* implicit */long long int) 0U);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 406043449U))) ? (406043448U) : (9U)))) ? (((long long int) ((((/* implicit */_Bool) 406043426U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25032))) : (3888923892U)))) : (((/* implicit */long long int) arr_3 [i_1]))));
    }
    for (int i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        var_28 *= ((/* implicit */unsigned int) 578624401703114682ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (406043426U) : (1344290744U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17302)))))) : ((+(arr_9 [i_3] [i_2])))));
            var_30 = ((/* implicit */unsigned char) arr_6 [i_2 - 2]);
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)-5282))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))) : (((int) 9223372036854775807LL))));
            var_32 = ((/* implicit */unsigned short) arr_8 [i_3]);
        }
    }
    var_33 = ((/* implicit */short) (~(var_11)));
}
