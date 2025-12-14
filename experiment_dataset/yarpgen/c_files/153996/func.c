/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153996
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (var_5))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    var_11 = ((/* implicit */unsigned int) ((((var_4) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_7)) : (var_3)))) ? (((/* implicit */int) var_0)) : (var_7))) + (9787)))));
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        arr_9 [i_2] [i_1] [13ULL] [(_Bool)1] [14ULL] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_2 [i_0 - 2]))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) -5776127899889757716LL))) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_2 - 1] [i_2] [i_2])) : ((~(((/* implicit */int) var_0))))));
                        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
                        arr_10 [i_2] [i_2] [i_2] [18LL] [i_2] = ((/* implicit */unsigned int) (unsigned short)65535);
                    }
                    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1944966523U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_0))))) ? (((arr_8 [13] [i_1] [i_1] [i_1] [(signed char)18]) ? (arr_4 [(short)19] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (4142709997717043800LL)))))));
                    arr_11 [(short)15] [i_2] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [(unsigned short)3] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (arr_3 [i_2 - 1] [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_1] [(unsigned short)0])) : (((((/* implicit */_Bool) ((long long int) var_6))) ? (min((0U), (((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])))))));
                    var_16 -= ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((var_4) + (((/* implicit */int) arr_8 [3LL] [16LL] [i_1] [16ULL] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [(short)14] [i_0 - 1] [(_Bool)1])) >= (arr_4 [i_0] [i_0 + 1] [i_0]))))));
                }
            } 
        } 
    } 
}
