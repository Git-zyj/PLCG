/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159792
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
    var_10 += ((/* implicit */int) var_9);
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((min((0U), (((4294967295U) - (0U))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned int) min((((15613119427288791528ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / ((-9223372036854775807LL - 1LL)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned int) var_5);
                        var_14 -= var_3;
                        arr_16 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(16252928U)))) / ((-(var_5)))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = arr_9 [i_1];
    }
}
