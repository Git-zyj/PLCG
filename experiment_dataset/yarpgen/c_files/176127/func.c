/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176127
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(var_14)))))));
    var_17 = ((/* implicit */unsigned char) var_0);
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((107858352U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) | (1399763824)))), (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned char) 1464832292U);
        arr_5 [i_0] [i_0] = (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (3319427046U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_19 = ((/* implicit */_Bool) var_13);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned char) ((((arr_8 [i_2]) + (arr_11 [i_1]))) < (975540248U)));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_8 [i_2]), (arr_7 [i_2] [i_1]))))));
            arr_14 [18U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (min((((arr_11 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned char)104)) ? (3319427049U) : (arr_8 [i_1]))))) : (arr_8 [i_1])));
            var_20 = ((/* implicit */unsigned int) min((var_20), (var_2)));
        }
        arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) arr_10 [i_1] [13U])), (var_6))) : (arr_11 [i_1])));
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_1]);
    }
}
