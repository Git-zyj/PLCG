/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119786
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
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)230)) ? ((+(((/* implicit */int) min(((unsigned char)240), ((unsigned char)4)))))) : (((/* implicit */int) (unsigned char)106))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)179)))), (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)192))))))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), ((((((~(((/* implicit */int) (unsigned char)195)))) + (2147483647))) >> (((((/* implicit */int) max((var_13), (var_11)))) - (157)))))));
    var_20 = ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_14), (var_7)))) ? (((((/* implicit */_Bool) arr_7 [(unsigned char)8] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1] [(unsigned char)4])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 2] [(unsigned char)6])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1 + 4] [i_2] [i_3] [i_3 - 1] [i_1] = arr_6 [i_0];
                        var_22 = (unsigned char)192;
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)167)) / (((/* implicit */int) (unsigned char)237)))) >> (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)27), ((unsigned char)179)))) < ((~(((/* implicit */int) var_10)))))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
                    {
                        var_24 += ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) max((var_0), ((unsigned char)64))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_1])) ? ((+(((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0)))))) : (max((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned char)100))))));
                        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) arr_8 [i_1] [i_4] [i_4 + 1] [i_1])), ((~(((/* implicit */int) (unsigned char)255))))))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) (unsigned char)33))));
                    var_27 *= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)105)), (((((/* implicit */_Bool) max((var_2), (var_4)))) ? (((/* implicit */int) arr_14 [i_2 - 1] [i_0] [i_1 + 3] [i_1 + 1] [i_1])) : (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_1))))))));
                }
            } 
        } 
    } 
}
