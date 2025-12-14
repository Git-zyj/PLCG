/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125277
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (+(var_3)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_12))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_19 -= ((/* implicit */short) ((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) var_11)))))));
            arr_9 [i_2] [(unsigned char)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(var_14)))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((var_9) << (((/* implicit */int) var_6)))), (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_7)))))))))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
            arr_13 [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_5))))) & (((((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_5))))) | (((/* implicit */int) var_11))))));
            var_22 &= ((/* implicit */short) (~(((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))));
        }
        arr_14 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_12))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_13)))))))), ((~(((/* implicit */int) var_13))))));
        var_23 = ((/* implicit */unsigned char) var_12);
        var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_11)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_12)))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_2))));
}
