/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162056
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3291)) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)42463)))))) : (((/* implicit */int) (unsigned short)42463))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [i_1]), (var_10)))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) (unsigned char)215))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_3 [i_1 - 1] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)60)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (unsigned short)42463);
    var_15 = var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_9)))));
        arr_7 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
    }
}
