/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1249
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) 3LL);
            var_11 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_8) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [3LL])))))) : (((((/* implicit */_Bool) (short)0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20828)))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_2] = arr_5 [i_0];
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0]))))) * (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_0]))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [8LL] [8LL])) ? (var_1) : ((-9223372036854775807LL - 1LL))));
            arr_14 [i_0] = ((/* implicit */long long int) ((short) var_7));
            arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [(unsigned short)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) : (arr_13 [i_0] [i_0])));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        arr_21 [i_0] [i_3] [i_3 - 1] [3] [i_5] = ((/* implicit */int) 9LL);
                        var_13 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_6] [i_6 - 1] = arr_13 [i_6 - 1] [i_0];
            var_14 = ((/* implicit */long long int) var_8);
        }
        var_15 = ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (9223372036854775799LL))) | (-369457799273509655LL));
    }
    var_16 = ((/* implicit */unsigned short) var_5);
}
