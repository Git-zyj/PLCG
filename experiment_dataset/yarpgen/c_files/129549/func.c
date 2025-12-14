/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129549
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-27752)))) : ((+(((/* implicit */int) (unsigned short)49563))))));
            arr_8 [(signed char)17] = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]));
        }
        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)83))))) : (((/* implicit */int) ((short) arr_1 [i_0])))))));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) min((((/* implicit */int) max((var_7), (arr_9 [i_2])))), (max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_2 [i_2] [i_2]))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [(short)13] [i_2])), ((-(((/* implicit */int) (unsigned char)172))))))) > ((+(((unsigned int) var_6))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)97)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52968)))))))) ? (((/* implicit */int) ((unsigned char) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-98)))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_0 [i_2])))))))));
        arr_13 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-84)))) >= (((/* implicit */int) var_18))));
    }
    var_23 += ((/* implicit */signed char) (((+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_3)) - (30445))))))) != (min((((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)18)))), (((/* implicit */int) var_14))))));
}
