/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139106
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))));
                        arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_3]))) : (arr_0 [i_0])));
                        arr_12 [i_3] [i_1] [4ULL] = ((/* implicit */unsigned short) var_12);
                        var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (10045692835786789961ULL)));
                    }
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 8401051237922761651ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (-1LL)));
                }
            } 
        } 
    }
}
