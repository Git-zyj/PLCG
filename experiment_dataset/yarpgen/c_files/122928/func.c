/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122928
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [(short)8] [(short)8] = ((/* implicit */unsigned short) arr_0 [i_0]);
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)29425)) ^ (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) % (((/* implicit */int) arr_0 [i_0]))))));
            arr_7 [2ULL] [(unsigned short)10] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
            arr_8 [i_0] [i_1] = (short)-29417;
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) var_13)));
        }
    }
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    var_17 = ((/* implicit */unsigned char) var_4);
}
