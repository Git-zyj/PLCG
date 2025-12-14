/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102929
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
    var_11 |= ((/* implicit */unsigned short) (-(var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 ^= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_13 *= ((/* implicit */short) (~(((/* implicit */int) arr_1 [6U]))));
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35139))) : (18446744073709551609ULL)))))))));
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                var_15 *= ((/* implicit */long long int) ((6ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13378)))));
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 3])) || (((/* implicit */_Bool) arr_4 [i_2 - 3] [i_2 - 3]))));
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(arr_2 [(_Bool)1] [i_1])))) : (((unsigned long long int) arr_7 [i_0]))));
            }
            for (short i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) - (arr_6 [i_4] [i_0] [i_0])));
                    var_19 += ((/* implicit */short) (+((~(((/* implicit */int) var_3))))));
                }
                var_20 |= ((/* implicit */long long int) (unsigned short)35139);
            }
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                var_21 *= var_2;
                var_22 |= ((/* implicit */unsigned long long int) ((signed char) arr_13 [i_0] [i_1] [i_1] [i_5] [i_5]));
                arr_18 [i_0] [i_0] [i_5] |= ((/* implicit */short) ((((arr_16 [(unsigned short)6] [(unsigned short)6]) ^ (((/* implicit */unsigned long long int) var_0)))) << ((((~(((/* implicit */int) var_5)))) + (46081)))));
                var_23 += ((/* implicit */unsigned long long int) ((_Bool) var_0));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_22 [i_0] [i_0] |= ((/* implicit */int) arr_1 [i_6]);
            var_24 *= ((/* implicit */signed char) (-(7ULL)));
        }
        var_25 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_12 [(short)7]));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((unsigned long long int) var_9)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_23 [(short)6] [i_7])) : (((/* implicit */int) arr_24 [i_7] [i_7]))))))))));
        var_27 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)13332)) ? (((/* implicit */int) arr_24 [12U] [i_7])) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_25 [i_7] [i_7]))));
    }
}
