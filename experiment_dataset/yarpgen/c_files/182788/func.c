/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182788
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 += ((/* implicit */unsigned short) var_12);
            arr_5 [(unsigned char)7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_3 [(short)14]))))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_19 -= ((/* implicit */signed char) var_14);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))))) : (968563126U)));
                arr_9 [18U] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) 968563126U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_2] [i_1])))) << ((((+(((/* implicit */int) arr_0 [i_0])))) - (67)))))));
            }
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) arr_7 [i_3] [(unsigned short)12] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_1] [i_0] [i_3]))))));
                var_22 = ((/* implicit */_Bool) ((unsigned char) var_0));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_3 [i_1]))));
            }
        }
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 968563105U))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
        var_26 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [17LL])), (var_13)))) && (((/* implicit */_Bool) ((unsigned char) 4294967283U)))))) >= (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)17877)) ? (1950232139U) : (662775174U)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_14)) : (((var_1) / (((/* implicit */int) (unsigned char)206)))))) : (((/* implicit */int) (short)(-32767 - 1)))));
        arr_17 [i_5] = ((/* implicit */signed char) ((unsigned char) 968563126U));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_5] [i_5] [i_5] [i_5])))) : (max((((/* implicit */unsigned int) arr_0 [i_5])), (arr_12 [24])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [7U] [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [0LL] [(unsigned short)18])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) -1839502466250390731LL)) ? (5845295878198394743LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (3326404151U)))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))) >= (var_7))))))))))));
    }
    var_28 = ((/* implicit */_Bool) max((min((2904944068U), (968563151U))), (((/* implicit */unsigned int) ((unsigned char) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15)))))));
}
