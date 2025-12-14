/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175355
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
    var_13 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) min(((short)-27635), ((short)27635)))) : (((/* implicit */int) min(((unsigned char)8), (((/* implicit */unsigned char) var_9)))))))), (((long long int) (-(((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_14 = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */int) (unsigned char)118)) / (((/* implicit */int) (short)-27641))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((long long int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_1] [i_2] = (short)16987;
            var_16 = ((/* implicit */unsigned long long int) ((short) arr_2 [i_2]));
        }
        arr_12 [18ULL] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) (short)27665))))));
    }
    var_17 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_7)))));
}
