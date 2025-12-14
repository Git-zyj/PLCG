/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145840
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
    var_16 *= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned char) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) arr_4 [i_1] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((signed char) (unsigned short)33758));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_4]))));
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_11 [i_1] [i_3] [i_2] [i_3])));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_4 [i_1] [i_0])))))))));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)(-32767 - 1))))) != (((/* implicit */int) min((((/* implicit */short) (unsigned char)103)), ((short)-9587))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_5])))))));
        }
        var_25 ^= ((/* implicit */unsigned char) ((_Bool) (-9223372036854775807LL - 1LL)));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]))))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
}
