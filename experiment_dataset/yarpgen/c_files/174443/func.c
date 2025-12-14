/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174443
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
    var_15 += (-(9268686668056502676ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [(signed char)17]);
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (2251799813685247ULL))))));
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((arr_1 [(short)3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 5461385323029746852ULL))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] |= ((/* implicit */short) arr_6 [i_1] [(_Bool)1]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (~(13ULL)));
            var_19 += ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) | (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8))))))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_21 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1]))));
            arr_13 [15LL] [13ULL] [13ULL] = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_12 [i_1] [i_1])))) / (((/* implicit */int) (short)21989))));
        }
        var_22 = ((/* implicit */int) 13ULL);
        var_23 ^= ((/* implicit */signed char) ((((arr_6 [i_1] [i_1]) + (2147483647))) >> (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
    }
}
