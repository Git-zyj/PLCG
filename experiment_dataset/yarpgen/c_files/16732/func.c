/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16732
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (unsigned short)53223);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1]);
            var_11 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [8] [i_1] [8]))))), (max((18446744073709551610ULL), (var_3)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */int) var_3);
            var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned char)15] [i_2])) ? (((/* implicit */int) arr_0 [3LL] [i_2])) : (((/* implicit */int) arr_6 [i_0] [(signed char)11]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [(_Bool)1]))) & (arr_1 [i_0 + 1] [i_2]))) : (arr_1 [i_0] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0 + 1])) - (((/* implicit */int) arr_6 [i_0] [i_0 + 1])))))));
            var_14 |= ((/* implicit */short) arr_4 [i_0] [i_0]);
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) -132206620)))));
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)236))))) ? ((+(arr_1 [i_0] [i_0 - 1]))) : (max((arr_1 [i_3] [i_0 - 1]), (arr_1 [i_0] [i_0 - 1])))));
            arr_12 [(_Bool)1] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_8 [i_0 + 1] [i_3] [i_3]))));
        }
        arr_13 [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(signed char)7] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1]))))) : (((((((/* implicit */_Bool) arr_6 [2ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (arr_8 [i_0] [16LL] [i_0 - 1]))) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 1])))))));
    }
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_1))));
    var_17 = max((((/* implicit */int) var_6)), (132206620));
}
