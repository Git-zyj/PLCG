/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12520
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
    var_10 = ((/* implicit */signed char) ((-2147483636) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20351)))))));
    var_11 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (_Bool)1)), (967499461)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0] [i_1]));
            var_13 -= ((/* implicit */long long int) (((~(((/* implicit */int) var_6)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_1))))));
            var_14 = ((/* implicit */signed char) var_1);
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0]))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -2147483643))));
                            var_17 = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned short)56101))))));
                            var_18 = ((/* implicit */unsigned short) (~(var_2)));
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (short)-18657))));
        }
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(unsigned short)8])))) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) < (var_2)));
        var_23 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)6])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
    }
}
