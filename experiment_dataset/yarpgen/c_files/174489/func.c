/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174489
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [18LL] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((-6117615612371248727LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_13 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */short) min((max((((((/* implicit */_Bool) (unsigned short)1409)) ? (8640032311689341136LL) : (-4126010943737629961LL))), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned short) arr_10 [i_3])), (var_14)))))));
                        var_17 += ((/* implicit */int) var_2);
                    }
                    arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_3] = ((/* implicit */unsigned short) var_7);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [(short)23] [(short)23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_1] [i_1]))) : (var_4)))) ? (((int) arr_0 [i_1])) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
