/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124101
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) (short)0)));
        var_16 = ((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 3]);
                        arr_11 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 3]))));
                        arr_12 [i_0 + 3] [i_1] [i_2] [(_Bool)1] &= (-(((/* implicit */int) (signed char)102)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 4; i_4 < 10; i_4 += 4) 
    {
        arr_15 [i_4] |= ((/* implicit */signed char) var_6);
        var_18 = ((/* implicit */signed char) arr_14 [i_4 - 1]);
    }
    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))))))));
    var_20 = ((/* implicit */short) var_7);
}
