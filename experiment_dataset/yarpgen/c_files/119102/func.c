/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119102
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
    var_19 = ((/* implicit */int) var_9);
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_3) - (2303749515U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6)));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                var_21 = ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (3712987013U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4343)))));
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_0 [i_2 - 1]) ? (((/* implicit */long long int) arr_5 [i_2 - 2])) : (var_10)))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))))) ? (arr_11 [i_2] [i_2 - 1] [i_2] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_2])) == (((/* implicit */int) var_14))))))))));
                arr_12 [i_1] = ((/* implicit */signed char) (-(var_8)));
                arr_13 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_3 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_3 - 1])))) % ((-(((/* implicit */int) arr_7 [i_1] [i_2] [i_2]))))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))) ? (arr_5 [i_1]) : (268434944U)));
                arr_16 [i_1] [i_2] [i_4] [i_4] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2 - 2]))));
                arr_17 [i_1] [i_2 + 1] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_1] [i_1]))));
            }
            var_24 = ((/* implicit */unsigned char) ((unsigned int) var_1));
            arr_18 [(_Bool)1] = ((/* implicit */unsigned short) 99435621U);
        }
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), ((+(arr_11 [i_1] [i_1] [i_1] [i_1])))));
    }
}
