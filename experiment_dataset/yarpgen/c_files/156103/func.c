/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156103
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) var_11);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((signed char) arr_1 [i_0] [i_1]));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_1))))))));
                var_17 &= ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_4 [i_1] [i_0])))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            var_19 *= ((/* implicit */signed char) ((short) arr_6 [i_3]));
            arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3 - 1])) * (((/* implicit */int) arr_11 [i_3 + 1]))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2]))));
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned int) var_5);
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned char)216)))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_13 [i_2] [i_4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_2]))) ^ (arr_9 [i_2] [i_2]))) : (min((((/* implicit */unsigned int) arr_7 [i_2])), (var_6)))))))))));
        }
        var_23 = ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */int) (unsigned char)216)) <= (((/* implicit */int) arr_10 [i_2] [i_2] [(unsigned short)21])))))));
        var_24 = ((/* implicit */short) (+((-((~(arr_9 [i_2] [i_2])))))));
        var_25 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) <= (((/* implicit */int) arr_8 [i_2]))))))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), ((unsigned char)39))))));
    }
}
