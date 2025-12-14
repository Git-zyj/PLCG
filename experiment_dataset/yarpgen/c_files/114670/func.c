/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114670
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
    var_11 = ((/* implicit */short) ((unsigned short) var_4));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned short) ((((arr_0 [i_0]) >> (((arr_1 [(short)11] [i_0]) - (arr_1 [i_0] [i_0]))))) | (((/* implicit */int) ((short) arr_0 [i_0])))));
        var_13 = ((/* implicit */int) (+(arr_1 [i_0] [7])));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) (short)12))))), (((unsigned long long int) arr_4 [(_Bool)1] [i_1])));
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_3 [8U])) << (((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_15 &= ((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_3 [i_2]))));
        var_16 = ((/* implicit */long long int) (+(2716354360373694434ULL)));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)37393))))) == (2716354360373694434ULL));
            var_17 = ((/* implicit */unsigned long long int) var_9);
        }
        arr_12 [i_2] = arr_10 [i_2] [i_2];
    }
    var_18 = ((/* implicit */int) var_4);
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (short)-13955)) + (2147483647))) << (((((/* implicit */int) var_5)) - (153)))))))) : ((+(((long long int) var_1))))));
}
