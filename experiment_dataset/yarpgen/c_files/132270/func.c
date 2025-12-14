/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132270
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - (min((max((((/* implicit */int) var_3)), (var_8))), (((((/* implicit */_Bool) (short)48)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_10))))))));
    var_14 = var_0;
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 6; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_4);
                    var_17 *= ((/* implicit */unsigned char) ((((((arr_1 [i_1 + 3]) + (2147483647))) >> (((((/* implicit */int) var_7)) - (136))))) << (((((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 1] [i_2 - 1] [i_2 - 1])) - (13)))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)50)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 1]))))) && (((/* implicit */_Bool) var_6)))))));
                    var_19 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) (unsigned char)214)))), (-2147483628))) == (min((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)(-32767 - 1))))), (((((/* implicit */int) (short)-63)) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_1]))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 28))));
                }
            } 
        } 
    } 
}
