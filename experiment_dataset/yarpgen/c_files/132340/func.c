/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132340
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (12572107218841712978ULL) : (7181080706892466183ULL)))) || (((/* implicit */_Bool) ((12572107218841712978ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [9ULL])) ? (1648578951) : (((/* implicit */int) arr_1 [i_0]))))))))));
        var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)11] [(short)11])))))) <= (12572107218841712967ULL)))), ((unsigned char)215)));
    }
    var_11 &= ((/* implicit */_Bool) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))));
    /* LoopSeq 1 */
    for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        var_12 &= ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (10393402377592312330ULL)))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) (unsigned char)208))));
            arr_9 [i_2] = ((/* implicit */_Bool) ((short) arr_5 [i_2]));
            arr_10 [7] [7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_0))));
            var_14 -= ((((/* implicit */int) var_1)) % (var_0));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((0ULL) > (10393402377592312326ULL)));
                        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (arr_12 [i_1 - 4] [i_1 - 4]) : (var_2))) : (((var_8) / (((/* implicit */unsigned long long int) var_5))))));
                    }
                } 
            } 
        }
    }
}
