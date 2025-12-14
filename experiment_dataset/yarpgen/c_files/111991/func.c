/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111991
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
    var_16 = ((/* implicit */int) (unsigned short)49751);
    var_17 &= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (18005602416459776ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_1 [i_1])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_4 [i_0])))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) / (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) var_15))))), (max((var_14), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))) : (((((/* implicit */unsigned int) ((var_1) + (arr_0 [i_0] [i_0])))) * (max((4194300U), (((/* implicit */unsigned int) var_2))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) min((arr_4 [i_0]), (arr_4 [i_0])))), (arr_1 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (min((18005602416459776ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_15)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)57)) << (min((((/* implicit */int) var_15)), ((+(((/* implicit */int) (_Bool)1))))))));
}
