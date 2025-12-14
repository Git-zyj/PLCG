/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138678
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [8U] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_1 - 2] [i_0 - 3]), (var_0)))) ? (var_9) : (((/* implicit */int) ((((/* implicit */unsigned int) max((1552844560), (-617944214)))) != (((((/* implicit */_Bool) -1552844565)) ? (((/* implicit */unsigned int) arr_3 [i_0 - 2] [6] [i_0 - 2])) : (arr_2 [i_0]))))))));
                    var_11 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(-1552844580)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])) ? (-315870988) : (var_2)))) : (((((/* implicit */_Bool) 1552844547)) ? (((/* implicit */unsigned int) 1552844547)) : (var_8)))))));
                    arr_8 [i_0 + 2] [i_1] [i_0 + 2] &= ((/* implicit */unsigned int) (-(-315870998)));
                    arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((3126147162939464297ULL) != (((/* implicit */unsigned long long int) -1552844565))))), ((~(var_7))))) ^ (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) 280723618)) >= (min((((/* implicit */unsigned int) arr_3 [i_0] [4U] [i_0 + 1])), (var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_3]))))) ? (((/* implicit */unsigned int) ((arr_1 [i_0 - 2] [i_0 - 2]) << (((arr_0 [0] [i_2 - 2]) - (1756733482)))))) : ((+(arr_11 [6] [i_0 + 1]))))))));
                        arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])) ? (var_1) : (((/* implicit */unsigned int) arr_10 [i_1 + 1] [i_1] [i_1]))))), (min((-2248990896456852153LL), (((/* implicit */long long int) arr_10 [i_1 - 2] [i_1] [i_1]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 280723594)) / (((((/* implicit */_Bool) arr_3 [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) arr_15 [i_0 - 3] [i_1 + 1] [i_2] [i_4])) : (var_1)))))) ? (arr_15 [i_4] [i_1 - 1] [i_1 - 1] [i_0]) : (arr_13 [i_0 + 3] [i_1 - 1] [i_0] [i_4] [i_2] [8U])));
                        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (unsigned char)16))))) ? (((arr_17 [i_0] [i_1 - 1] [i_2] [i_4] [i_0 - 3]) / (25165824))) : (var_10)))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (3221225472U)))) / (((unsigned long long int) 2046U))))));
                        var_14 = var_8;
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) 2147483647);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (min((var_6), (((/* implicit */unsigned long long int) (~(var_0)))))) : (((/* implicit */unsigned long long int) var_0))));
}
