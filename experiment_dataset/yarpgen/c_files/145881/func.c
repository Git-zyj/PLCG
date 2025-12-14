/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145881
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_8);
        arr_3 [(unsigned short)4] = ((/* implicit */signed char) (-(((var_9) ? (((/* implicit */int) var_6)) : (var_13)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_2] [(signed char)1]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) | (arr_0 [(signed char)6])))) ? (min((((/* implicit */unsigned int) -974019323)), (arr_4 [2ULL]))) : (((((/* implicit */_Bool) (short)-8073)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_11 [9] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) arr_9 [i_1] [7U]))))) ? (((arr_5 [i_3] [i_1]) ? (((/* implicit */int) arr_10 [(signed char)7] [i_2] [i_2] [i_1])) : (1337360579))) : ((~(var_3))))), (((((/* implicit */_Bool) arr_10 [i_1] [7] [i_2] [i_3])) ? (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (short)8080)) : (((/* implicit */int) arr_6 [(short)18] [i_1]))))))));
                arr_12 [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_7 [(signed char)16] [i_2]), (((/* implicit */unsigned short) arr_9 [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_1]))))));
                arr_13 [(signed char)1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1164765953))))) % (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1] [i_3]))))));
            }
            arr_14 [i_2] = ((/* implicit */int) ((var_2) << (((((((/* implicit */int) arr_7 [i_2] [i_1])) - (((/* implicit */int) (_Bool)1)))) - (36552)))));
        }
        arr_15 [i_1] = ((/* implicit */unsigned short) max(((~(min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (var_2))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_14))))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_23 [i_1] [4U] [6ULL] [4U] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [(signed char)8] [i_5] [(unsigned short)16] [i_1])) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_4 - 1] [(signed char)12] [(signed char)12] [i_5])), (arr_7 [i_4 - 1] [i_4 - 1]))))));
                    arr_24 [i_5] [i_4] [i_1] = (((_Bool)1) ? (((/* implicit */int) (short)-8073)) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_1])) && (((/* implicit */_Bool) arr_7 [i_4] [i_5]))))))));
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (var_2))))));
        arr_26 [i_1] = (signed char)127;
    }
    var_15 = ((/* implicit */signed char) min(((-(max((var_13), (((/* implicit */int) var_14)))))), (((/* implicit */int) ((short) var_8)))));
    var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) ((67341461) & (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : (var_13))) : (((/* implicit */int) var_10))));
    var_17 = ((/* implicit */signed char) (-(1624509866594232603ULL)));
}
