/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138549
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
    var_12 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)25655)))) | ((~(((/* implicit */int) (short)-452))))))));
    var_13 = ((/* implicit */signed char) ((short) var_0));
    var_14 = ((/* implicit */short) (+(((int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_5 [i_1 - 2] [i_1 - 1] [i_0])))));
            var_15 = ((/* implicit */unsigned short) var_3);
        }
        arr_7 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-1)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-1)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    }
}
