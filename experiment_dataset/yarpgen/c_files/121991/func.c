/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121991
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
    var_11 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)32766))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_7)))))) ? (8257536) : (((/* implicit */int) max((var_10), (var_10)))));
        arr_4 [13] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        {
                            arr_21 [i_1] [1LL] [i_1] [6] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32759))));
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)29924)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) : (5628780745659471556ULL))))))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_2] |= ((/* implicit */unsigned int) ((long long int) (signed char)85));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned char) var_0)))));
            }
            arr_23 [i_2] [i_2] &= ((/* implicit */int) (signed char)127);
        }
        arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1])) && (((/* implicit */_Bool) 3652916870123816842LL))));
        var_15 = ((/* implicit */short) (-(8257534)));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((unsigned long long int) ((((/* implicit */_Bool) 1275226028)) ? (((/* implicit */int) arr_6 [(signed char)1])) : (((/* implicit */int) var_10))));
        arr_29 [(signed char)5] [i_6] = ((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
        var_16 &= ((/* implicit */unsigned long long int) var_9);
    }
}
