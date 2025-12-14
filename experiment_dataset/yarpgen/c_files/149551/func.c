/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149551
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
    var_15 |= var_4;
    var_16 = ((_Bool) max((((((/* implicit */_Bool) (short)24859)) ? (var_4) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_1])))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3])) ? (-840399564) : (((/* implicit */int) var_13)))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-89)))))));
                    }
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-89)) ? (-435207571) : (((/* implicit */int) (unsigned char)2))));
                }
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        var_20 = ((/* implicit */signed char) (((_Bool)1) || ((_Bool)1)));
        var_21 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)87)))), ((~(((/* implicit */int) var_13))))));
        var_22 = ((/* implicit */int) (signed char)100);
    }
}
