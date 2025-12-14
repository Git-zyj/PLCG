/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150852
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) 3909941340050897835LL);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_0])))))) & (var_9)));
        var_13 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)120))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) 3909941340050897815LL)) | (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) 3909941340050897816LL)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((_Bool) 3909941340050897811LL));
        var_15 = ((/* implicit */unsigned int) (short)25168);
        var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [2U]))) * (var_9))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(var_4))))));
            var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)80))));
            arr_10 [(unsigned short)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5533436477936763315LL)) ? (863118025U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25168)))));
            arr_11 [i_1] [(short)6] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))));
        }
    }
}
