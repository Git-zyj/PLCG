/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127295
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
    var_19 = ((/* implicit */unsigned short) ((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = arr_3 [i_1] [i_2];
                    var_21 = ((/* implicit */_Bool) (+(min((((/* implicit */int) arr_3 [i_1] [i_0 + 3])), ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)135)) / (((/* implicit */int) (unsigned short)17)))) ^ ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 3]))))));
        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)54876)) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0 + 3])) >> (((((/* implicit */int) (unsigned short)54799)) - (54789))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (var_11))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_25 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_8 [i_0 - 2] [i_3] [i_3])))) * (((/* implicit */int) arr_1 [i_0]))));
            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_10 [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_3])))) > (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_13)))))))));
        }
    }
}
