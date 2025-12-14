/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176666
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
    var_14 &= ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) var_12);
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_9))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [4LL] [i_0 - 2])) ^ (((/* implicit */int) var_0))));
        arr_3 [(short)8] |= ((/* implicit */int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_3] [i_4]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24888)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2341966649U))))));
                        arr_14 [i_1 + 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 2]))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-27))));
            arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 + 1])) << (((/* implicit */int) arr_11 [i_2]))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_19 [i_1] [i_5] = ((((/* implicit */int) arr_1 [i_1] [(_Bool)0])) >= (((/* implicit */int) var_12)));
            arr_20 [i_5] [i_5] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [8ULL] [i_1 + 1]))) / (((arr_18 [i_1 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        }
        arr_21 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) & (arr_8 [i_1 - 2])));
        arr_22 [i_1] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_1] [i_1 + 2] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) var_0)) - (64787))))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
        arr_23 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) | (-8983982035555877780LL));
    }
    var_19 = ((/* implicit */int) max((var_19), (((max((((/* implicit */int) var_9)), (var_4))) >> (((((/* implicit */int) var_6)) - (24239)))))));
}
