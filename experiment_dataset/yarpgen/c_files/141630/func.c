/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141630
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) 836610035)) - (13045495164196558390ULL))), (13045495164196558390ULL)));
        arr_2 [i_0] = ((/* implicit */int) 13045495164196558390ULL);
    }
    var_20 = ((/* implicit */int) var_12);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned short)50956))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) 4294965248U);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((var_6), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) var_12))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1] [i_2] [(_Bool)1]))) ? ((~(((/* implicit */int) arr_3 [15] [15])))) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))))));
        }
        arr_9 [i_1] [i_1] &= ((/* implicit */_Bool) max((((825875410U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))), (((unsigned int) arr_3 [i_1] [i_1]))));
    }
}
