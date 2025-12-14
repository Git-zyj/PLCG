/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1235
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((long long int) var_16));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)7098)) : (((/* implicit */int) (short)-14638))))) <= (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_9 [6] [i_1] [i_1] [6] = (!(var_16));
                arr_10 [9ULL] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned char) var_6));
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_1))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_13 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) var_5));
                var_21 += ((/* implicit */int) var_17);
                var_22 = ((/* implicit */unsigned int) ((signed char) (unsigned char)255));
                arr_14 [i_0] [(short)0] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))));
            }
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) & (17251332433062500909ULL)));
                var_24 ^= ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8)));
                arr_18 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) var_5)))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (_Bool)1))))));
                arr_23 [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
                var_26 = (~(var_6));
                var_27 = ((((((/* implicit */int) var_8)) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6));
            }
            var_28 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_14)));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))));
            var_30 = ((1195411640647050707ULL) == (17251332433062500909ULL));
        }
        var_31 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) && (var_12)));
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2304330506U)) ? (17251332433062500909ULL) : (((/* implicit */unsigned long long int) 0U)))))) + (max((((/* implicit */int) var_4)), (((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((319984483U), (((/* implicit */unsigned int) -992775933))))) ? (min(((-(((/* implicit */int) var_8)))), ((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((var_14) && (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (109)))))))))));
    var_35 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))))));
}
