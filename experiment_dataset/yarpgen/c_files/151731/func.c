/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151731
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
    var_16 ^= ((/* implicit */unsigned long long int) (unsigned short)16383);
    var_17 = ((/* implicit */unsigned int) var_13);
    var_18 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (arr_4 [(_Bool)1] [i_2]) : (arr_2 [i_0]))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (-663478826) : (((/* implicit */int) arr_3 [i_0])))), (663454631))))));
                    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_13)))), ((-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (562400197607424ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 3] [(unsigned char)6])) != (arr_6 [i_1] [i_1 - 2])))))));
                    var_21 = ((/* implicit */signed char) (+(var_13)));
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((_Bool) ((arr_6 [i_0] [i_2]) <= (((/* implicit */unsigned long long int) arr_2 [i_0])))))), ((unsigned char)236)));
                }
            } 
        } 
        var_23 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (786036779)))), (min((4128768ULL), (((/* implicit */unsigned long long int) (unsigned char)243))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) arr_6 [i_3] [i_3]);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-28481))) ? (((/* implicit */int) arr_7 [(unsigned char)7] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3]))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) var_12);
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((long long int) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) ^ (((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_8)))))));
    }
}
