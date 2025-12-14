/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105395
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)57816))))) + ((~(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [12U])))))));
        arr_4 [6U] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8)))))))));
        arr_5 [i_0] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_6 [i_1]))), (((/* implicit */long long int) arr_17 [i_1 - 1] [i_1 - 1] [19U] [i_2]))))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_17 [i_1] [i_2] [i_3] [i_4])), (arr_6 [i_1]))))) : (((/* implicit */int) min((arr_8 [i_1 - 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53800)) || (((/* implicit */_Bool) 17149903091297586887ULL))))))))));
                        var_18 = ((/* implicit */signed char) min((((((/* implicit */int) arr_10 [i_2] [i_2] [i_3])) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_1] [i_2] [i_3])), (arr_14 [i_3] [i_4])))))), ((((_Bool)1) ? (((/* implicit */int) max((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */short) (_Bool)1))))) : ((-(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_19 [i_2] = ((/* implicit */unsigned short) max((min((arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_2]), (arr_16 [i_2] [(unsigned char)20] [(_Bool)1] [i_1 - 1]))), (((/* implicit */long long int) arr_14 [i_1 - 1] [i_1 - 1]))));
            var_19 = ((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_1 - 1])) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12))))));
            arr_24 [i_1] [i_1 - 1] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1 - 1]))));
        }
        arr_25 [i_1 - 1] = ((/* implicit */unsigned long long int) (unsigned short)27993);
    }
    var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
}
