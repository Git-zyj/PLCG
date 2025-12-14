/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140359
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
    var_19 |= ((unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 + 1] [i_1])))));
                        var_21 = ((/* implicit */_Bool) max((var_17), (((/* implicit */signed char) (_Bool)1))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            var_22 |= ((/* implicit */int) ((signed char) var_9));
            var_23 = ((/* implicit */unsigned int) (short)768);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (unsigned short)0))));
        }
    }
}
