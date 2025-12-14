/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164565
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (~(max((arr_4 [i_1 - 3] [i_1 - 2] [i_1 - 3]), (arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 1])))));
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_5 [i_1 - 1] [i_1 + 1]))))))));
                var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (short)18369)))) <= (arr_4 [i_0] [i_0] [i_1 - 1])));
                var_12 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)21996));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) arr_1 [i_2]);
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])) : (var_6))), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-18359)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (2996365892063046377LL) : (((/* implicit */long long int) arr_9 [i_2]))))) ? (((var_9) << (((arr_5 [i_2] [i_2]) + (1595007051))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */int) (short)-18369)))))))));
        arr_12 [i_2] = ((/* implicit */signed char) 18446744073709551615ULL);
    }
    var_13 += ((/* implicit */_Bool) var_9);
    var_14 = ((/* implicit */int) var_9);
}
