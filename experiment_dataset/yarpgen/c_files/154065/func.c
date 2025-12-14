/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154065
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
    var_10 = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (signed char)120))))) ? (min((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_1))))), (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (var_7))), (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) var_0);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (arr_6 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                        var_11 = ((/* implicit */short) 962316152);
                        var_12 = ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_13 [i_4] [i_3] [i_0 + 1] [i_3] [i_0 + 1] = ((/* implicit */int) (~(arr_0 [i_0 + 1] [i_0 + 1])));
                            var_13 = ((/* implicit */unsigned int) ((arr_7 [i_3] [i_3] [i_3] [i_0 - 1]) / (arr_7 [i_0] [i_0] [i_2] [i_0 - 1])));
                            var_14 = ((/* implicit */short) arr_3 [i_4] [i_0 + 1] [i_0 + 1]);
                        }
                    }
                } 
            } 
        }
        arr_14 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-120))));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */unsigned int) ((unsigned short) var_7)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_6) <= (((/* implicit */int) (signed char)-40))))))))));
}
