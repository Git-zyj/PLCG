/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138393
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_2] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)2] [i_1] [i_2] [i_2])))));
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_14 &= var_11;
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_0 [i_2] [i_3]))));
                        }
                    } 
                } 
            }
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_5 [i_1] [i_1] [i_0] [i_0])))))));
        }
        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) - (arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : ((-(arr_0 [i_0] [7ULL])))));
    }
    var_17 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_1));
}
