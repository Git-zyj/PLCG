/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116364
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_20 += (short)-16;
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)15))))), ((unsigned char)0)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21372)) ? (4277461298U) : (4277461281U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_22 = ((/* implicit */short) ((long long int) (unsigned char)0));
            var_23 = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */long long int) (-(((/* implicit */int) (short)-15)))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-29193)) != (((/* implicit */int) (unsigned short)3465))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            var_25 = ((((/* implicit */_Bool) var_2)) ? (((arr_8 [i_1] [i_1] [i_1]) << (((((/* implicit */int) (unsigned char)218)) - (199))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))));
            var_26 = ((unsigned long long int) arr_10 [i_1 - 2] [i_1] [i_3 + 1]);
            var_27 += ((/* implicit */unsigned short) var_3);
            var_28 = ((/* implicit */short) 4277461281U);
        }
        var_29 = max((max((((/* implicit */unsigned int) (unsigned char)20)), (2162493731U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2132473564U) : (var_2))))))));
    }
    var_30 = ((/* implicit */unsigned char) var_16);
    var_31 = ((/* implicit */unsigned char) var_13);
}
