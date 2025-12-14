/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161776
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >= ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((-1501587823) / (((/* implicit */int) (short)-21129))))))))));
        var_15 = ((/* implicit */unsigned int) var_9);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 ^= ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_4 [i_1] [(signed char)0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */int) (short)21128);
            var_17 -= ((/* implicit */unsigned int) (+(min(((+(arr_8 [i_2] [i_2 + 2] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1])))))))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)21122))))))));
        var_18 ^= ((/* implicit */signed char) ((((arr_8 [i_1] [4LL] [i_1]) / (((/* implicit */unsigned long long int) var_8)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_3] [i_3]))));
        var_19 = ((/* implicit */signed char) ((unsigned int) (unsigned char)1));
    }
}
