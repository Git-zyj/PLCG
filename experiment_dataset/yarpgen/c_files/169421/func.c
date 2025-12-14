/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169421
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) ((signed char) var_5))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */long long int) var_2)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (var_9)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_9))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_5 [3])))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        for (int i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [11ULL] [(unsigned short)3])) && (((/* implicit */_Bool) (unsigned short)15877))))), (max((-1323899787), (((/* implicit */int) arr_11 [i_3]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) -1323899769)) ? (var_1) : (((/* implicit */long long int) var_5)))) : (var_10)))));
                var_15 ^= ((/* implicit */unsigned int) var_5);
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned char) 1323899786);
                arr_16 [i_3] = ((/* implicit */unsigned short) max(((+(arr_12 [i_4 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10))))))))));
            }
        } 
    } 
}
