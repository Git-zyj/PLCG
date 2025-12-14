/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145635
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
    var_10 = ((/* implicit */_Bool) var_9);
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 *= ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((unsigned int) var_2);
        var_13 = ((/* implicit */_Bool) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_5 [i_1]))))) ? ((-(arr_7 [i_1]))) : (((var_0) ^ (arr_7 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned int) arr_5 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_15 |= ((/* implicit */short) 4279174236U);
                            arr_20 [i_2] [i_2] = (!(var_8));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23274)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            arr_21 [i_1] [i_2] = ((/* implicit */_Bool) (short)-27);
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (_Bool)1))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_2 [1U]))));
        }
        var_19 = ((/* implicit */unsigned int) ((((unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1])) == (((unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) ((_Bool) ((arr_13 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_10 [6U]))));
    }
    var_21 = ((/* implicit */short) var_5);
}
