/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122785
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) max((arr_0 [i_0] [(short)14]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1400247778) : (((/* implicit */int) var_2))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2]);
                    arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) arr_2 [i_0]))) + (((((/* implicit */_Bool) max((var_2), (arr_5 [i_2] [i_2] [i_2])))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (9223372036854775789LL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1400247771)))) || (((/* implicit */_Bool) 1400247778))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_3] [i_2] [5U])) : (((/* implicit */int) var_1))));
                        var_12 -= ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) ((short) var_6))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1400247771)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_1]))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */short) min(((((-(4033367819U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_2)) % (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1))))))))));
    var_14 = var_0;
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (1400247767)));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -114306197)) && (((/* implicit */_Bool) -1400247767)))) ? (((/* implicit */int) min((arr_6 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) arr_3 [i_4]))))) : ((-(((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))));
        arr_20 [i_4] = ((short) max(((short)-15852), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4] [i_4])) > (((/* implicit */int) arr_18 [i_4])))))));
    }
}
