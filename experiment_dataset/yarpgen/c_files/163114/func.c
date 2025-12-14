/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163114
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned int) var_18);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_0 [12LL]))));
        var_21 *= ((/* implicit */unsigned int) var_13);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_2 [i_0] [(_Bool)1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (8801856996293293967LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26897))))), (((/* implicit */long long int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_11)) + (2147483647))) >> (((arr_3 [i_1]) + (677556777))))) % (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) + (var_15)))))));
        var_23 = ((/* implicit */_Bool) (-(arr_3 [i_1])));
        var_24 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)45)), (arr_4 [i_1] [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_25 += ((/* implicit */long long int) (-(((var_14) - (((/* implicit */int) (unsigned char)45))))));
        arr_8 [i_2] [i_2] = ((((/* implicit */int) var_6)) & ((~(arr_3 [i_2]))));
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned char)206))))) : (min((arr_7 [i_2]), (arr_7 [i_2])))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_13 [(short)19] |= (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_3]))))) || (((/* implicit */_Bool) arr_10 [i_3] [i_3]))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((int) (unsigned char)197))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16859))))) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) arr_10 [14ULL] [i_5])))))));
            var_27 = ((/* implicit */_Bool) var_17);
            var_28 = (~(max((arr_9 [i_5 + 2] [(_Bool)0]), (((/* implicit */unsigned long long int) 711940984)))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((-(arr_9 [i_4] [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        }
        for (short i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            arr_22 [i_4] [i_6] = ((/* implicit */unsigned short) (!((!(arr_12 [i_6 + 1] [i_6])))));
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (max(((~(arr_16 [i_4] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_4] [i_7 - 1] [i_7] [i_4])) < (((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 2])))))))));
                arr_25 [i_6] = ((((/* implicit */int) (unsigned char)54)) - (((/* implicit */int) (short)-10702)));
                var_31 = ((/* implicit */unsigned short) arr_11 [i_4]);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_11 [i_4]))));
            }
            var_33 = ((/* implicit */unsigned long long int) (!(var_8)));
        }
        arr_26 [i_4] = 3699249797575353113ULL;
    }
    var_34 = ((/* implicit */unsigned long long int) var_13);
}
