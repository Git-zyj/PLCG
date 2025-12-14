/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147755
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (((unsigned char) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_11 = ((/* implicit */_Bool) ((short) ((arr_0 [i_0]) | (((/* implicit */int) arr_1 [i_0] [19LL])))));
        arr_5 [i_0] [(signed char)8] = (unsigned char)243;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_12 |= ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) (unsigned char)235))));
            var_13 ^= ((((/* implicit */_Bool) (unsigned short)44557)) || (((/* implicit */_Bool) (unsigned char)28)));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))));
        }
        arr_10 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)237)), (((int) max((((/* implicit */unsigned int) var_6)), (var_9))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) 17)) : (var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)242))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (arr_12 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (arr_0 [i_2]) : (((/* implicit */int) (unsigned char)186))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)52))) ? (((/* implicit */int) ((unsigned char) (+(var_4))))) : ((~(((/* implicit */int) (short)-14218))))));
}
