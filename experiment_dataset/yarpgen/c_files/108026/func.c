/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108026
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) min((var_9), (min(((unsigned char)168), (var_1)))))))))));
    var_15 = ((/* implicit */_Bool) max((var_15), (var_6)));
    var_16 = (_Bool)1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1])), (max((((((/* implicit */_Bool) arr_1 [(unsigned char)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(unsigned char)8])))), (((/* implicit */int) (((_Bool)1) || (arr_6 [(unsigned char)3] [i_1]))))))));
                var_18 = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_3 [i_0]))));
                        arr_14 [i_0] [(_Bool)0] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned char)2])) <= (((/* implicit */int) arr_5 [(unsigned char)6] [(unsigned char)3] [i_1]))));
                    }
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 3])) >> (((((/* implicit */int) arr_3 [i_0 + 2])) - (175)))));
                }
                arr_16 [i_0 + 3] [i_0 + 3] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_0] [i_1])))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)87)) + (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = (_Bool)1;
}
