/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133868
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
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */long long int) min((((/* implicit */short) var_5)), (var_15)));
    var_20 = ((/* implicit */short) (~(var_8)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)194)) - (181))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1602082908305170492ULL)))))));
        arr_3 [i_0] = ((((/* implicit */int) (signed char)52)) != (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 1])))));
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (+(arr_1 [i_1 + 2])));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (arr_4 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 + 1])))), ((+(arr_9 [i_1] [i_1])))));
            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (signed char)23))) || (((/* implicit */_Bool) var_6))));
        }
        arr_12 [12ULL] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)2] [(unsigned char)2])) ? (((((/* implicit */int) (signed char)52)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_1 - 1]))))) & (min((var_8), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
        var_23 += ((/* implicit */_Bool) ((unsigned int) (unsigned short)48663));
    }
    for (short i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */signed char) (unsigned short)48663);
        arr_17 [i_3] = ((/* implicit */long long int) (!(var_7)));
    }
}
