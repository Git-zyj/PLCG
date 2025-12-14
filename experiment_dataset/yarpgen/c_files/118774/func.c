/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118774
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 &= ((/* implicit */unsigned long long int) 421868769);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 421868765)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (+(-13))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((int) arr_6 [i_2] [i_0])))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) 4224336887U));
            }
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 12636591810325542506ULL))))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned char)77))));
            var_21 = ((/* implicit */short) ((unsigned char) (unsigned short)40140));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [i_0])) : (12636591810325542487ULL)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
        var_22 = ((/* implicit */signed char) arr_4 [i_0]);
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_14))));
    var_24 = ((/* implicit */_Bool) var_11);
}
