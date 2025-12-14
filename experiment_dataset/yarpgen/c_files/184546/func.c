/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184546
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7U)) ? (((int) (-9223372036854775807LL - 1LL))) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_0 [i_0])))))))), (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned short)28))))) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_12 [i_3] [(unsigned short)10] [i_3] = ((((((/* implicit */_Bool) arr_10 [i_3])) ? ((-(0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                        var_18 = ((/* implicit */int) max((((/* implicit */long long int) (-(min((arr_5 [i_2] [i_4]), (arr_8 [i_2] [i_3] [11ULL])))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_3]) : (((/* implicit */long long int) arr_4 [i_4]))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [1])) ? (var_4) : (arr_8 [5] [3U] [10])))) : (arr_9 [i_1] [11LL] [11LL]))) : (((/* implicit */long long int) (+(arr_8 [i_1] [i_1] [i_1]))))));
        var_19 -= ((/* implicit */short) min((min((((long long int) arr_3 [3LL] [3LL])), (((/* implicit */long long int) min((var_3), (arr_5 [i_1] [i_1])))))), (((/* implicit */long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1]))))))))));
    }
    var_20 -= ((/* implicit */int) ((10LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
}
