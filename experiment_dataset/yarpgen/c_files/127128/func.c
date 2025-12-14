/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127128
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (short)-14604);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 = max((((/* implicit */int) min((arr_5 [i_0] [(signed char)8] [i_0 - 3]), (((/* implicit */unsigned short) (signed char)57))))), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (short)14602)) : (((/* implicit */int) (signed char)55)))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) (short)14589))))), (((((/* implicit */_Bool) (signed char)34)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0 - 3] [i_0] [i_0 + 2]), (arr_5 [i_0 - 1] [i_0] [i_0 - 1]))))) : (min((((/* implicit */long long int) (signed char)53)), (max((-1LL), (((/* implicit */long long int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_14 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-55)), (-1LL)));
                var_15 = ((/* implicit */long long int) (signed char)-56);
            }
        }
    }
    var_16 = ((/* implicit */unsigned char) var_5);
}
