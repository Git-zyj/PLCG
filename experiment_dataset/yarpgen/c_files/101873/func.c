/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101873
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned int) var_6)))));
        var_14 = ((/* implicit */_Bool) ((arr_1 [i_0 - 1]) % (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)13)))))));
            var_16 |= ((/* implicit */_Bool) arr_0 [i_0 - 1]);
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((var_10) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((1065353216) - (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0])) ? (80115148) : (var_11)))))));
            var_17 = ((/* implicit */signed char) var_11);
        }
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            var_18 ^= ((/* implicit */short) arr_7 [i_0 - 1] [i_0 - 1] [i_2 - 1]);
            var_19 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 2] [i_0 - 1]))))))));
            var_20 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        }
    }
    var_21 = ((/* implicit */unsigned int) var_9);
    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))), ((+(var_0)))));
    var_23 = ((/* implicit */short) (((!((!(var_1))))) ? ((~(min((((/* implicit */unsigned int) var_7)), (var_0))))) : (((((var_9) ? (var_0) : (((/* implicit */unsigned int) var_8)))) - (var_0)))));
}
