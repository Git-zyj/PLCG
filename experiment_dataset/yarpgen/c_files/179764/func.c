/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179764
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
    var_14 = ((/* implicit */unsigned char) ((((var_0) << (((/* implicit */int) ((_Bool) var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 8796093022207LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) (signed char)-28);
            var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                arr_9 [i_2] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [2ULL] [i_0]))) : (min((((/* implicit */long long int) var_4)), (arr_5 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)-28)))))) : (min((((((/* implicit */int) arr_1 [i_0])) >> (((18446744073709551615ULL) - (18446744073709551588ULL))))), (((/* implicit */int) arr_1 [i_0]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_19 -= ((/* implicit */unsigned short) (!(((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                var_20 = ((((((/* implicit */int) arr_2 [12ULL])) + (2147483647))) << (((((/* implicit */int) arr_1 [6ULL])) - (21368))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (arr_5 [i_1] [i_1] [i_3]) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) arr_2 [(unsigned short)4])) : ((~(((/* implicit */int) arr_1 [(short)0])))))))));
                var_22 *= ((/* implicit */unsigned long long int) (-(var_2)));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_17 [i_0] [(_Bool)1] [i_5] [(_Bool)1] [i_4] [i_5]);
                        arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned int) var_10);
}
