/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104339
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_10 &= ((/* implicit */short) var_2);
                        arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1))));
                        var_11 = ((/* implicit */unsigned short) ((signed char) arr_2 [i_1 + 1]));
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
                    }
                    arr_9 [8U] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) -164481170)) & (var_9))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) ((_Bool) (signed char)117))) ^ ((~(((/* implicit */int) arr_4 [i_1]))))))));
                }
            } 
        } 
    } 
    var_13 = var_9;
    var_14 = ((short) var_6);
}
