/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187724
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (arr_2 [i_0 - 1])));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned int) ((signed char) (short)(-32767 - 1))));
        var_16 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [(short)6] [(short)1]) : (((/* implicit */unsigned int) arr_2 [i_0]))))) ? ((~(arr_2 [i_0]))) : (((arr_2 [i_0]) >> (((4266721852U) - (4266721850U)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) : (arr_7 [i_0 + 1])));
            var_18 = ((/* implicit */unsigned int) arr_2 [i_0]);
            arr_8 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)5269))));
            var_19 = ((/* implicit */signed char) ((arr_0 [i_0 - 1] [i_1]) > (arr_2 [i_0 + 1])));
        }
    }
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (~(-4284965994523221563LL))));
}
