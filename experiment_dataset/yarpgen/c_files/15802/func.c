/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15802
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) + (var_9)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        arr_12 [i_0 - 1] [i_1] [i_0 + 1] [(signed char)5] = ((/* implicit */_Bool) (signed char)-116);
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0])) ? (arr_5 [i_3 - 1] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6808)))))) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3342841752U)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_1 [i_1]))))))));
                    }
                    var_14 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0 - 1]);
                    var_15 = ((/* implicit */signed char) (unsigned short)42358);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_6)))));
}
