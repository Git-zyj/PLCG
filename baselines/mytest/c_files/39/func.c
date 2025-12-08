/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/39
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */signed char) var_6);
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (_Bool)1);
                        var_17 = min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) arr_4 [i_1])))), (arr_7 [i_1] [i_1] [i_3] [i_3]));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_12))))));
        var_19 ^= (unsigned short)18566;
    }
    var_20 = (-(max((max((((/* implicit */unsigned long long int) var_13)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
    var_21 = ((/* implicit */_Bool) var_1);
}
