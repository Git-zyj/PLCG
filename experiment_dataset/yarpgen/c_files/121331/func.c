/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121331
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (4249856758U))))))));
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) var_12);
        var_20 = ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)19349)))) ^ (((/* implicit */int) ((unsigned char) var_9))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((var_10) / (arr_6 [i_1] [i_0])));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (arr_1 [i_0]))))));
        }
    }
}
