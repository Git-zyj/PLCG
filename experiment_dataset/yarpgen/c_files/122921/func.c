/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122921
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_11 -= (short)(-32767 - 1);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [(unsigned short)12])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            var_12 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_13 = arr_0 [i_0];
            var_14 ^= ((/* implicit */_Bool) (+(arr_7 [7U] [i_0] [10ULL])));
        }
        var_15 = ((/* implicit */_Bool) ((int) arr_0 [(_Bool)1]));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) ((288195191779622912ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92)))));
        var_16 -= ((/* implicit */unsigned short) var_3);
    }
    var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
    var_18 -= ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) | (var_10))), (((/* implicit */unsigned int) var_5))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((unsigned int) ((288195191779622912ULL) | (288195191779622907ULL)))))))));
}
