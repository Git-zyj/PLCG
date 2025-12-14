/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128543
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
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_8);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) var_1);
            arr_5 [i_1] [i_1] = ((arr_3 [i_0]) << (((((/* implicit */int) (signed char)-40)) + (60))));
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
        }
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (63488U) : (((/* implicit */unsigned int) arr_0 [i_0]))))) || (((/* implicit */_Bool) max((var_5), (var_9))))))) >> (((((((unsigned int) var_5)) + ((+(393109108U))))) - (3396821149U)))));
    }
    for (short i_2 = 4; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            arr_15 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)2016)) : (((/* implicit */int) arr_10 [i_2 - 4] [i_3 + 1])))), ((-(((((/* implicit */_Bool) arr_12 [i_2 - 2])) ? (261888) : (((/* implicit */int) arr_14 [0U]))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_20 [i_2 + 1] [i_5 - 2] [i_5] [i_4 - 2]), (arr_20 [i_2 + 1] [i_5 - 2] [i_5] [i_4 + 1])))) ? (arr_20 [i_2 - 4] [i_5 - 1] [i_5] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))))));
                            var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_19 [i_2 + 2] [i_5 + 1])) > (((/* implicit */int) arr_11 [i_2 + 1] [i_5 - 2] [i_4 - 3]))))));
                        }
                    } 
                } 
            } 
        }
        arr_22 [i_2 + 1] &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 - 4])))))));
        arr_23 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (63488U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))))))))));
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_12 [i_2 + 1]) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 2]))))))))));
        var_18 = ((/* implicit */unsigned char) var_2);
    }
    var_19 = ((/* implicit */unsigned int) var_10);
}
