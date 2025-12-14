/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122059
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
    var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (8110812187272971141LL) : (((/* implicit */long long int) -780768303)))), (((/* implicit */long long int) 780768314))))) ? (var_7) : (((((((/* implicit */int) ((short) var_2))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10082)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */short) ((unsigned int) arr_0 [i_0 + 2]));
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 2])) * (((/* implicit */int) arr_0 [i_0 + 2]))));
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) ((unsigned long long int) -2052927827));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_4 [i_1])), (986717551508141574ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) (short)-18505)) : ((+(((/* implicit */int) arr_5 [i_1]))))));
        arr_7 [i_1] &= ((/* implicit */short) (-((+((~(((/* implicit */int) arr_5 [i_1]))))))));
        var_15 = min((-780768310), (((/* implicit */int) (unsigned short)65535)));
        var_16 += ((/* implicit */int) arr_5 [i_1]);
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_17 ^= ((/* implicit */short) min(((~(((/* implicit */int) ((_Bool) arr_9 [(short)16] [i_2 + 3]))))), (min((((arr_8 [i_2 + 1] [i_2 - 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_9 [(short)16] [i_2 + 2])) ? (((/* implicit */int) (short)10767)) : (((/* implicit */int) (short)11373)))) + (((/* implicit */int) max((arr_9 [(signed char)0] [i_2 + 2]), (((/* implicit */unsigned short) arr_8 [i_2 + 1] [i_2 + 2]))))))) != (((/* implicit */int) (unsigned char)81)))))));
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4])) : (918220493671240805ULL)))) ? (((/* implicit */int) arr_13 [i_4] [i_3 - 3] [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) (signed char)16)))), (((/* implicit */int) arr_8 [i_2 + 3] [i_2 + 2]))));
                    var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -780768303)) ? (((/* implicit */int) arr_9 [i_2] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_11 [i_2 + 1] [i_2 + 2]);
    }
    var_22 = ((/* implicit */int) ((short) var_7));
    var_23 = ((/* implicit */signed char) var_1);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & ((+(((long long int) (unsigned short)51825))))));
}
