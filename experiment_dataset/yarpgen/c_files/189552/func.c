/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189552
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (unsigned short)8698);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_0)))) ? (((/* implicit */int) min((arr_0 [i_0] [7]), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) (((((-(var_6))) / (((/* implicit */unsigned long long int) (+(var_12)))))) > (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) <= ((-(((/* implicit */int) arr_3 [i_1]))))));
            var_19 = ((/* implicit */long long int) var_11);
            arr_7 [i_1] [i_1] = (-(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_2 [i_2]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_18 [i_1] [i_5] [(unsigned short)12] [i_5] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_2)))))) ? (((/* implicit */int) (_Bool)1)) : ((((~(((/* implicit */int) var_9)))) | (((((/* implicit */int) var_11)) | (((/* implicit */int) var_8))))))));
                        var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_11)), ((+(((int) var_12))))));
                    }
                } 
            } 
            arr_19 [i_1] [i_1] [0LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((((/* implicit */long long int) arr_12 [i_1])) != (var_5))))))));
            var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_12 [i_3])) : (arr_15 [(short)10] [i_1] [(short)10] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3])) ? (((/* implicit */long long int) arr_11 [i_1] [i_1 - 2] [i_1] [i_3])) : (var_4))))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        var_22 ^= ((/* implicit */short) (unsigned char)239);
        var_23 = ((/* implicit */long long int) ((int) arr_13 [14LL] [i_6] [i_6]));
        var_24 = ((/* implicit */unsigned short) arr_5 [i_6] [i_6]);
    }
    var_25 = ((/* implicit */unsigned char) var_7);
}
