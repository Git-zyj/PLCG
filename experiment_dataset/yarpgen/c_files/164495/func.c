/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164495
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
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0 - 1] = ((/* implicit */_Bool) var_11);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_0])) + (((/* implicit */int) (unsigned char)174)))))));
                }
            } 
        } 
        arr_10 [i_0] = (!(((/* implicit */_Bool) 12956562331592590058ULL)));
        var_20 -= ((/* implicit */unsigned char) (~(-9223372036854775807LL)));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)23961)) ? (5448828152634965581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((((1237699107U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (39213062U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8895622350813706211LL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)28430)), (var_1)))) : (((/* implicit */int) var_6))))) : (((((((/* implicit */_Bool) (unsigned char)94)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) * (var_9)))));
    var_22 = ((/* implicit */_Bool) ((12956562331592590054ULL) ^ (12956562331592590073ULL)));
}
