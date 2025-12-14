/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16916
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_15 = ((/* implicit */short) 1842096178);
            var_16 = ((/* implicit */_Bool) var_3);
        }
    }
    var_17 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_18 = (+(((/* implicit */int) ((((/* implicit */int) arr_3 [(_Bool)1] [i_2])) <= (((/* implicit */int) (unsigned short)0))))));
        arr_9 [i_2] = ((((/* implicit */_Bool) arr_3 [(unsigned short)8] [(unsigned short)16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((arr_8 [i_2]) < (var_1)));
    }
    var_19 = ((/* implicit */unsigned int) var_13);
}
