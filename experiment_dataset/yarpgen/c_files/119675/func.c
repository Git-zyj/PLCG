/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119675
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                        var_20 = ((/* implicit */int) arr_8 [i_0] [14ULL] [10]);
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (18446744073709551615ULL)));
                        var_22 = ((/* implicit */int) max((arr_10 [(short)2] [i_2] [i_2] [i_4] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                        var_23 -= ((((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)6] [i_4])) ? (((/* implicit */int) (signed char)-34)) : (var_15))) + (2147483647))) >> (((var_10) - (15109498171631631736ULL)))))) / (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_2] [i_0] [i_0]))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((9187199489093163392LL) == (((/* implicit */long long int) -1904488040))))));
                    }
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((((arr_8 [i_0] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_4 [11ULL] [i_0]))))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [(signed char)20] [i_2])))))));
                    var_26 = ((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2] [i_2 - 4] [i_2 - 3]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (short)-19227)), (var_1))) : (((/* implicit */unsigned long long int) var_15))))) ? ((~(((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
