/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180342
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
    var_20 = ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */unsigned char) var_4);
    var_22 = var_10;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0 - 1])));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 - 4] [i_0 - 4]));
    }
    for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_23 = var_14;
        var_24 = ((/* implicit */int) ((((/* implicit */int) var_12)) == (((((/* implicit */int) var_3)) / (((/* implicit */int) var_5))))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((var_11) ? (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_0)) : (558551906910208ULL)))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)5775)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) & (var_2));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (arr_7 [i_2] [i_3 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_2 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)214))))) != (((((/* implicit */_Bool) (unsigned char)72)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))))));
    }
}
