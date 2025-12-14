/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130094
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
    var_10 = var_0;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (signed char)-2)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(short)1] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_6 [i_0]))));
                    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) (_Bool)0)))))));
                        var_12 = ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])));
                        var_13 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_5 [(_Bool)1]))));
                    }
                }
            } 
        } 
    }
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_7)) | (((/* implicit */int) (!(((((/* implicit */int) var_6)) == (((/* implicit */int) (_Bool)1)))))))));
    var_15 = var_9;
    var_16 |= (!(var_1));
}
