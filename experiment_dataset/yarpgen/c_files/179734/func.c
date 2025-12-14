/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179734
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)51864)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_16)))))))))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_14)) + (63))))), (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((((/* implicit */int) var_4)) >> (((var_0) - (16323010567206398805ULL))));
                    arr_8 [(signed char)5] [i_2] [i_2] [(signed char)12] = ((/* implicit */_Bool) var_16);
                }
            } 
        } 
        arr_9 [(short)2] = (_Bool)0;
        var_21 = ((/* implicit */long long int) (_Bool)0);
    }
}
