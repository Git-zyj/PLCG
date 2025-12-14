/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134256
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
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)42428)) | (((((/* implicit */_Bool) ((unsigned char) var_5))) ? ((-(((/* implicit */int) var_12)))) : (var_8)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_21 = var_16;
        var_22 = ((/* implicit */signed char) -1550477129);
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_23 = ((/* implicit */long long int) arr_3 [i_1 - 2]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_9 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) min((-1550477147), ((-(((/* implicit */int) arr_2 [i_1]))))));
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4405308534738163977ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_2 + 2])) ? (arr_0 [i_1 - 2] [i_2 - 1]) : (arr_0 [i_1 - 2] [i_2 + 1])))));
                }
            } 
        } 
        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)189)), ((unsigned short)2047))))) : (((((/* implicit */_Bool) 761347448U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63506))) : (761347437U)))));
        arr_10 [i_1] |= ((/* implicit */unsigned int) -7509086792195152270LL);
    }
}
