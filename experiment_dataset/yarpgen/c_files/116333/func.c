/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116333
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])))))));
                var_13 += ((/* implicit */short) (+(((/* implicit */int) min((((arr_3 [i_0 - 2] [i_1] [i_0 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */int) arr_2 [i_2] [(unsigned short)16] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0] [i_2])))))))));
                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0 + 1] [i_0 - 1])) ? (arr_4 [i_2] [i_0] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19937)))))));
            }
            var_15 = ((/* implicit */unsigned short) arr_4 [i_1] [i_0 - 2] [i_0 - 1] [i_0 + 1]);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_6 [i_3])) <= (6219606075320606714LL)));
        var_16 = ((/* implicit */unsigned int) (((~(arr_6 [(unsigned char)9]))) == (((/* implicit */int) arr_0 [i_3]))));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((max((arr_10 [i_4]), ((_Bool)0))), (max((arr_10 [i_4]), (arr_10 [i_4])))));
        var_18 = ((/* implicit */unsigned char) ((-5858054530207882101LL) != (6219606075320606725LL)));
    }
}
