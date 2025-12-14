/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151127
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
    var_12 = var_4;
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)176)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) (unsigned char)200))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)127))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_0 [i_0]))));
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)131))));
        arr_4 [i_0] [i_0] = arr_1 [(unsigned char)8];
        var_15 += ((unsigned char) arr_0 [(unsigned char)14]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_5 [i_1]))))));
        var_17 = var_3;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned char)184))));
                var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)132))));
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_20 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) <= (((/* implicit */int) (unsigned char)225)))))));
                arr_15 [i_2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_9))))));
            }
            arr_16 [i_1] [i_1] [(unsigned char)4] = ((unsigned char) (unsigned char)135);
        }
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)103))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)204))));
    }
}
