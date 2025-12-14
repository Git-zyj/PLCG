/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138816
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
    var_17 ^= (~((~(1536283420U))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((short) (+(arr_0 [i_0] [5])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (var_0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) / (arr_0 [i_1 + 1] [i_1 + 1]))) : (((((/* implicit */int) (short)0)) / ((~(((/* implicit */int) arr_5 [i_1 - 1]))))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (~(((/* implicit */int) var_2)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_15)) : (9)))) && (((/* implicit */_Bool) ((short) arr_10 [i_2])))));
        var_19 += ((/* implicit */unsigned int) var_9);
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_3] [23] = ((/* implicit */unsigned int) -1528085407);
                        arr_19 [i_3 - 1] [i_3] [i_3 - 1] [i_4] [i_4] |= ((/* implicit */short) (~(((/* implicit */int) ((short) var_5)))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((var_3) == (((/* implicit */int) var_7))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11)))))))));
}
