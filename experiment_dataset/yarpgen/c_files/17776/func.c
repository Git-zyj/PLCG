/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17776
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
    var_14 |= ((/* implicit */unsigned short) var_6);
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) - (((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) | (var_3)))) : (((((/* implicit */_Bool) 2147483647)) ? (var_13) : (((/* implicit */unsigned long long int) var_9))))))));
    var_16 = ((/* implicit */int) ((14010475585333414723ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)242)) & (((/* implicit */int) (unsigned char)17))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) (unsigned char)242);
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [(signed char)8] [i_0 + 2] [i_1 - 3])) >> (((((/* implicit */int) arr_5 [0U] [i_0 - 1] [i_1 + 1])) - (22972))))))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2007803973U)) ? (((/* implicit */int) (short)11575)) : (((/* implicit */int) (unsigned short)30284))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned short) (-(-1634241662)))))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (short)-15708))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */int) (~(var_13)));
            var_22 = ((/* implicit */unsigned int) (short)-24443);
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) arr_0 [(short)0])))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_24 += ((/* implicit */long long int) arr_13 [i_4] [i_4]);
        var_25 = ((/* implicit */unsigned char) var_1);
        var_26 = ((/* implicit */short) arr_13 [i_4] [i_4]);
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) == (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32765)), ((unsigned short)51445)))) ? (1243582715105768517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4])))))));
    }
    for (unsigned int i_5 = 4; i_5 < 15; i_5 += 4) 
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((/* implicit */int) (unsigned short)8430)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) == (var_5)))) | ((~(((/* implicit */int) (signed char)127)))))))))));
        var_29 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_3)) ? (arr_17 [i_5 - 4]) : (arr_17 [i_5 - 2]))), (((/* implicit */unsigned long long int) 780359687)))) != (((/* implicit */unsigned long long int) var_9))));
    }
}
