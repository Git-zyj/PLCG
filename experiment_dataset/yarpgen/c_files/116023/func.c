/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116023
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_1] [i_1] [i_2] = (((+(var_7))) <= (((/* implicit */int) ((_Bool) var_13))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7)))))));
            }
            var_21 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)48));
            var_22 = ((/* implicit */unsigned short) var_0);
        }
        arr_7 [i_0] = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) -1296343800)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((var_18) || (((/* implicit */_Bool) var_9)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)48))));
        var_23 = ((/* implicit */short) (-((-(min((((/* implicit */long long int) (unsigned short)20)), (var_0)))))));
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65515)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 245760)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)1))))))));
    }
    var_25 = ((/* implicit */int) var_16);
}
