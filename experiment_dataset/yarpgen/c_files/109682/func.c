/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109682
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
                            var_15 = var_11;
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_17 = var_4;
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_19 = var_4;
                    arr_19 [i_5] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))));
                }
            }
            var_20 |= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((unsigned char) var_0)))), (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
        }
        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            var_21 += var_6;
            var_22 = min((max((var_10), (((unsigned char) var_2)))), (max((var_11), (var_9))));
        }
        var_23 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_9), (var_1)))) ? (((/* implicit */int) max((var_4), (var_5)))) : (((/* implicit */int) max((var_9), (var_1)))))), (((/* implicit */int) var_1))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) max((var_5), (var_12)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_3)))))));
    }
    var_25 = var_1;
    var_26 = min((var_6), (var_6));
}
