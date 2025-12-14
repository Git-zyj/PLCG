/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147704
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (max((((/* implicit */unsigned char) arr_1 [i_0])), (max((((/* implicit */unsigned char) (signed char)-64)), ((unsigned char)235)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1])) + (2147483647))) << (((((((((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])) + (134))))) - (511)))));
                        var_21 = arr_10 [i_0];
                        arr_12 [i_0] [i_0] [(unsigned char)8] [i_0] &= (signed char)74;
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_4])) + (((/* implicit */int) ((signed char) arr_13 [i_4 + 1])))));
        arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) && (((/* implicit */_Bool) arr_13 [i_4 + 2]))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) (unsigned char)123)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_13 [i_4])))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_4 - 1])), ((unsigned char)64))))));
    }
    var_24 = var_3;
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)11)), (var_2))))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)127)))))) : ((~(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_26 += ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_17 [i_5])))) : (((/* implicit */int) ((signed char) (unsigned char)34))))), ((+(((/* implicit */int) (signed char)-53))))));
        arr_18 [(signed char)13] = (unsigned char)17;
        var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-91)) < (((/* implicit */int) arr_16 [i_5])))))));
    }
}
