/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137677
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (-2047561163)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [2U] [(short)9] |= ((/* implicit */unsigned char) (~(((var_11) ^ (((/* implicit */int) var_0))))));
                    arr_8 [(signed char)5] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_0 [i_2]), (var_5)))), ((+(((/* implicit */int) (signed char)107))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (((~(12770402737485412783ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))), ((signed char)-107)));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)16930))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119)))))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((+(var_17))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_16))))))));
}
