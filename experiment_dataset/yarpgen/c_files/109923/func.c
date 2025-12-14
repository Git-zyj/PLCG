/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109923
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
    var_14 = var_1;
    var_15 = min((var_12), (var_11));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) var_7))))));
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */int) var_3)) % (((/* implicit */int) arr_3 [i_0 - 1])))), (((/* implicit */int) min((var_11), (((/* implicit */signed char) (!(var_2)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((_Bool) arr_0 [i_4]));
        var_21 = ((_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)102))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_4] [i_4])) < (((/* implicit */int) var_0))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_16 [i_5] [i_5] [(signed char)3] [i_7] = ((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
                    var_24 = ((/* implicit */signed char) ((((min((((/* implicit */int) var_0)), (((((/* implicit */int) arr_15 [i_5] [i_6] [(_Bool)1] [i_7])) - (((/* implicit */int) (signed char)93)))))) + (2147483647))) << (((((((/* implicit */_Bool) max((arr_15 [i_5] [i_6] [i_7] [i_7]), (((/* implicit */signed char) arr_13 [i_5] [(signed char)14] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_6] [i_7])) || (var_9)))) : (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_2))))))) - (1)))));
                }
            } 
        } 
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)-53))));
    }
}
