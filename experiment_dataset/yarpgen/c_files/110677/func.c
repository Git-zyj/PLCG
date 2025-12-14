/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110677
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
    var_15 = ((/* implicit */unsigned short) (!(((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)94)) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (max((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) : (arr_3 [i_0] [i_1 + 1] [i_0]))) - (157)))));
                    var_16 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_4 [i_0] [i_1 - 2]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) -2038735070)), (var_2))) : (((/* implicit */long long int) var_9)))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -2038735070))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) max((((unsigned char) arr_6 [i_0] [i_0] [i_0])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) -2038735070)) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
    var_18 = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2038735068))))))));
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 2825648227988379364ULL)))))), (min((((/* implicit */unsigned long long int) var_10)), (var_13)))));
}
