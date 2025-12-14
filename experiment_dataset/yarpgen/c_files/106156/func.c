/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106156
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)20041), (((/* implicit */unsigned short) arr_5 [i_1] [i_2 - 1]))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_2] [i_1])))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)39629))) : ((~(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)61))))))));
                    var_19 &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)51379))));
                    arr_8 [i_0] [i_1] [i_1] = arr_0 [(unsigned short)14] [i_0];
                    arr_9 [i_0] [i_0] [(signed char)16] [(unsigned short)23] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (unsigned short)43374))) % (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-83)))) <= (((/* implicit */int) (signed char)-28)))));
}
