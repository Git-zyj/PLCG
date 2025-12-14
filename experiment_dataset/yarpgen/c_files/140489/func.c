/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140489
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
    var_20 = ((/* implicit */_Bool) max((var_20), (min(((_Bool)0), (var_1)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = var_19;
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_19))));
        var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) ((var_13) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [(_Bool)1])) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_2 - 1] [i_2 - 1] = (!((_Bool)1));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((arr_1 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_16)))))));
            arr_8 [i_1] &= (!(var_19));
        }
        arr_9 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_25 *= ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
        var_26 = var_8;
        var_27 = arr_3 [i_3] [i_3];
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_28 = var_1;
                    var_29 = arr_20 [i_4] [i_5] [i_6];
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
}
