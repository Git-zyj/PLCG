/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176977
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
    var_17 = ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_15))) : (((/* implicit */int) max(((unsigned short)32800), (((/* implicit */unsigned short) (_Bool)1))))))), ((+(((/* implicit */int) var_5)))))))));
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [(unsigned char)16] [6U] = ((/* implicit */int) ((((unsigned long long int) var_5)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3])))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4] [i_2] [i_4] [(unsigned short)14] [i_2])) ? (arr_13 [i_4 + 1] [i_4] [i_2] [i_3] [18ULL] [i_1]) : (arr_13 [i_4 + 1] [i_4] [(_Bool)1] [i_3] [22LL] [(short)10])));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4884511158438559546LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_7))));
                            arr_17 [i_0] [i_1] [i_2] [4U] = ((/* implicit */unsigned int) (!(var_14)));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? (arr_6 [i_0] [i_1] [(short)6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
            var_24 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1] [i_0]);
            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [19] [i_0] [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) 8126464LL)) ? (9915244080881823299ULL) : (4094ULL)))));
        }
        arr_18 [(unsigned short)19] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        var_26 = (+(((/* implicit */int) ((unsigned short) var_16))));
    }
}
