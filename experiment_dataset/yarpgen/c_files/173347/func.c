/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173347
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
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_3))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((6794782698377465277ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_15);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) <= (3395054240896780361ULL)))));
                        var_20 = ((/* implicit */unsigned char) (-(arr_1 [i_3])));
                        var_21 += arr_2 [i_1];
                        arr_19 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (11651961375332086338ULL) : (((/* implicit */unsigned long long int) arr_17 [i_1 + 3] [i_2] [i_4] [i_4]))))) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_4])) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_14))))));
                    }
                } 
            } 
        } 
        arr_20 [i_1 + 4] = ((/* implicit */long long int) var_5);
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_24 [i_1 + 1] [i_5] = ((/* implicit */unsigned char) ((arr_15 [i_1 - 1] [i_1 + 4] [i_1] [i_1 - 2]) <= (arr_7 [i_1 + 4] [i_5])));
            arr_25 [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1]))) >= (arr_15 [i_1] [i_1 + 3] [i_1 - 2] [i_1]))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 3395054240896780360ULL))));
        }
    }
    var_24 += ((/* implicit */short) (signed char)-48);
}
